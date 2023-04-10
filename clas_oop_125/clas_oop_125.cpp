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


};


int main()
{
    std::cout << "Hello World!\n";
}

