#include "ros/ros.h"
#include "demo_package/suratcinta.h"
std::string presensi;

void callbackHandler(const demo_package::suratcinta::ConstPtr &msg){
    ROS_INFO("Saya mendengar :");
    ROS_INFO("Usia : %ld", msg->usia);
    ROS_INFO("Tinggi : %lf", msg->tinggi);
    ROS_INFO("Nama : %s", msg->nama.c_str());
    if(msg->kehadiran == true){
        presensi = "hadir";
    }
    else{
        presensi = "tidak hadir";
    }
    ROS_INFO("Kehadiran : %s", presensi.c_str());
}

int main(int argc, char ** argv){
    ros::init(argc,argv,"subscriber_node");

    ros::NodeHandle nh;

    ros::Subscriber data_subcriber = nh.subscribe("topik_utama_Cplusplus",1000,callbackHandler);

    ros::spin();

    return 0;
}