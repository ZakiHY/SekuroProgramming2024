/*Nama : Zaki Hilman Yahya*/
/*NIM : 16523046*/
/*Tugas Post Day Modul 1 Programming Online Learning nomor 3*/

#include <iostream>
using namespace std;
main()
{
int n;
cout << "Input :" << endl;
cin >> n;
cout << "Output :" << endl;
for(int i = 1; i < n+1; i++){
    for(int j = 1; j < i+1; j++){
        cout << "*";
    }
    cout << endl;
}
for(int i = n-1; i > 0 ; i--){
    for(int j = 1; j < i+1; j++){
        cout << "*";
    }
    cout << endl;
}
}