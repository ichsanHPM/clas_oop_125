#include <iostream>
using namespace std;

class mahasiswa {
 public :
     string nim, nama;

 public :
     void input() {
         cout << "\nMasukkan Nama Mahasiswa : ";
         cin >> nama;
         cout << "\nMasukkan NIM : ";
         cin >> nim;
     }

 public :
     void cetak() {
         cout << "\nNIM : " << nim;
         cout << "\nNama : " << nama;
         cout << endl;
     }

};

class matakuliah {
 private :
     string namaM, kode, sks;

 public : 
     void input() {
         cout << "\nMasukkan Nama Matkul : ";
         cin >> namaM;

         cout << "\nMasukkan Kode Matkul : ";
         cin >> kode;

         cout << "/nMasukkan SKS : ";
         cin >> sks;
     }
};


int main()
{
    std::cout << "Hello World!\n";
}

