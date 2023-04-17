import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge

import cv2 as cv
import numpy as np

import os

class Image_publisher(Node):

    def __init__(self):
        super().__init__('image_publisher')
        self.publisher_ = self.create_publisher(Image, 'image', 10)
        timer_period = 1  # seconds
        self.timer = self.create_timer(timer_period, self.get_image_callback)
        self.i = 0

        self.img_camera = cv.Mat(np.zeros((2,2)))
        #Lembre-se de trocar o diretorio ao utilizar essa função em outro pc
        os.chdir('/home/natalnet/Documents/codes/ROS_estudo/Estudo/image_turtlebot2/src/image_process/image_process/imgs/')
        self.img_path = os.getcwd() + '/'
        os.chdir('/home/natalnet/Documents/codes/ROS_estudo/Estudo/image_turtlebot2') 
        #Lembre-se de trocar o diretorio ao utilizar essa função em outro pc

        self.bridge = CvBridge() #Objeto para converter OPENCV -> ROS IMAGE

    def get_image_callback(self):
        img_camera_ROS = Image()
        #criar funcao para requisitar e publicar as imagens
        self.img_camera = cv.imread(self.img_path+'ufrn.jpg')
        img_camera_ROS = self.bridge.cv2_to_imgmsg(self.img_camera, encoding="passthrough")

        self.publisher_.publish(img_camera_ROS)

        self.get_logger().info(f'Foto Publicada')



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