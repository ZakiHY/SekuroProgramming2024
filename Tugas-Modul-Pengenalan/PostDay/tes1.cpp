/*Nama : Zaki Hilman Yahya*/
/*NIM : 16523046*/
/*Tugas Post Day Modul 1 Programming Online Learning nomor 1*/

#include <iostream>
using namespace std;
main()
{
int batas1;
int batas2;
cout << "Input :" << endl;
cin >> batas1 >> batas2;
cout << "Output :" << endl;
for(int i = batas1;i < batas2 + 1; i++){
    if(i%2 == 0){
        cout << i << " ";
    }  
  }
}