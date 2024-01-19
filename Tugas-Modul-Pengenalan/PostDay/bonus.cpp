/*Nama : Zaki Hilman Yahya*/
/*NIM : 16523046*/
/*Tugas Post Day Modul 1 Programming Online Learning soal bonus*/

#include <iostream>
using namespace std;
main()
{
int n;
int spasi;
int deret = 0;
cout << "N : ";
cin >> n;

/*Segitiga bagian atas*/

for(int i = 0; i < int(n/2); i++){
    for(int j = 0; j < i; j++){
        cout << " ";
    }
    for(int j = 0; j < int(n/2)+1-i; j++){
        cout << deret%10;
        deret++;
    }
    cout << endl;
  }

/*Segitiga bagian bawah*/

if(n%2 == 0){
for(int i = 0; i < int(n/2); i++){
    for(int j = 0; j < int(n/2); j++){
        cout << " ";
    }
    for(int j = 0; j < i+1; j++){
        cout << deret%10;
        deret++;
    }
    cout << endl;
  }
 }
else{
for(int i = 0; i < int(n/2)+1; i++){
    for(int j = 0; j < int(n/2); j++){
        cout << " ";
    }
    for(int j = 0; j < i+1; j++){
        cout << deret%10;
        deret++;
    }
    cout << endl;
  }
 } 
}