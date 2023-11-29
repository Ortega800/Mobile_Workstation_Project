from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()

    imu_node = Node(
        package="mpu9250_ros2_driver", 
        executable="main_rpi",
        name='mpu9250driver_node',
        output="screen"
        )

    #ld.add_action(imu_node)
    
    return ld