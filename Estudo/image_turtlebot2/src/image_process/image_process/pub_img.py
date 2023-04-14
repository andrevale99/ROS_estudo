import rclpy
from rclpy.node import Node

from sensor_msgs.msg import Image

class Image_publisher(Node):

    def __init__(self):
        super().__init__('image_publisher')
        self.publisher_ = self.create_publisher(Image, 'image', 10)
        timer_period = 0.5  # seconds
        self.timer = self.create_timer(timer_period, self.get_image_callback)
        self.i = 0

    def get_image_callback(self):
        #criar funcao para requisitar imagens
        pass


def main(args=None):
    rclpy.init(args=args)

    img_pub = Image_publisher()

    rclpy.spin(img_pub)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    img_pub.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()