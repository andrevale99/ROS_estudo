from setuptools import setup

package_name = 'ros2_gazebo_estudo'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='andre',
    maintainer_email='andrefvale@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'CmdVel_client = ros2_gazebo_estudo.cmd_vel_clt:main',
            'LaserScan_service = ros2_gazebo_estudo.laser_scan_serv:main',
        ],
    },
)
