import rclpy
from rclpy.node import Node
from rclpy.qos import qos_profile_sensor_data
from sensor_msgs.msg import LaserScan

from interfaces_to_gazebo.srv import RqtLaserScan


class Tb3(Node):
    def __init__(self):
        super().__init__('LaserScan_service')

        self.scan_sub = self.create_subscription(
                LaserScan,
                'scan',
                self.get_scan_sub,  # function to run upon message arrival
                qos_profile_sensor_data)  # allows packet loss

        self.service = self.create_service(RqtLaserScan, 'LaserScan_for_all', self.scan_callback)
        
        self.laser = LaserScan()

    def get_scan_sub(self, msg):
        self.laser = msg
        self.get_logger().info(f'Type: {self.laser.ranges[0]}')

    def scan_callback(self, request, response):
        if request.who == 1:
            self.get_logger().info(f'/CmdVel_clt requested')
            response.range = self.laser.ranges[0]

            return response
        else:
            self.get_logger().info(f'Other client Requested')

            return 0.666



def main(args=None):
    rclpy.init(args=args)

    tb3 = Tb3()

    rclpy.spin(tb3)  # execute tb3 node
    # blocks until the executor cannot work

    tb3.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()