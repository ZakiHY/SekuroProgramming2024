/*Nama : Zaki Hilman Yahya*/
/*NIM : 16523046*/
/*Tugas Post Day Modul 2 Programming Online Learning*/

#include <iostream>
#include <math.h>
#include <vector>
#include <fstream>
#include <iomanip>
using namespace std;
vector<double>x_history;
vector<double>y_history;
string perintah;
float x; float y; float v; float t ; float theta;
int undo_count = 0;

void lokasi(float x, float y){
printf("lokasi => (%.2f",x);printf(", %.2f",y);cout << ")";
}
void gerak(float x,float y){
if(undo_count > 0){
  x_history.erase(x_history.end()-undo_count,x_history.end());
  y_history.erase(y_history.end()-undo_count,y_history.end());}
undo_count = 0;
cout << "x : ";cin >> x;cout << "y : ";cin >> y;
x_history.push_back(x + x_history[x_history.size()-1]);
y_history.push_back(y + y_history[y_history.size()-1]);
}
float gerak_2(float v, float t, float theta){
if(undo_count > 0){
  x_history.erase(x_history.end()-undo_count,x_history.end());
  y_history.erase(y_history.end()-undo_count,y_history.end());}
undo_count = 0;
cout << "Kecepatan : ";cin >> v;cout << "Waktu : ";cin >> t;cout << "Besar sudut : "; cin >> theta;
x_history.push_back(v*t*cos(theta/(180/M_PI)) + x_history[x_history.size()-1]);
y_history.push_back(v*t*sin(theta/(180/M_PI)) + y_history[y_history.size()-1]);

}
void undo(){
if(x_history.size()-undo_count-1 != 0){
undo_count++;;
cout << "Undo berhasil" << endl;
  }
else{
cout <<  "Tidak dapat undo!" << endl;
  }
}
void redo(){
if(undo_count > 0){
undo_count--;
cout << "Redo berhasil" << endl;
  }
else{
cout <<  "Tidak dapat redo!" << endl;
  }
}

main(){

cout << "HALO, SAYA ADALAH DRONE YANG SIAP BERTUGAS" << endl;
cout << "==========================================" << endl;
cout << "Anda ingin saya melakukan apa?" << endl;
cout << "1. Gerak biasa (gerak)" << endl << "2. Gerak spesial (gerak_2)" << endl << "3. Undo (undo)" << endl << "4. Redo (redo)" << endl << endl;
x_history.push_back(0);
y_history.push_back(0);
while(true){
x = x_history[x_history.size()-undo_count-1];
y = y_history[y_history.size()-undo_count-1];
lokasi(x,y); cout << endl;    
cin >> perintah;
if(perintah == "gerak"){
gerak(x,y);
    }
if(perintah == "gerak_2"){
gerak_2(v,t,theta);
    }
if(perintah == "undo"){
undo();
    }
if(perintah == "redo"){
redo();
    }
  }
}

