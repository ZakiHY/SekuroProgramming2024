/*Nama : Zaki Hilman Yahya*/
/*NIM : 16523046*/
/*Tugas Post Day Modul 1 Programming Online Learning nomor 2*/

#include <iostream>
using namespace std;
main()
{
int banyakbil;
float bilangan;
float total = 0;
cout << "Input : " << endl;
cout << "jumlah bilangan : ";
cin >> banyakbil;
for(int i = 0; i < banyakbil; i++){
    cout << "bilangan " << i+1 << " : ";
    cin >> bilangan;
    total += bilangan;
  }
cout << "Output :" << endl;
cout << "RATA-RATA : " <<  total/banyakbil;
}