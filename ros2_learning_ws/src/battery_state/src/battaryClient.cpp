/*
Author: Mohamed Newir
File name: batteryServer.py
Project Description: subscriber and client node subscribe to battery capacity over /battery/capacity topic ,
                     by applying certain condition when receiving the battery capacity it send request   
                     to /battery/set_led  
*/

/* used libraries */
#include "rclcpp/rclcpp.hpp"
#include "battery_state/msg/battery_msg.hpp"
#include "battery_state/srv/battery_srv.hpp"

/* battery class */
class batteryClient : public rclcpp::Node {
    private:
    
    public:


};

/* main function*/
int main(int argc, char **argv){

    return 0;
}