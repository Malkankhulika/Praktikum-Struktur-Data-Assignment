#include <iostream>
#include <stdio.h>
using namespace std; 


struct Mahasiswa 
{
    const char *name;
    const char *address;
    int age; 
};
int main()
{
    // menggunakan struct 
    Mahasiswa mhs1, mhs2;

    mhs1.name = "Khulika Malkan";
    mhs1.address = "Kuningan";
    mhs1.age = 18;
    mhs2.name = "Rizal Wahyu Pratama"; 
    mhs2.address = "Tabanan";
    mhs2.age = 19; 

    cout<<"Mahasiswa 1\n";
    cout<<"Nama: "<< mhs1.name <<endl;
    cout<<"Alamat: " <<mhs1.address <<endl;
    cout<<"Umur: "  << mhs1.age <<endl;

    cout <<"Mahasiswa 2\n"; 
    cout << "Nama: " << mhs2.name <<endl;
    cout << "Alamat: "<< mhs2.address <<endl;
    cout << "Umur: "<< mhs2.age <<endl; 

    return 0;
}