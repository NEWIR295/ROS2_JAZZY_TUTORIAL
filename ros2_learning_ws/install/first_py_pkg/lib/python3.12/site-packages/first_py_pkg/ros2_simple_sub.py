#!/usr/bin/env python3

#used Libraries
import rclpy
from rclpy.node import Node 
from std_msgs.msg import String

#subscriber Class
class subscriber_node(Node):
    def __init__(self):
        #call Node class constructor
        super().__init__('my_1st_subscriber') #node name: my_1st_subscriber
        self.get_logger().info("start subscriber node")
        #create subscriber with String type to /pub_topic with queue = 10
        self.node_sub = self.create_subscription(String,'/pub_topic',self.sub_callBack,10)
        
    def sub_callBack(self,msg):
        self.get_logger().info(f"we received: {msg.data}")
        
        
#main function with arguments = None as default
def main(args=None):
    rclpy.init(args=args)
    my_first_sub = subscriber_node() #create subscriber node object
    #node is repeated continuously until i kill the node 
    rclpy.spin(my_first_sub)
    my_first_sub.destroy_node() #destroy node object
    rclpy.shutdown() #close node
    
if __name__ ==  '__main__':
    main() #call main function