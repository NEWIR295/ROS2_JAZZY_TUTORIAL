#!/usr/bin/env python3

"""
Author: Mohamed Newir
File name: draw_circle.py
Project Description: Publisher node send Twist velocity over /turtle1/cmd_vel topic
                      to draw circles in Turtlesim and subscribe to /turtle1/pose topic 
                      to get turtle pose
"""
# used libraries
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from turtlesim.msg import Pose

# publisher class for drawing circles
class drawCircles(Node):
    def __init__(self):
        super().__init__('draw_circles') #init node with name: "draw_circles"
        self.get_logger().info('Start draw_circles node')
        #create publisher object with type Twist over '/turtle1/cmd_vel' topic and queue = 10
        self.cmd_vel_pub_ = self.create_publisher(Twist,'/turtle1/cmd_vel',10)
        #create subscriber object with type Pose listen to '/turtle1/pose' and queue = 10
        self.pose_sub_ = self.create_subscription(Pose,'/turtle1/pose',self.pose_cb,10)
        timer_period_inSec = 1 #time = 1s
        #create timer which called every 1s to publish a String
        self.timer = self.create_timer(timer_period_inSec,self.timer_cb)
    
    # timer call back function
    def timer_cb(self):
        msg = Twist() #create variable with Twist type
        msg.linear.x = 2.0
        msg.angular.z = 1.0
        self.cmd_vel_pub_.publish(msg) #publish msg data
    
    #subscriber callback
    def pose_cb(self, pose_msg : Pose):
        # view turtle location
        self.get_logger().info(f"postion X: {pose_msg.x}, Y: {pose_msg.y}, theta: {pose_msg.theta}")
    
    
        
#main function
def main(args=None):
    rclpy.init(args=args) #init node
    drawCircles_pub = drawCircles() #create object from class drawCircles
    #node is repeated continuously until i kill it
    rclpy.spin(drawCircles_pub)
    drawCircles.destroy_node() #destroy our node object
    rclpy.shutdown() #close node

if __name__ == '__main__':
    main()