/*Nama : Zaki Hilman Yahya*/
/*NIM : 16523046*/
/*Tugas Pendahuluan Modul 1 Programming Online Learning*/

#include <iostream>
using namespace std;
main()
{
string jenis;
int hitungan;
while(true){
    cout << "Masukkan jenis pesawat ";    
    cin >> jenis;    
    if(jenis == "a"){
        hitungan = 3;  
        while(hitungan > 0){
          cout << hitungan << endl;
          hitungan-=1;
        }
    cout << "PESAWAT A BERANGKAT" << endl;  
    }
    else if(jenis == "b"){
        hitungan = 5;  
        while(hitungan > 0){
          cout << hitungan << endl;
          hitungan--;
        }
    cout << "PESAWAT B BERANGKAT" << endl;  
    }
    else if(jenis == "o"){
        break;
    }
    else{
        cout << "INPUT TIDAK VALID" << endl;  
    }
  }
cout << "PENERBANGAN DITUTUP";
}