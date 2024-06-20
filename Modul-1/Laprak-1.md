# <h1 align="center">Laporan Praktikum Modul Tipe Data</h1>
<p align="center">Khulika Malkan</p>


## Dasar Teori
Tipe data adalah suatu memori atau media pada komputer yang digunakan untuk menampung informasi atau data sementara [1]. Dalam C++, terdapat 3 tipe data yang dijelaskan yaitu tipe data primitif, tipe data abstrak, dan tipe data koleksi. Ada dua kategori dari tipe data, yaitu tipe data dasar dan tipe data bentukan. Tipe data dasar adalah tipe data yang disediakan oleh bahasa pemrograman, antara lain: bilangan bulat (integer), bilangan biasa (real), bilangan tetap (const), karakter (character atau char), logic (logic atau boolean). Tipe data bentukan adalah tipe data yang dibentuk dari kombinasi tipe data dasar, antara lain larik (array), rekaman (record), string (string). 

### 1. Tipe Data Primitif
Tipe data primitif adalah tipe data yang sudah ditentukan oleh sistem, tipe data primitif ini disediakan oleh banyak bahasa pemrograman, perbedaannya terletak pada jumlah bit yang dialokasikan untuk setiap bit pada tipe data primitif tergantung pada bahasa pemrograman, compiler dan sistem operasinya. Contoh tipe data primitif adalah :

#### a.)	Bilangan Bulat (integer)
- Bilangan atau angka yang tidak memiliki titik decimal atau pecahan, seperti 10, 255, - 234.
- Tipe dituliskan sebagai integer atau int
- Jangkaun nilai bergantung pada implementasi perangkat keras computer, misalnya dari - 32768 s/d +32767.
- Operasi aritmatika: tambah +, kurang -, kali *, bagi /, sisa hasil bagi %.
- Operasi perbandingan: ,<=,>=,==, >< atau !=. 

#### b.)	Bilangan Biasa 
- Bilangan atau angka yang bisa memiliki titik decimal atau pecahan, dan ditulis sebagai: 235.45, +10456.56, -565.87 atau dalam notasi ilmiah seperti:1.234E+03, dsb.
- Tipe data dituliskan sebagai real atau float
- Jangkauan nilai: bergantung pada implementasi perangkat keras computer, misalnya dari -2.9E-39 s/d +1.7E+38. 

#### c.)	Bilangan tetap (const) 
- Bilangan tetap (const) adalah tipe bilangan, baik bernilai bulat maupun tidak, yang nilainya tidak berubah selama algoritma dilaksanakan.
- Tipe dituliskan sebagai const.
- Jangkauan nilai meliputi semua bilangan yang mungkin. 

#### d.)	Karakter (character) 
- Karakter adalah data tunggal yang mewakili semua huruf, symbol baca, dan juga symbol angka yang tidak dapat dioperasikan secara matematis, misalnya ‘A’,’a’,’?’,’#’, dst
- Tipe dituliskan sebagai char
- Jangkauan nilai meliputi semua karakter dalam kode ASCII, atau yang tertera pada setiap tombol keyboard.
- Operasi pembandingan dapat dilakukan dan dievaluasi menurut kode ASCII seperti huru ‘A’ (Hex 41) sebenarnya lebih kecil dari huruf ‘a’ (Hex 61).
 
#### e.)	Logik 
- Tipe data logic adalah tipe data yang digunakan untuk memberi nilai pada hasil pembandingan, atau kombinasi pembandingan.
- Tipe dituliskan sebagai boolean.
- Jangkauan nilai ada dua, yaitu true dan false.
- Contoh: 45 > 67, hasil false.
- Ada beberapa operasi untuk data jenis logic, antara lain and, or, dan not. 

### 2. Tipe Data Abstrak
Tipe data abstrak atau yang biasa disebut Abstrak Data Tipe(ADT) merupakan tipe data yang dibentuk oleh programer itu sendiri. Pada tipe data abstrak bisa berisi banyak tipe data, jadi nilainya bisa lebih dari satu dan beragam tipe data. Fitur Class adalah fitur Object Oriented Program(OPP) pada bahasa C++ yang mirip dengan fitur data structures Struct pada bahasa C. Keduanya berfungsi untuk membungkus tipe data di dalamnya sebagai anggota. Menurut learn.microsoft.com perbedaan antara Struct dan Class adalah pada akses defaultnya dimana Struct bersifat public dan Class bersifat private.

### 3. Tipe Data Koleksi
Tipe data koleksi (Collection Data Type) adalah tipe data yang digunakan untuk mengelompokkan dan menyimpan beberapa nilai atau objek secara bersamaan. Tipe data koleksi memungkinkan Anda menyimpan, mengelola, dan mengakses sejumlah besar data dengan cara yang terstruktur. Ada beberapa tipe data koleksi yang umum digunakan dalam pemrograman, dan di antaranya adalah:

#### a.)	Array (larik) 
- Array adalah tipe data bentukan yang merupakan wadah untuk manampung nilai-nilai data yang sejenis. Kumpulan bilangan bulat adalah array integer, kumpulan bilangan tidak bulat adalah array real.
- Cara mendifiniskan ada dua macam, yaitu: 1) Nilai_ujian: array[1...10] of integer; atau 2) int nilai_ujian[10]
- Kedua dfinisi di atas menunjukan bahwa nilai_ujian adalah kumpulan dari 10 nilai bertipe bilangan bulat. 

#### b.)	String 
- String adalah tipe data bentukan yang merupakn deretan karakter yang membentuk satu kata atau satu kalimat, yang biasanya diapit oleh dua tanda kutip.
- Contoh: nama, alamat, dan judul adalah tipe string
- Cara mendifinisaknnya adalah: String Nama, Alamat; atau Nama, Alamat: String.
 
#### c.) Vector 
Vector adalah Standard Template Library (STL) jika di dalam C/C++ memiliki bentuk std::vector . Umumnya, vector mirip seperti array yang memiliki kemampuan untuk menyimpan data dalam bentuk elemen-elemen yang alokasi memorinya dilakukan otomatis dan bersebelahan. Kemampuan vector bukan hanya pada jumlah elemen yang dinamis, vector pada C/C++ juga dilengkapi dengan fitur-fitur pelengkap seperti element access, iterators, capacity, modifiers

#### d.) Map
Map terasa mirip dengan array namun dengan index yang memungkinkan untuk berupa tipe data selain integer. Pada map, indeks tersebut diberi nama “key”. Pada std::map digunakan Self-Balancing Tree khususnya Red-Black Tree.

## Guided 

### 1. Tipe Data Primitif

```C++
#include <iostream>
using namespace std;
// Main program
int main()
{
    char op;
    float num1, num2;
    cout<<"Masukan Operator: ";
    cin>>op;
    cout<<"\nMasukan Bilangan ke-1 dan ke-2: ";
    cin>>num1>>num2;

    switch(op)
    {
    case '+':
        cout<< num1 + num2;
        break;
    case '-':
        cout<< num1 - num2;
    case '*':
        cout<< num1 * num2;
    case '/':
        cout<< num1 / num2;
    default:
        cout<< "Error! operator is not correct";
        
    }

return 0;
}
```
Kode program di atas merupakan kalkulator sederhana yang dapat melakukan operasi penjumlahan, pengurangan, perkalian, dan pembagian. 
#### Fungsi:
- Membaca operator (+, -, *, /) dan dua bilangan dari user.
- Melakukan operasi aritmatika berdasarkan operator yang dipilih.
- Menampilkan hasil operasi ke layar.
#### Fitur:
- Mendukung operasi aritmatika dasar.
- Mencetak pesan error jika operator tidak valid.
#### Kesimpulan:
Kode program ini menunjukkan cara menggunakan variabel, operator, dan pernyataan kontrol dalam C++ untuk membuat kalkulator sederhana. Program ini dapat dimodifikasi dan diperluas untuk menambahkan fungsionalitas dan meningkatkan kompleksitasnya.

### 2. Tipe Data Abstrak

```C++
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

    mhs1.name = "Tata";
    mhs1.address = "Banjarnegara";
    mhs1.age = 18;
    mhs2.name = "Lika"; 
    mhs2.address = "Kuningan";
    mhs2.age = 18; 

    cout<<"Mahasiswa 1\n";
    cout<<"Nama: "<< mhs1.name <<endl;
    cout<<"Alamat: " <<mhs1.address <<endl;
    cout<<"Umur: "  << mhs1.age <<endl;

    cout <<"\nMahasiswa 2\n"; 
    cout << "Nama: " << mhs2.name <<endl;
    cout << "Alamat: "<< mhs2.address <<endl;
    cout << "Umur: "<< mhs2.age <<endl; 

    return 0;
}
```
Kode diatas merupakan contoh program yang menggunakan tipe data abstrak, yaitu struct. Program diatas menggunakan struct `Mahasiswa` yang memuat tiga nilai yaitu `name` dan `address` yang sama-sama bertipe data character, dan ada `age` yang bertipe data integer. Lalu terdapat `const` pada nilai `name` dan `address` yang berfungsi supaya object atau variabel tidak dapat dimodifikasi. Setelah itu kita bisa mengisi data dengan membuat dua variabel yang bertipe data struct `Mahasiswa`, yaitu `mhs1` dan `mhs2`. Setelah itu kita tinggal mengisi data tersebut ke masing-masing variabel dan menampilkannya menggunakan fungsi `cout`. intinya Kode program ini menunjukkan cara menggunakan struct untuk membuat program sederhana yang menyimpan dan menampilkan data dua mahasiswa.

### 3. Tipe Data Koleksi

```C++
#include <iostream>
#include <array>
using namespace std;

int main() 
{
    
    int nilai[5];
    nilai[0] = 18;
    nilai[1] = 30;
    nilai[2] = 17;
    nilai[3] = 6;
    nilai[4] = 3;

    
    cout << "Isi array pertama : " << nilai[0] << endl;
    cout << "Isi array kedua : " << nilai[1] << endl;
    cout << "Isi array ketiga : " << nilai[2] << endl;
    cout << "Isi array keempat : " << nilai[3] << endl;
    cout << "Isi array kelima : " << nilai[4] << endl;
    return 0;
}
```
Kode program tersebut menunjukkan cara membuat dan menggunakan array sederhana dalam C++ untuk menyimpan dan menampilkan nilai-nilai.
#### Fungsi:
- Menyimpan lima nilai integer dalam array.
- Menampilkan nilai-nilai yang disimpan dalam array.
#### Fitur:
- Menerapkan array untuk menyimpan data secara terstruktur.
- Mengakses data dalam array menggunakan indeks.
#### Kesimpulan:
Kode program ini menunjukkan contoh dasar penggunaan array dalam C++. Program ini dapat dimodifikasi dan diperluas seperti ; Menyimpan data dengan tipe data yang berbeda, Melakukan operasi CRUD (Create, Read, Update, Delete) pada data array dan Menerapkan algoritma pengurutan dan pencarian pada data array.

## Unguided 

### 1. Buatlah program menggunakan tipe data primitif minimal dua fungsi dan bebas. Menampilkan program, jelaskan program tersebut dan ambil kesimpulan dari materi tipe data primitif!

```C++
#include <iostream> //untuk input/output

using namespace std; //untuk menghindari penulisan std::

int main() //fungsi utama di main program
{
  // Deklarasi variabel
  int bilangan;

  // Meminta input bilangan dari user
  cout << "Masukkan bilangan: ";
  cin >> bilangan;

  // Menentukan bilangan ganjil atau genap
  if (bilangan % 2 == 0) {
    cout << bilangan << " adalah bilangan genap." << endl;
  } else {
    cout << bilangan << " adalah bilangan ganjil." << endl;
  }

  return 0;
}
```
#### Output:
![image](https://github.com/Malkankhulika/Modul-1/assets/149793653/10e973fb-eac7-4b34-9519-b86ff6a833dd)

Kode diatas merupakan program yang digunakan untuk menentukan apakah suatu bilangan adalah ganjil atau genap dalam C++.
Kesimpulan dari materi tipe data primitif ini adalah tipe data ini merupakan tipe data yang sederhana, karena tipe data ini merupakan tipe data bawaan dari bahasa pemrograman. Tipe data ini bisa menyimpan niali seperti digit, byte, ataupun karakter. Namun, tipe data primitif tidak bisa menjangkau data kompleks yang memiliki tingkat kerumitan tinggi.

#### Full code Screenshot:
![image](https://github.com/Malkankhulika/Modul-1/assets/149793653/40b84562-0c46-4091-9e0b-1f10ba010f18)


### 2. Jelaskan fungsi dari class dan struct secara detail dan berikan contoh programnya

```C++
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
    mhs1Struct.nama = " Lika ";
    mhs1Struct.umur = 18;
    cout << mhs1Struct.tampilkanData();

    // Menggunakan class
    MahasiswaClass mhs1Class(" Lika ", 18);
    cout << mhs1Class.tampilkanData();

    return 0;
}
```
#### Output:
![image](https://github.com/Malkankhulika/Modul-1/assets/149793653/e28ace53-3e18-4507-b8a1-7b420bc03792)

Structures (struct) pada C++ adalah keyword di bahasa pemrograman C++ yang dapat digunakan untuk mengelompokkan data dan fungsi. Struct dapat mengelompokkan data/variabel – variabel dan fungsi – fungsi yang saling berhubungan dalam satu nama. Variabel – variabel di dalam struct dapat disebut dengan anggota dari struct. Anggota dari struct dapat memiliki tipe data yang berbeda satu sama lain. Tidak seperti array yang semua anggotanya memiliki tipe data yang sama. Struct menjadi tipe data baru yang mengelompokkan anggota anggotanya. Lalu, anggotanya dapat diakses melalui struct tersebut.

Struct mirip dengan class. Keduanya sama – sama mengelompokkan data dan fungsi. Perbedaan antara keduanya, diantaranya: default member access struct adalah public sedangkan default member access class adalah private, struct tidak dapat digunakan sebagai parent di pewarisan sedangkan class dapat digunakan sebagai parent di pewarisan, dan masih banyak lagi. 

Contoh program yang menggunakan struct yaitu program diatas. Program diatas mengandung tipe data 

#### Full code Screenshot:
![image](https://github.com/Malkankhulika/Modul-1/assets/149793653/756e710e-10f4-4eaf-8f5a-56baaab7dcdb)

### 3. Buat dan jelaskan program menggunakan fungsi map dan jelaskan perbedaan dari array dengan map

```C++
#include <iostream> //input preprocessor directive
#include <map> //input map
using namespace std; //supaya tidak perlu menggunakan std:: disetiap input object or function

int main() { //main program 
    map <int, string> character; //membuat map dengan key int dan bertipe data string

    //menginputkan karakter
    character[0] = "lika";
    character[1] = "lika liku";
    character[2] = "alika";
    character[3] = "ika";
    character[4] = "luka";

    //menampilkan karakter yang sudah dibuat
    cout << "==========CHARACTER LIST==========" << endl;
    cout << "Karakter pertama : " << character[0] << endl;
    cout << "Karakter kedua : " << character[1] << endl;
    cout << "Karakter ketiga : " << character[2] << endl;
    cout << "Karakter keempat : " << character[3] << endl;
    cout << "Karakter kelima : " << character[4] << endl;

    return 0;
}
```
#### Output:
![image](https://github.com/Malkankhulika/Modul-1/assets/149793653/049c1730-c6e6-4502-8fbf-1c54b8551fc4)

Kode diatas merupakan contoh program yang menggunakan fungsi map. Pertama kita deklarasikan dulu map nya dengan menggunakan `#include <map>`, lalu pada main program kita menggunakan fungsi map dengan menginputkan `<int, string> character`. Code tersebut digunakan untuk membuat map dengan key int yang bertipe data string dengan nama variabel `character`. Lalu kita tinggal menambahkan datanya ke dalam variabel `character` dan menampilkannya menggunakan fungsi `cout`.

Perbedaan antara map dan array adalah array digunakan untuk menyelesaikan masalah matriks, mudah dalam menerapkan algoritma sorting, penjadwalan CPU, diterapkan sebagai tabel pencarian di komputer. Map digunakan ketika kita ingin menghasilkan array baru berdasarkan array asli.

#### Full code Screenshot:
![image](https://github.com/Malkankhulika/Modul-1/assets/149793653/0d0dfd01-6885-440e-b2bb-d4babc552134)

## Kesimpulan
Berdasarkan materi pada Modul 1 yang telah saya pelajari, dapat diambil beberapa kesimpulan yakni sebagai berikut:
1.	Materi pada modul 1 ini menguraikan konsep dasar tentang data dan tipe data dalam pemrograman. Data diartikan sebagai sekelompok informasi atau fakta mentah, sementara tipe data mencerminkan klasifikasi nilai dan operasi yang dapat dilakukan pada nilai tersebut.
2.	Dalam konteks tipe data, terdapat perbedaan antara tipe data dasar seperti bilangan bulat, bilangan biasa, karakter, dan tipe data bentukan seperti array dan string. 
3.	Penerapan operasi penggabungan pada string menggunakan operator + dan evaluasi ekspresi logika menjadi bagian integral dari pembahasan. Hal ini memberikan pemahaman tentang bagaimana manipulasi data dan logika dilakukan dalam bahasa pemrograman.
4. Tipe data yang ada pada bahasa C++. Ada 3 tipe data yang ada yaitu tipe data primitif, tipe data abstrak, dan tipe data koleksi. Tipe data primitif adalah tipe data yang sudah ditentukan oleh sistem. Untuk tipe data abstrak merupakan tipe data yang dibentuk oleh programer itu sendiri. Pada tipe data abstrak bisa berisi banyak tipe data, jadi nilainya bisa lebih dari satu dan beragam tipe data, dan yang terakhir tipe data koleksi adalah tipe data yang digunakan untuk mengelompokkan dan menyimpan beberapa nilai atau objek secara bersamaan.
5. Membuat program menggunakan tipe data primitif minimal dua fungsi, membuat program yang menggunakan fungsi class dan struct, dan yang terakhir membuat program yang menggunakan fungsi map.
Secara keseluruhan, laporan ini memberikan wawasan mendalam tentang dasar-dasar struktur data dan konsep pemrograman, yang dapat membentuk landasan pemahaman untuk modal saya kedepannya. Dengan demikian, materi pembelajaran pada modul ini memberikan pemahaman yang komprehensif tentang dasar-dasar data, tipe data, penggunaan pointer, dan operasi-operasi yang melibatkan konsep tersebut terkhusus dalam pemrograman C++ (yang saya gunakan).

## Referensi
Jefrimarzal, Juni 2017. Tipe Data dan Variabel (1-5, Chapter 2). Sumber : https://jefrimarzal.staff.unja.ac.id/wp-content/uploads/sites/22/2017/08/Temu_2_tipedata-dan-variabel.pdf

Khoirudin, Algoritma & Struktur Data dengan Python 3. Semarang: Universitas Semarang Press, 2019.

Josi Kie, Apa Itu Struct di C++?, diakses dari https://josikie.com/apa-itu-struct-di-c/

