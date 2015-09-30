
#include <ros/ros.h>
#include <face_recognition/FRClientGoal.h>
#include <face_recognition/Service1.h>
#include <cstdlib>


int main(int argc, char **argv)
{

  //char order_argument;
  ros::init(argc, argv, "fr_order");

  ROS_INFO("paso");
  ros::NodeHandle n;
  ros::ServiceClient client = n.serviceClient<face_recognition::Service1>("fr_order");

  //ros::Publisher chatter_pub = n.advertise<face_recognition::FRClientGoal>("fr_order", 1000);

  
    face_recognition::Service1 goal;

    goal.request.order_id = 1;
    goal.request.order_argument = 2;

    ROS_INFO("Envia datos id = %d    .........", goal.request.order_id);
    //chatter_pub.publish(goal);
    if (client.call(goal))
  {
    ROS_INFO("Order_id: %ld", (long int)goal.response.i);
  }
  else
  {
    ROS_ERROR("Failed to call service add_two_ints");
    return 1;
  }
  return 0;
  ros::spin();
}
