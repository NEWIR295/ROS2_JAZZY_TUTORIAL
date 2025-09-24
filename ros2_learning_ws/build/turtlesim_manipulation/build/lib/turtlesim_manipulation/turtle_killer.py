#!/usr/bin/env python3

"""
Author: Mohamed Newir
File name: draw_circle.py
Project Description: Publisher,subscriber and client node send Twist velocity over /turtle1/cmd_vel topic
                      for our main turtle to target the rest of turtles in the Turtlesim and subscribe to /turtle1/pose topic 
                      to get our main turtle pose and a by applying control algorithms we send client request 
                      over /kill topic to eliminate the touched turtle also we use timer to spawn new turtle every 2 seconds
"""

#used libraries
import rclpy
from rclpy.node import Node
from turtlesim.srv import Spawn , Kill
from turtlesim.msg import Pose
from geometry_msgs.msg import Twist
from std_msgs.msg import Int64MultiArray


class TurtlesKiller(Node):
    def __init__(self):
        super().__init__('turtle_killer')
        self.vel_pub_ = self.create_publisher(Twist,'/turtle1/cmd_vel',10)
        self.get_logger().info('turtle _killer node started')
        self.pose_sub_ = self.create_subscription(Pose, '/turtle1/pose',self.pose_cb,10)
        self.timer_ = self.create_timer(2,self.timer_cb)
        self.kill_client_ = self.create_client(Kill,'/kill')
        self.spawn_client_ = self.create_client(Spawn,'/spawn')
        self.main_turtle_pose = Pose()
        self.spawn_request_ = Spawn().Request() 
        self.kill_request_ = Kill().Request()
        self.all_turtles =         None
        
    def pose_cb(self,msg : Pose):
        self.main_turtle_pose = msg
        
    
    def timer_cb(self):
        while not self.spawn_client_.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting for service')  
        self.spawn_client_.call_async(self.spawn_request_)
        
    def kill_request (self):
        while not self.kill_client_.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting for service')  
        self.kill_request_.name = None 
        
        
        
        
def main(args = None):
    rclpy.init(args=args)
    node = TurtlesKiller()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()
    

if __name__ == '__main__':
    main()