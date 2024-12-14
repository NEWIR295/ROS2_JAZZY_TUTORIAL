/*
Author: Mohamed Newir
File name: number_pub.cpp
Project Description: Publisher node send Int64 message over /counter topic
                      to subscriber to add it to the sum in it
*/

/* used libraries*/
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "std_msgs/msg/int64.hpp"

class number_pub : public rclcpp::Node
{
private:
    int counter_;
    std_msgs::msg::Int64  msg ;
    rclcpp::Publisher<std_msgs::msg::Int64>::SharedPtr pub_;
    rclcpp::TimerBase::SharedPtr timer_;
    void timer_cb(void){
        msg.data = this->counter_;
        pub_->publish(msg);
    }
public:
    number_pub() : Node("number_pub"), counter_(2)
    {
        RCLCPP_INFO(this->get_logger(),"number_pub has started");
        pub_ = this->create_publisher<std_msgs::msg::Int64>("/counter", 10) ;
        timer_ = this->create_wall_timer(std::chrono::seconds(1),std::bind(&number_pub::timer_cb,this));
    }
};
int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<number_pub>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}