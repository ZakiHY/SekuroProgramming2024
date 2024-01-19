/*Nama : Zaki Hilman Yahya*/
/*NIM : 16523046*/
/*Tugas Post Day Modul 1 Programming Online Learning nomor 5*/

#include <iostream>
using namespace std;
main()
{
int angka;
bool prima = true;
cout << "Program C++ Angka Prima" << endl;
cout << "=======================" << endl;
cout << "Input satu angka bulat : ";
cin >> angka;
for(int i = 2; i < angka; i++){
    if(angka%i == 0){
        prima = false;
    }
  }
if(prima == true){
    cout << angka << " adalah angka prima";
  }
else{
    cout << angka << " bukan angka prima";
  }
}