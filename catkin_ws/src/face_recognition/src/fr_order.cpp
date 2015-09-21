
#include <ros/ros.h>
#include <face_recognition/FRClientGoal.h>


int main(int argc, char **argv)
{

  //char order_argument;
  ros::init(argc, argv, "fr_order");


  ros::NodeHandle n;

  ros::Publisher chatter_pub = n.advertise<face_recognition::FRClientGoal>("fr_order", 1000);

  ros::Rate loop_rate(1);
  while (ros::ok())
  //for(int i = 0; i<=10000; i++)
  {
    
    face_recognition::FRClientGoal goal;

    goal.order_id = 1;
    goal.order_argument = "Felipe";

    ROS_INFO("Envia datos id = %d    .........", goal.order_id);
    chatter_pub.publish(goal);



    

  }
  ros::spin();


  return 0;
}

