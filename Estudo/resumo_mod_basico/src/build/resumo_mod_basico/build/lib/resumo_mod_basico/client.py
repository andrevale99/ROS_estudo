from custom_interfaces.srv import Max    

import sys
import rclpy
from rclpy.node import Node

class Client(Node):
    def __init__(self):
        super().__init__('estudo_basico_client')
        self.cli = self.create_client(Max, 'max')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = Max.Request()

    def send_request(self):
        self.req.a = int(sys.argv[1])
        self.req.b = int(sys.argv[2])
        self.req.c = int(sys.argv[3]) 
        self.future = self.cli.call_async(self.req)

def main(args=None):
    rclpy.init(args=args)

    client = Client()
    client.send_request()

    while rclpy.ok:
        rclpy.spin_once(client)

        try:
            response = client.future.result()
        except Exception as e:
            client.get_logger().info(f'ERROR: {(e,)}')
        else:
            client.get_logger().info(f'Max: {response.result}')

        break

    client.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()