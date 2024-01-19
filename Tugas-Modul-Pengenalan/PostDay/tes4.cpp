/*Nama : Zaki Hilman Yahya*/
/*NIM : 16523046*/
/*Tugas Post Day Modul 1 Programming Online Learning nomor 4*/

#include <iostream>
using namespace std;
main()
{
bool kabisat = true;
int tahun;
cout << "Tentukan tahun kabisat" << endl;
cout << "Tahun : ";
cin >> tahun;
if(tahun%400 != 0 && tahun%100 == 0){
    kabisat = false;
  }
if(tahun%400 != 0 && tahun %100 != 0 && tahun%4 != 0){
    kabisat = false;
  }
if(kabisat == true){
    cout << "kabisat";
  }
else{
    cout << "bukan kabisat";
  }
}