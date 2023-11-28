#include "neslihan_base.h"

int main(int argc, char** argv )
{
    ros::init(argc, argv, "neslihan_base_node");
    NeslihanBase neslihan;
    ros::spin();
    return 0;
}