#include "ros/ros.h"
#include "demo_package/suratcinta.h"

std::string presensi;
int main(int argc, char ** argv){
    ros::init(argc,argv,"publisher_node");

    ros::NodeHandle nh;

    ros::Publisher data_publisher = nh.advertise<demo_package::suratcinta>("topik_utama_Cplusplus",1000);

    ros::Rate loop_rate(1);

    while(ros::ok()){

        demo_package::suratcinta njir;

        njir.usia = 18;
        njir.tinggi = 1.65;
        njir.nama = "Yanto Sigalo Galo",
        njir.kehadiran = false;
        if(njir.kehadiran == true){
            presensi = "hadir";
        }
        else{
            presensi = "tidak hadir";
        }
       
        ROS_INFO("Usia : %ld", njir.usia);
        ROS_INFO("Tinggi : %lf", njir.tinggi);
        ROS_INFO("Nama : %s", njir.nama.c_str());
        ROS_INFO("Kehadiran : %s", presensi.c_str());

        data_publisher.publish(njir);

        ros::spinOnce();
        loop_rate.sleep();

    }
    return 0;
}

