/*Nama : Zaki Hilman Yahya*/
/*NIM : 16523046*/
/*Tugas Pendahuluan Modul 2 Programming Online Learning nomor 1*/

#include <iostream>
using namespace std;
main()
{
int arr[2][10];
for(int j = 0; j < 2; j++){
    for(int i = 0; i < 10; i++){
        cout << "Array " << j+1 << " Elemen ke-" << i+1 << " : ";
        cin >> arr[j][i];
    }
  }
for(int i = 0; i < 10; i++){
    cout << arr[0][i] + arr[1][i] << " ";
  }  
}