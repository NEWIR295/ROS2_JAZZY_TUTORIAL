/*
Author: Mohamed Newir
File name: number_sub.cpp
Project Description: subscriber node receive Int64 message over /counter topic
                      to add it to the sum in it then publish the sum and
                      has a server service to reset the counter
*/

/* used libraries */
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/int64.hpp"
#include "example_interfaces/srv/set_bool.hpp"

class number_sub : public rclcpp::Node
{
private:
    std_msgs::msg::Int64 counter_;
    rclcpp::Publisher<std_msgs::msg::Int64>::SharedPtr pub_;
    rclcpp::Subscription<std_msgs::msg::Int64>::SharedPtr sub_;
    rclcpp::Service<example_interfaces::srv::SetBool>::SharedPtr reset_service_;
    void sub_cb(const std_msgs::msg::Int64::SharedPtr msg)
    {
        counter_.data += msg->data;
        pub_->publish(counter_);
        RCLCPP_INFO(get_logger(), "%lld", this->counter_);
    }
    void service_cb(const example_interfaces::srv::SetBool::Request::SharedPtr request,
                    const example_interfaces::srv::SetBool::Response::SharedPtr response)
    {
        if (request->data)
        {
            counter_.data = 0;
            response->success = true;
            response->message = "counter has been reset";
        }
        else
        {
            response->success = false;
            response->message = "counter has not been reset";
        }
    }

public:
    number_sub() : Node("number_sub")
    {
        RCLCPP_INFO(get_logger(), "number_sub has started");
        pub_ = this->create_publisher<std_msgs::msg::Int64>("/sum", 10);
        sub_ = this->create_subscription<std_msgs::msg::Int64>("/counter", 10,
                                              std::bind(&number_sub::sub_cb, this, std::placeholders::_1));
        reset_service_ = this->create_service<example_interfaces::srv::SetBool>("reset_srv",
                    std::bind(&number_sub::service_cb,this, std::placeholders::_1, std::placeholders::_2));
    }
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<number_sub>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}