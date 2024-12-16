/*
Author: Mohamed Newir
File name: batteryServer.py
Project Description: subscriber and client node subscribe to battery capacity over /battery/capacity topic ,
                     by applying certain condition when receiving the battery capacity it send request
                     to /battery/set_led
*/

/* used libraries */
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/int64.hpp"
#include "battery_state/msg/battery_msg.hpp"
#include "battery_state/srv/battery_srv.hpp"

/* battery class */
class batteryClient : public rclcpp::Node
{
private:
    rclcpp::Subscription<std_msgs::msg::Int64>::SharedPtr sub_;
    rclcpp::Client<battery_state::srv::BatterySrv>::SharedPtr client_;
    // std::thread clientThread_;
    
    int32_t batteryCapacity_ ;
    uint8_t previous_state = 0;
    uint8_t current_state = 0;
    void sub_cb(const std_msgs::msg::Int64::SharedPtr msg)
    {
        batteryCapacity_ = msg->data;
        
        if(batteryCapacity_ >= 80){
            current_state = 1;    
        }
        else if(batteryCapacity_ >= 60){
            current_state = 2;
        }
        else if(batteryCapacity_ >= 20){
            current_state = 3;
        }
        else{
            current_state = 4;
        }
        if (current_state != previous_state)
        {
            client_cb();
            previous_state = current_state;
        }
    }
    void client_cb(void)
    {
            while (!client_->wait_for_service(std::chrono::seconds(1)))
            {
                RCLCPP_INFO(this->get_logger(), "waiting for the service to be available ........");
            }
            auto request = std::make_shared<battery_state::srv::BatterySrv::Request>();
            request->led_state = batteryCapacity_;
            auto future = client_->async_send_request(request);
            try
            {
                // auto response = future.get(); # commented because it blocks our thread
                // RCLCPP_INFO(this->get_logger(), "led state : %s", response->state);
            }
            catch (const std::exception &e)
            {
                RCLCPP_ERROR(this->get_logger(), "Failed to call service: %s", e.what());
            }
    }

public:
    batteryClient() : Node("battery_client")
    {

        RCLCPP_INFO(get_logger(), "battery_client node has started");
        this->declare_parameter("batteryCapacity", 100);
        this->get_parameter("batteryCapacity", batteryCapacity_);
        sub_ = this->create_subscription<std_msgs::msg::Int64>("/battery/capacity", 10,
                                                               std::bind(&batteryClient::sub_cb, this, std::placeholders::_1));
        // clientThread_ = std::thread(&batteryClient::client_cb, this);
        client_ = this->create_client<battery_state::srv::BatterySrv>("battery/set_led");

    }
};

/* main function*/
int main(int argc, char **argv)
{
    rclcpp::init(argc,argv);
    auto node = std::make_shared<batteryClient>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}