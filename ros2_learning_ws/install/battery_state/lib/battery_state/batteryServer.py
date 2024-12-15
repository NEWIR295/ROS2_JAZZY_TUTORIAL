#!/usr/bin/env python3

"""
Author: Mohamed Newir
File name: batteryServer.py
Project Description: Publisher and Server node publish led states over /battery/state topic ,
                     by applying certain condition when receiving request from client  
                      over /battery/set_led 
"""

#used libraries 
import rclpy 
from rclpy.node import Node
from battery_state.srv import BatterySrv
from battery_state.msg import BatteryMsg

#Battery server class
class BatteryServer (Node):
    def __init__(self):
        super().__init__('battery_server')
        self.get_logger().info("server_started")
        self.declare_parameter("led_states",0)
        self.ledStates_ = self.get_parameter("led_states").value
        self.state_pub_ = self.create_publisher(BatteryMsg,'/battery/state',10)
        self.server_ = self.create_service(BatterySrv, 'battery/set_led', self.server_callback)
        timer_period = 1.0
        self.timer_ = self.create_timer(timer_period,self.timer_cb)
        self.leds_on_ = self.ledStates_
        self.msg = BatteryMsg()

    
    def server_callback(self,request,response):
        
        if request.led_state >= 80:
            self.get_logger().info("leds are off")
            response.state = "leds are off"
            self.leds_on_ = 0
        elif request.led_state >=60:
            self.get_logger().info("led 1 is on")
            response.state = "led 1 is on"
            self.leds_on_ = 1
        elif request.led_state >=20:
            self.get_logger().info("led 2 is on")
            response.state = "led 2 is on"
            self.leds_on_ = 2
        else:
            self.get_logger().info("led 3 is on")
            response.state = "led 3 is on"
            self.leds_on_ = 3

        return response
    
    def timer_cb(self):
        self.msg.leds_on = self.leds_on_
        self.state_pub_.publish(self.msg)
        self.get_logger().info(f"number of leds on : {self.leds_on_}")
        
        
        
#main function 
def main(args=None):
    rclpy.init(args=args)
    node = BatteryServer()
    try:
        #ensure that node repeated continuously until it killed
        rclpy.spin(node)
    finally:
        node.destroy_node()
        rclpy.shutdown()
    
if __name__ == "__main__":
    main()