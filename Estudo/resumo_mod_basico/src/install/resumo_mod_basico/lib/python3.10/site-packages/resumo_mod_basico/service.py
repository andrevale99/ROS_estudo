from custom_interfaces.srv import Max

import rclpy
from rclpy.node import Node

class Service(Node):
    def __init__(self):
        super().__init__("estudo_basico_service")
        self.srv = self.create_service(Max, 'max', self.send_max_value)

    def send_max_value(self, request, response):
        v = [request.a, request.b, request.c]
        response.result = max(v)
        self.get_logger().info(f'Requisicao: {response.result}')  # CHANGE

        return response

def main(args=None):
    rclpy.init(args=args)

    service = Service()

    rclpy.spin(service)

    rclpy.shutdown()

if __name__ == '__main__':
    main()