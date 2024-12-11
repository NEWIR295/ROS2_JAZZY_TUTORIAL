#!/usr/bin/env python3

#used Libraries
import rclpy
from rclpy.node import Node
from std_msgs.msg import String

class publisher_node(Node):
    def __init__(self):
        #call Node Class Constructor
        super().__init__('my_1st_Publisher') #node name: my 1st Publisher  
        self.get_logger().info(' publisher node started')
        #create publisher with string type topic with queue = 10 (a buffer for every msg sent)
        self.node_pub = self.create_publisher(String, '/pub_topic',10)
        timer_period_inSec = 1 #local timer variable in seconds = 1s
        #create timer which called every 1s to publish a String msh
        self.timer = self.create_timer(timer_period_inSec,self.timer_callBack)
        self.counter = 0
    
    def timer_callBack(self):
        #create message with type String
        msg = String()
        msg.data = f"Hello ROS2: {self.counter}" #the data in msg  = Hello ROS2: counter
        self.node_pub.publish(msg) #publish msg over /pub_topic
        self.get_logger().info(f"Hello ROS2: {self.counter}")
        self.counter += 1 #add 1 to counter every time callback is called
        

#main function with arguments = None as default
def main(args=None):
    rclpy.init(args=args) #create rclpy object
    my_first_pub = publisher_node() #create publisher_node object
    #node is repeated continuously until i kill the node 
    rclpy.spin(my_first_pub)
    my_first_pub.destroy_node() #destroy node object 
    rclpy.shutdown() #close node object
    
if __name__ == '__main__':
    main() #call main function