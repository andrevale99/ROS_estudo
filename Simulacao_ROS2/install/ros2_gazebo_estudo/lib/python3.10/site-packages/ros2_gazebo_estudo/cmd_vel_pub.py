import rclpy
from rclpy.node import Node

from geometry_msgs.msg import Twist
from rclpy.qos import qos_profile_sensor_data
from sensor_msgs.msg import LaserScan

from time import sleep


class CMD_VEL_publisher(Node):

    def __init__(self):
        super().__init__('pub_cmd_vel')
        self.publisher_ = self.create_publisher(Twist, 'cmd_vel', 10)
        self.timer = self.create_timer(1, self.set_cmd_vel)

        self.scan_sub = self.create_subscription(
                LaserScan,
                'scan',
                self.scan_callback,  # function to run upon message arrival
                qos_profile_sensor_data)  # allows packet loss


        self.twist = Twist()

        self.twist.linear.x = .0
        self.twist.linear.y = .0
        self.twist.linear.z = .0

        self.twist.angular.x = .0
        self.twist.angular.y = .0
        self.twist.angular.z = .0

    def set_cmd_vel(self):
        self.get_logger().info(f'i value: {self.twist.linear.x}')
        self.publisher_.publish(self.twist)
    
    def scan_callback(self, msg):
        self.get_logger().info(f"Laser Scan [m]: {msg.ranges[0]}")
 

def main(args=None):
    rclpy.init(args=args)

    cmd_vel_pub = CMD_VEL_publisher()

    rclpy.spin(cmd_vel_pub)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    cmd_vel_pub.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()