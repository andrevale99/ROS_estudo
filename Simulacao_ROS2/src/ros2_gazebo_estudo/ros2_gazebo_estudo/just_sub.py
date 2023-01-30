import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist

from std_msgs.msg import String


class MinimalPublisher(Node):

    def __init__(self):
        super().__init__('pub_cmd_vel')
        self.publisher_ = self.create_publisher(Twist, 'cmd_vel', 10)
        self.timer = self.create_timer(1, self.set_cmd_vel)

    def set_cmd_vel(self):
        twist = Twist()
        twist.linear.x = float(2)
        self.publisher_.publish(twist)


def main(args=None):
    rclpy.init(args=args)

    minimal_publisher = MinimalPublisher()

    rclpy.spin(minimal_publisher)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()