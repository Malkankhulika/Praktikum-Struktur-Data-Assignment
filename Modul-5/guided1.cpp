#include <iostream>
#include <string>

using namespace std;

struct Buku {
	string judul_buku;
	string pengarang;
	string penerbit;
	int tebal_buku;
	double harga_buku;
}; Buku buku1, buku2;

int main(){ //fungsi program utama
	buku1.judul_buku = "Algoritma dan Struktur Data";
	buku1.pengarang = "Pak Afrizal";
	buku1.penerbit = "Gramedia";
	buku1.tebal_buku = 300;
	buku1.harga_buku = 120000;
	
	buku2.judul_buku = "bahagia itu sederhana";
	buku2.pengarang = "malkan";
	buku2.penerbit = "kata depan";
	buku2.tebal_buku = 100;
	buku2.harga_buku = 100000;
	
	//menampilkan data 
	cout << "Informasi Buku 1\n" << endl;
	cout << "Informasi Buku 1" << endl;
	cout << "Judul : "<< buku1.judul_buku << endl;
	cout << "Pengarang : "<< buku1.pengarang << endl;
	cout << "Penerbit : "<< buku1.penerbit << endl;
	cout << "tebal_buku : "<< buku1.tebal_buku << endl;
	cout << "harga_buku : "<< buku1.harga_buku << endl;

	//menampilkan data
	cout << "Informasi Buku 2\n" << endl;
	cout << "Judul : "<< buku2.judul_buku << endl;
	cout << "Pengarang : "<< buku2.pengarang << endl;
	cout << "Penerbit : "<< buku2.penerbit << endl;
	cout << "tebal_buku : "<< buku2.tebal_buku << endl;
	cout << "harga_buku : "<< buku2.harga_buku << endl;
	
	return 0;
	}

	// Nama : Khulika Malkan
	// NIM 	: 2311110057