/*Nama : Zaki Hilman Yahya*/
/*NIM : 16523046*/
/*Tugas Pendahuluan Modul 2 Programming Online Learning nomor 2*/

#include <iostream>
using namespace std;
float luaslingkaran(float r){
    float luas = 3.14*r*r;
    return luas;
}
main(){
float r;
cout << "Masukkan nilai jari-jari : ";
cin >> r;
cout << "Luas lingkaran : " << luaslingkaran(r);
}