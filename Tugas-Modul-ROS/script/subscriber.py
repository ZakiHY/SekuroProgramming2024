import rospy
from demo_package.msg import suratcinta

def callback(data):
    rospy.loginfo("Usia : %ld" % data.usia)
    rospy.loginfo("Tinggi : %lf" % data.tinggi)
    rospy.loginfo("Nama : %s" % data.nama)
    if data.kehadiran == True:
        presensi = "hadir"
    else:
        presensi = "tidak hadir"
    rospy.loginfo("Kehadiran : %s" % presensi)
    rospy.loginfo("Bagus sobat!")

def listener():
    rospy.init_node("subscriberpy_node", anonymous=True)
    rospy.Subscriber("topik_utama_python",suratcinta,callback)
    rospy.spin()

if __name__ == "__main__":
    listener()
