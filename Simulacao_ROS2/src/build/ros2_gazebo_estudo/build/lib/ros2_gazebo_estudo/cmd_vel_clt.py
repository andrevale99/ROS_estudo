import rclpy
from rclpy.node import Node

from geometry_msgs.msg import Twist
from rclpy.qos import qos_profile_sensor_data
from sensor_msgs.msg import LaserScan
from interfaces_to_gazebo.srv import RqtLaserScan

from time import sleep


class CMD_VEL_publisher(Node):

    def __init__(self):
        super().__init__('pub_cmd_vel')
        self.publisher_ = self.create_publisher(Twist, 'cmd_vel', 10)
        self.timer = self.create_timer(0.1, self.set_cmd_vel)

        self.scan_sub = self.create_subscription(
                LaserScan,
                'scan',
                self.scan_callback,  # function to run upon message arrival
                qos_profile_sensor_data)  # allows packet loss

        self.twist = Twist()
        self.reset_twist()
    
        self.laser = 0

    def set_cmd_vel(self):
        self.get_logger().info(f'msg: {self.laser}')

        if self.laser > 0.75:
            self.twist.linear.x = 0.25
            self.twist.angular.z = 0.
            self.publisher_.publish(self.twist)
        else:
            self.twist.linear.x = 0.
            self.twist.angular.z = 0.5
            self.publisher_.publish(self.twist)

    def scan_callback(self, msg):
        self.laser = msg.ranges[0]


    def get_scan_sub(self, msg):
        self.laser = msg.ranges[0]

    def LaserScan_request(self):
        self.req.who = 1
        self.future = self.client.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.future)

        self.get_logger().info(f'Situation: {self.future.result().range}')
        
        return self.future.result()
 
    def reset_twist(self):
        self.twist.linear.x = .0
        self.twist.linear.y = .0
        self.twist.linear.z = .0

        self.twist.angular.x = .0
        self.twist.angular.y = .0
        self.twist.angular.z = .0
        self.publisher_.publish(self.twist)


def main(args=None):
    rclpy.init(args=args)

    cmd_vel_pub = CMD_VEL_publisher()

    #response = cmd_vel_pub.LaserScan_request()  

    rclpy.spin(cmd_vel_pub)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    cmd_vel_pub.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()