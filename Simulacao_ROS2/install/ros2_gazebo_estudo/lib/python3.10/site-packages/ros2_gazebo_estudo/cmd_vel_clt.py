import rclpy
from rclpy.node import Node

from geometry_msgs.msg import Twist

from interfaces_to_gazebo.srv import RqtLaserScan

from time import sleep


class CMD_VEL_publisher(Node):

    def __init__(self):
        super().__init__('pub_cmd_vel')
        self.publisher_ = self.create_publisher(Twist, 'cmd_vel', 10)
        self.timer = self.create_timer(1, self.set_cmd_vel)

        self.client = self.create_client(RqtLaserScan, 'LaserScan_for_all')
        if not self.client.wait_for_service():
            self.get_logger().info(f'LaserScan_service not available')
        else:
            self.get_logger().info(f'LaserScan_service available')
            self.req = RqtLaserScan.Request()

        self.twist = Twist()
        self.reset_twist()

        self.future = 1
        self.req.who = 1

    def reset_twist(self):
        if self.future.result().range > 0.75:
             self.get_logger().info(f'TESTE')

        self.publisher_.publish(self.twist)

    def set_cmd_vel(self):
        self.twist.linear.x =0.
        self.twist.linear.y =0.
        self.twist.linear.z =0.

        self.twist.angular.x = 0.
        self.twist.angular.y = 0.
        self.twist.angular.z = 0.
        self.publisher_.publish(self.twist)

    def LaserScan_request(self):
        self.req.who = 1
        self.future = self.client.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.future)

        self.get_logger().info(f'Situation: {self.future.result().range}')
        
        return self.future.result()
 

def main(args=None):
    rclpy.init(args=args)

    cmd_vel_pub = CMD_VEL_publisher()

    response = cmd_vel_pub.LaserScan_request()  

    rclpy.spin(cmd_vel_pub)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    cmd_vel_pub.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()