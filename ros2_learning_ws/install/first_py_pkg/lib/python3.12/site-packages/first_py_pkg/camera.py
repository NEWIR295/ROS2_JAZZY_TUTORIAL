#!/usr/bin/env python3

"""
Author: Mohamed Newir
File name: camera.py
Project Description: Publisher node send Image message over /camera topic to be viewed in RVIz or rqt  
"""
#used libraries
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2

# camera class
class camera(Node):
    def __init__(self):
        super().__init__('camera')
        self.get_logger().info('camera node started')
        self.camera_pub_ = self.create_publisher(Image,'/camera',1)
        timer_period_inSec = 1/15 #timer = 1/15s
        self.timer = self.create_timer(timer_period_inSec,self.timer_cb)
        self.cvBridge = CvBridge()
        # add 'cv2.CAP_V4L' so that the camera will be compatible with linux environment  
        self.cap = cv2.VideoCapture(0,cv2.CAP_V4L)
        
    #timer callback function
    def timer_cb(self):
        ret, mat = self.cap.read()
        image_msg = self.cvBridge.cv2_to_imgmsg(mat, encoding="bgr8")
        image_msg.header.frame_id = 'laptop_camera'
        self.camera_pub_.publish(image_msg)
        
#main function
def main(args=None):
    rclpy.init(args=args)
    myCamera = camera() #object from camera class
    #node is repeated continuously until it is stopped
    rclpy.spin(myCamera)
    myCamera.destroy_node() #destroy class object
    rclpy.shutdown() #close node
    
if __name__ == '__main__':
    main()