import rospy
from demo_package.msg import suratcinta

def talker():
    message_pub = rospy.Publisher("topik_utama_python", suratcinta, queue_size=10)

    rospy.init_node("publisherpy_node", anonymous = True)

    rate = rospy.Rate(1)

    while not rospy.is_shutdown():

        bjir = suratcinta()

        bjir.usia = 21
        bjir.tinggi = 3.14
        bjir.nama = "Pi Nasution"
        bjir.kehadiran = True
        if bjir.kehadiran == True:
            presensi = "hadir"
        else:
            presensi = "tidak hadir"

        rospy.loginfo("Usia : %ld" % bjir.usia)
        rospy.loginfo("Tinggi : %lf" % bjir.tinggi)
        rospy.loginfo("Nama : %s" % bjir.nama)
        rospy.loginfo("Kehadiran : %s" % presensi)

        message_pub.publish(bjir)

        rate.sleep()

if __name__ == "__main__":
    try:
        talker()
    except rospy.ROSInterruptException:
        pass