# <h1 align="center">Laporan Praktikum Modul Struct dan Implementasi</h1>
<p align="center">Khulika Malkan</p>
<p align="center">2311110057</p>

## Dasar Teori
Tipe data bentukan yaitu tipe data yang dibuat sendiri sesuai kebutuhan dalam program yang akan kita buat. Dalam bahasa latin sering disebut user defined types. Adapun yang termasuk dalam kategori tipe bentukan ini adalah array (larik), struktur dan enumerasi.


### Variabel
Analogi dari variabel seperti sebuah tempat untuk menampung atau menyimpan suatu data dengan tipe data tertentu. Format penulisan/deklarasi variabel adalah tipe_data nama_variabel, contoh int berat, string mata_kuliah, char jenis_kelamin. Secara default sebuah variabel hanya dapat menampung sebuah nilai misalnya variabel berat hanya dapat menampung satu nilai berat 175 kg, tidak bisa diisi lebih dari satu. Jika diinginkan dapat menampung lebih dari satu nilai maka deklarasikan variabel sebagai array, dengan format penulisan tipe_data nama_variabel [banyak data] [1].

### Struct
Structure (struktur) adalah kumpulan atau kelompok elemen-elemen data yang digabungkan menjadi satu kesatuan. Masing-masing elemen data tersebut dikenal dengan sebutan field. Field data tersebut dapat memiliki tipe data yang sama ataupun berbeda. Walaupun field-field tersebut berada dalam satu kesatuan, masing-masing field tersebut tetap dapat diakses secara individual. Dalam bahasa pemrograman lain sebuah structure disebut juga sebagai record dan setiap header kolom disebut field [2].

Suatu struktur (structure) yaitu tipe data bentukan yang menyimpan lebih dari satu variabel bertipe sama maupun berbeda [3]. Suatu struktur dapat terdiri dari kumpulan variabel-variabel yang berbeda tipenya dalam satu nama tetapi berkaitan. Misalnya data mengenai nama, nopeg, jabatan, gaji seorang pegawai. Keempat data tersebut mempunyai tipe data yang berbeda tetapi masih berhubungan yaitu data pegawai. 
Variabel-variabel yang membentuk suatu struktur ini selanjutnya disebut dengan elemen atau anggota struktur. Dengan demikian suatu struktur dimungkinkan dapat berisi dengan elemen-elemen data bertipe int, float, char dan lainnya. Dengan menggunakan struktur maka data ini dapat diolah per elemen (field) atau secara keseluruha (per 
struktur, per-record). Structure atau struct adalah kumpulan dari beberapa variabel dengan beragam tipe data yang dibungkus dalam satu variabel.

## Guided
### 1. Buatlah sebuah struktur dengan nama buku yang berisi judul_buku, pengarang, penerbit, tebal_halaman, harga_buku. Isi dengan nilai kemudian tampilkan.
```C++
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
```
### Full Code Screenshot
![image](https://github.com/Malkankhulika/Modul-5/assets/149793653/63fd758b-4f5f-4c3f-93cd-7c3d85aa1f1b)


### Output
![image](https://github.com/Malkankhulika/Modul-5/assets/149793653/7eb0bdb8-05c4-4521-b4ed-e544ab61a99d)


### Penjelasan
Struktur Data Buku: Program ini mendefinisikan struktur data bernama Buku yang digunakan untuk menyimpan informasi tentang sebuah buku. Struktur ini memiliki lima anggota:
- judul_buku: String untuk menyimpan judul buku.
- pengarang: String untuk menyimpan nama pengarang.
- penerbit: String untuk menyimpan nama penerbit.
- tebal_halaman: Integer untuk menyimpan tebal buku dalam halaman.
- harga_buku: Double untuk menyimpan harga buku.
Array daftar_buku: Program ini mendeklarasikan array bernama daftar_buku dengan tipe data Buku. Array ini memiliki ukuran konstan jumlah_buku yang diinisialisasi dengan nilai 5. Artinya, array ini dapat menyimpan informasi hingga lima buku.

Selanjutnya lima buah array string digunakan untuk menyimpan data judul buku, pengarang, penerbit, tebal halaman, dan harga buku. Data dari array-array ini kemudian disalin ke dalam array daftar_buku menggunakan loop for. Dan loop for lain untuk menampilkan informasi tentang setiap buku. Informasi yang ditampilkan meliputi judul, pengarang, penerbit, tebal halaman, dan harga buku.

Jadi, Kode program C++ ini menunjukkan cara sederhana untuk menggunakan struktur data dan array untuk menyimpan dan menampilkan informasi tentang beberapa buku. Program ini dapat dimodifikasi untuk menampung lebih banyak buku, menambahkan fungsionalitas pencarian buku, atau menghitung total harga buku.

### 2. Buatlah sebuah struktur dengan skema seperti dibawah, isi dengan nilai kemudian jalankan.
![image](https://github.com/Malkankhulika/Modul-5/assets/149793653/07bd8f3a-3bf3-4a87-89c1-b8a4e1ca9cea)

```C++
#include <iostream>
#include <string>
using namespace std;

struct hewan {
    string nama_hewan;
    string jenis_kelamin;
    string kembangbiak;
    string pernafasan;
    string tempat_hidup;
    bool karnivora;
}; 

struct hewan_darat{
    hewan info_hewan;
    int jumlah_kaki;
    bool apakah_menyusui;
    string suara;
};
hewan_darat hewan1;

struct hewan_laut{
    hewan info_hewan;
    string bentuk_sirip;
    string pertahanan_diri;
};
hewan_laut hewan2;

int main() {
    hewan1.info_hewan.nama_hewan = "kucing";
    hewan1.info_hewan.jenis_kelamin = "p";
    hewan1.info_hewan.kembangbiak = "melahirkan";
    hewan1.info_hewan.pernafasan = "paru paru";
    hewan1.info_hewan.tempat_hidup = "daratan";
    hewan1.info_hewan.karnivora = true;
    hewan1.jumlah_kaki = 4;
    hewan1.apakah_menyusui = true;   
    hewan1.suara = "miaw";
    
    hewan2.info_hewan.nama_hewan = "penyu";
    hewan2.info_hewan.jenis_kelamin = "B";
    hewan2.info_hewan.kembangbiak = "Bertelur";
    hewan2.info_hewan.pernafasan = "paru paru dan insang";
    hewan2.info_hewan.tempat_hidup = "Lautan";
    hewan2.info_hewan.karnivora = false;
    hewan2.bentuk_sirip = "sirip dan ekor";
    hewan2.pertahanan_diri = " cangkang yang kuat";   

	//menampilkan data 
	cout << "\t Hewan Darat" << endl;
	cout << "Nama Hewan :" <<hewan1.info_hewan.nama_hewan << endl;
	cout << "Jenis Kelamin : "<<hewan1.info_hewan.jenis_kelamin << endl;
	cout << "Kembangbiak : "<< hewan1.info_hewan.kembangbiak << endl;
	cout << "Pernapasan : "<< hewan1.info_hewan.pernafasan << endl;
	cout << "Tempat Hidup : "<< hewan1.info_hewan.tempat_hidup << endl;
	cout << "karnivora : "<< hewan1.info_hewan.karnivora << endl;
	cout << "jumlah kaki : "<< hewan1.jumlah_kaki << endl;
	cout << "apakah menyusui?  : "<< hewan1.apakah_menyusui << endl;
	cout << "suara : "<< hewan1.suara << "\n" << endl ;

	//menampilkan data 
	cout << "\t Hewan Laut" << endl;
	cout << "Nama Hewan :" <<hewan2.info_hewan.nama_hewan << endl;
	cout << "Jenis Kelamin : "<<hewan2.info_hewan.jenis_kelamin << endl;
	cout << "Kembangbiak : "<< hewan2.info_hewan.kembangbiak << endl;
	cout << "Pernapasan : "<< hewan2.info_hewan.pernafasan << endl;
	cout << "Tempat Hidup : "<< hewan2.info_hewan.tempat_hidup << endl;
	cout << "apakah karnivora? "<< hewan2.info_hewan.karnivora << endl;
	cout << "bentuk sirip : "<< hewan2.bentuk_sirip << endl;
	cout << "pertahanan diri : "<< hewan2.pertahanan_diri << endl;


	return 0;
	}

    // Nama : Khulika Malkan
	// NIM 	: 2311110057
```
### Full Code Screenshot
![image](https://github.com/Malkankhulika/Modul-5/assets/149793653/82e46ca8-1c5e-4bf3-bd31-d648457ec3f9)


### Output
![image](https://github.com/Malkankhulika/Modul-5/assets/149793653/c614b8b7-8096-42ea-bf86-48400d9bda3f)


### Penjelasan
Kode program C++ di atas merupakan program yang dirancang untuk menampilkan informasi tentang dua hewan, yaitu kucing dan penyu. Program ini menggunakan struktur data untuk menyimpan informasi tentang hewan, dan kemudian menampilkan informasi tersebut ke layar. Dengan struktur data Kode program ini mendefinisikan:
- hewan: Struktur ini menyimpan informasi umum tentang hewan, seperti nama, jenis kelamin, cara berkembang biak, pernapasan, tempat hidup, dan apakah hewan itu karnivora.
- hewan_darat: Struktur ini mewarisi semua informasi dari struktur hewan dan menambahkan informasi spesifik tentang hewan darat, seperti jumlah kaki, apakah hewan itu menyusui, dan suaranya.
- hewan_laut: Struktur ini mewarisi semua informasi dari struktur hewan dan menambahkan informasi spesifik tentang hewan laut, seperti bentuk sirip dan cara pertahanan diri.

Fungsi utama dalam program ini berisi kode untuk mengisi data ke dalam struktur data dan kemudian menampilkan informasi ke layar.
kemudian Data untuk dua hewan, kucing dan penyu, diisi ke dalam struktur data hewan_darat dan hewan_laut. Data yang diisi meliputi nama hewan, jenis kelamin, cara berkembang biak, pernapasan, tempat hidup, dan informasi spesifik lainnya seperti jumlah kaki, apakah hewan itu menyusui, suara, bentuk sirip, dan cara pertahanan diri.

Selanjutnya Informasi tentang hewan yang telah disimpan dalam struktur data kemudian ditampilkan ke layar. Informasi yang ditampilkan meliputi nama hewan, jenis kelamin, cara berkembang biak, pernapasan, tempat hidup, dan informasi spesifik lainnya seperti jumlah kaki, apakah hewan itu menyusui, suara, bentuk sirip, dan cara pertahanan diri.

Kode program C++ ini menunjukkan cara sederhana untuk menggunakan struktur data untuk menyimpan informasi tentang dua hewan dan kemudian menampilkan informasi tersebut ke layar. Program ini dapat dimodifikasi untuk menampung lebih banyak hewan dan menambahkan fungsionalitas lain, seperti menghitung jumlah hewan, mencari hewan berdasarkan nama, atau menampilkan informasi statistik tentang hewan.

## Unguided 

### 1. Modifikasi tugas guided pertama, sehingga setiap item yang terdapat pada struct buku berupa array yang berukuran 5, isi dengan data kemudian tampilkan.
```C++
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
```
### Full Code Screenshot
![image](https://github.com/Malkankhulika/Modul-5/assets/149793653/182b4121-b3b3-4d04-92d9-a0a59d8fbb33)


### Output:
![image](https://github.com/Malkankhulika/Modul-5/assets/149793653/dc2667fb-40bc-4e4f-87e7-88d6a4111da6)

### Penjelasan:
Pertama seperti biasa header file iostream dan string yang diperlukan untuk program. iostream digunakan untuk fungsi input dan output standar, sedangkan string digunakan untuk manipulasi string. Kemudian mendefinisikan struktur bernama Buku. Struktur ini memiliki lima anggota, yaitu judul_buku, pengarang, penerbit, tebal_halaman, dan harga_buku. Masing-masing anggota memiliki tipe data yang berbeda:
- judul_buku: String untuk menyimpan judul buku.
- pengarang: String untuk menyimpan nama pengarang.
- penerbit: String untuk menyimpan nama penerbit.
- tebal_halaman: Integer untuk menyimpan tebal buku dalam halaman.
- harga_buku: Double untuk menyimpan harga buku.
Selanjutnya mendefinisikan array bernama daftar_buku dengan tipe data Buku. Array ini memiliki ukuran konstan jumlah_buku yang diinisialisasi dengan nilai 5. Artinya, array ini dapat menyimpan informasi hingga lima buku dan menyimpan data buku ke dalam array daftar_buku. Pertama, lima array string digunakan untuk menyimpan data judul buku, pengarang, penerbit, tebal halaman, dan harga buku. Kemudian, data dari array-array ini disalin ke dalam array daftar_buku menggunakan loop for. Loop for digunakan untuk mengulang semua

### 2. Apa yang terjadi jika deklarasi variabel struct yang dibuat pada tugas guided I?
Perbedaan Kode Program Struktur Data dan Array:

a. Struktur Data:
- Menyimpan data dalam anggota terdefinisi.
- Akses data langsung dengan operator .
- Sulit diubah skalanya.
- Efisien untuk akses data kompleks.
   
b. Array:
- Menyimpan data dalam elemen dengan tipe sama.
- Akses data dengan indeks dan [].
- Mudah diubah skalanya.
- Efisien untuk data besar dan berurutan.

## Kesimpulan
Struct (tipe data menyimpan) merupakan tipe data abstrak yang di dalamnya dapat menyimpan berbagai macam artibut atau jenis data string, int, double, dll. Dengan kata lain Struct merupakan cara yang efektif untuk mengelompokkan data terkait menjadi satu kesatuan dalam sebuah unit yang bernama struct. Setiap anggota struct memiliki nama yang unik untuk mengaksesnya. Struct berguna untuk membuat program lebih terorganisir dan mudah dipahami karena data dikelompokkan berdasarkan kategori. Array dapat dikombinasikan dengan struct untuk menyimpan banyak data dengan struktur yang sama. Dengan menggunakan struct, program akan menangani data kompleks dengan lebih baik, membuat kode lebih mudah dibaca dan dipahami dan memudahkan pengelolaan data yang berhubungan.

## Referensi
[1] https://www.academia.edu/80669633/Laporan_Praktikum_Struktur_Data_Modul_1_Tipe_Data_Variabel_Struct_dan_Implementasi?uc-sb-sw=36291656

[2] modul praktikum pemrograman c++ algoritma dan struktur data Rizki Muliono, S.Kom, M.Kom https://abdulkadir.blog.uma.ac.id/wp-content/uploads/sites/365/2019/02/Modul-Praktikum-Algoritma-Struktur-Data-Merge.pdf

[3] https://staffnew.uny.ac.id/upload/198204082014042002/pendidikan/Isi.pdf
