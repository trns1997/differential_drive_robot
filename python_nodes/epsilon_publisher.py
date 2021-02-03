#!/usr/bin/env python3

import rospy
from std_msgs.msg import Float64


def main():
    rospy.init_node('EpsilonPublisher')
    epsilon = Float64()
    kp = Float64()
    pubEpsilon = rospy.Publisher('epsilon', Float64, queue_size=10)
    pubKp = rospy.Publisher('Kp', Float64, queue_size=10)

    while not rospy.is_shutdown():
        lst = []
        for i in range(0, 2):
            lst.append(float(input("Enter Epsilon followed by Kp: ")))
        
        epsilon.data = lst[0]
        kp.data = lst[1]

        pubEpsilon.publish(epsilon)
        pubKp.publish(kp)

    # Spin until ctrl + c
    rospy.spin()


if __name__ == '__main__':
    main()
