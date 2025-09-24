#!/usr/bin/env python3

"""
Author: Mohamed Newir
File name: draw_circle.py
Project Description: Publisher,subscriber and client node send Twist velocity over /turtle1/cmd_vel topic
                      to draw circles in Turtlesim and subscribe to /turtle1/pose topic 
                      to get turtle pose and a by applying certain condition we send client request 
                      over /turtle1/set_pen 
"""
"""
Status : Not Completed, I will complete it later, I still miss her my Only Love. Yeah, I know I'm idiot to miss her.   
"""
#used libraries
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from turtlesim.msg import Pose
import time
from turtlesim.srv import SetPen

#class definition has publisher, subscriber and client 
class traveler_turtle(Node):
    def __init__(self):
        super().__init__('traveler_turtle') #init traveler_turtle node 
        self.get_logger().info('traveler_turtle started')
        #create publisher object with type Twist over '/turtle1/cmd_vel' topic and queue = 10
        self.cmd_vel_pup_ = self.create_publisher(Twist, 'turtle1/cmd_vel', 10)
        #create subscriber object with type Pose listen to '/turtle1/pose' and queue = 10
        self.pose_sub_ = self.create_subscription(Pose,'/turtle1/pose',self.pose_cb,10)
        #create client object with type SetPen over '/turtle1/set_pen' topic
        self.client = self.create_client(SetPen,'/turtle1/set_pen')
        #set time
        self.current_time = 0
        self.prev_time = 0
        self.request = SetPen.Request()
        
    def pose_cb(self,pose : Pose):
        cmd_msg = Twist()
        self.current_time = time.time()
        if pose.x >= 9.0 or pose.x <= 2 or pose.y >= 9.0 or pose.y <= 2:
            cmd_msg.linear.x = 1.0
            cmd_msg.angular.z = 1.0            
        else:
            cmd_msg.linear.x = 5.0
            cmd_msg.angular.z = 0.0
        if((self.current_time - self.prev_time) > 1):
            if pose.x > 5.5:
                self.get_logger().info('path line is set to be red')
                self.client_send_request(255,0,0,4)
            else:
                self.get_logger().info('path line is set to be green')
                self.client_send_request(0,255,0,4)
                
            self.prev_time = self.current_time
        self.cmd_vel_pup_.publish(cmd_msg) #msg is published over cmd_vel topic
    
    def client_send_request(self,r,g,b,width):
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting for service')
        #set pen color and width
        self.request.r = r
        self.request.g = g
        self.request.b = b
        self.request.width = width
        self.client.call_async(self.request) #send request to server
        


def main(args=None):
    rclpy.init(args=args) #init node
    traveler = traveler_turtle() #object from traveler_turtle
    #node is repeated continuously until i kill it
    rclpy.spin(traveler)
    traveler.destroy_node() #destroy class object
    rclpy.shutdown() #close node
    
if __name__ == '__main__':
    main()