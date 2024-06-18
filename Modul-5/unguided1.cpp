#include <iostream>
#include <string>
using namespace std;

struct Buku {
    string judul_buku;        
    string pengarang;         
    string penerbit;          
    int tebal_halaman;        
    double harga_buku;           
};

int main() {
    const int jumlah_buku = 5; // Size of the array
    Buku daftar_buku[jumlah_buku]; // Array of Buku structs

    // Data for the books
    string judul_buku[] = {"menyederhanakan hidup", "Kecemasan", "kuat mental", "perfeksionisme", "bebas dari rasa takut"};
    string pengarang[] = {"Marissa Anita", "lika malkan", "Dzihni Alifah", "Anisa Azzahra", "Selvi Fitri"};
    string penerbit[] = {"Sidu", "Rintik Sedu", "CXO", "Scribner", "Gramedia"};
    int tebal_halaman[] = {400, 189, 500, 300, 281};
    double harga_buku[] = {318000, 225000, 850000, 650000, 228000};

    // Fill the array of Buku structs with data
    for (int i = 0; i < jumlah_buku; ++i) {
        daftar_buku[i].judul_buku = judul_buku[i];
        daftar_buku[i].pengarang = pengarang[i];
        daftar_buku[i].penerbit = penerbit[i];
        daftar_buku[i].tebal_halaman = tebal_halaman[i];
        daftar_buku[i].harga_buku = harga_buku[i];
    }

    // Display information of each book
    for (int i = 0; i < jumlah_buku; ++i) {
        cout << "Informasi Buku " << i + 1 << ":" << endl;
        cout << "Judul: " << daftar_buku[i].judul_buku << endl;
        cout << "Pengarang: " << daftar_buku[i].pengarang << endl;
        cout << "Penerbit: " << daftar_buku[i].penerbit << endl;
        cout << "Tebal Halaman: " << daftar_buku[i].tebal_halaman << endl;
        cout << "Harga Buku: " << daftar_buku[i].harga_buku << endl;
        cout << endl;
    }

    return 0;
}

	// Nama : Khulika Malkan
	// NIM 	: 2311110057