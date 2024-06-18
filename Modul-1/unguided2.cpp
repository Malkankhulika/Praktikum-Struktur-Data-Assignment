#include <iostream>
#include <string>
using namespace std;

// Deklarasi struct Mahasiswa
struct MahasiswaStruct {
    string nama;
    int umur;
    
    // Method untuk menampilkan data mahasiswa
    string tampilkanData() {
        string data = "Nama : " + nama + "\n";
        data += "Umur : " + to_string(umur) + "\n";
        return data;
    }
};

// Deklarasi class Mahasiswa
class MahasiswaClass {
private:
    string nama;
    int umur;
    
public:
    // Constructor untuk inisialisasi objek
    MahasiswaClass(string n, int u) : nama(n), umur(u) {}

    // Method untuk menampilkan data mahasiswa
    string tampilkanData() {
        string data = "Nama : " + nama + "\n";
        data += "Umur : " + to_string(umur) + "\n";
        return data;
    }
};

int main() {
    // Menggunakan struct
    MahasiswaStruct mhs1Struct;
    mhs1Struct.nama = " Tata ";
    mhs1Struct.umur = 18;
    cout << mhs1Struct.tampilkanData();

    // Menggunakan class
    MahasiswaClass mhs1Class(" Tata ", 18);
    cout << mhs1Class.tampilkanData();

    return 0;
}