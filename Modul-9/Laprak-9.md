# <h1 align="center">Laporan Praktikum Modul Rekursif & Hash Table
<p align="center">Khulika Malkan</p>
<p align="center">2311110057</p>

## Tujuan Praktikum
<pre>
a. Mampu memahami konsep rekursif pada struktur data dan algoritma
b. Mampu mengimplementasikan rekursif pada kode program
c. Mahasiswa mampu menerapkan Hash Code kedalam pemrograman
</pre>

## Dasar Teori
### Rekursif
rekursif adalah fungsi yang memanggil dirinya sendiri[1]. Fungsi rekursi (Recursive Function) adalah suatu fungsi yang memanggil dirinya sendiri, artinya fungsi tersebut dipanggil didalam tubuh fungsi itu sendiri. Fungsi yang seperti ini disebut fungsi rekursif (recursive function ). Dalam sebuah fungsi rekursif pemanggilan dapat terjadi berulang kali. Karena ada proses yang
berulang-ulang maka harus ada suatu kondisi yang mengakhiri prosesnya. Jika tidak, maka proses tidak akan pernah berhenti sampai memori yang digunakan tidak dapat menampung lagi.
Jenis-jenis Rekursi
Terdapat dua jenis fungsi rekursi yaitu:
<pre>
- Rekursi langsung : Dalam rekursi langsung, fungsi memanggil dirinya sendiri secara langsung.
- Rekursi tidak langsung : Jika sebuah fungsi memanggil dirinya sendiri secara tidak langsung dari fungsi lain.
</pre>
Kelebihan Fungsi Rekursif adalah program menjadi lebih singkat. Pada beberapa kasus, lebih mudah menggunakan fungsi rekursif, contohnya: pangkat, factorial, dan fibonacci, dan beberapa proses deret lainnya. Fungsi rekursif lebih efisien dan cepat dibandingkan proses secara iteratif. Kekurangan Fungsi Rekursif adalah memakan memori lebih besar, karena setiap bagian dari dirinya dipanggil, akan membutuhkan sejumlah ruang memori untuk penyimpanan. Rekursif sering kali tidak bisa berhenti sehingga memori akan terpakai habis dan program bisa hang [2].

### Hash Table
Hash Table adalah sebuah struktur data yang terdiri atas sebuah tabel dan fungsi yang bertujuan untuk memetakan nilai kunci yang unik untuk setiap record (baris) menjadi angka (hash) lokasi record tersebut dalam sebuah tabel. Keunggulan dari struktur hash [3].

Hash Table merupakan sebuah struktur data yang terdiri dari sebuah tabel dan fungsi untuk memetakan nilai kunci yang unik pada setiap baris menjadi angka (hash) yang menunjukkan lokasi record tersebut dalam tabel. Keuntungan dari struktur Hash Table ini adalah akses yang cepat jika record yang dicari langsung berada pada angka hash lokasi penyimpanannya.
Namun, seringkali terjadi pertabrakan (collision) pada Hash Table di mana beberapa record memiliki angka hash yang sama. Hal ini terjadi karena hash function yang digunakan tidak dapat memetakan setiap record secara unik, sehingga dibutuhkan kebijakan resolusi bentrokan (collision resolution policy) untuk menentukan lokasi record dalam tabel. Biasanya, kebijakan resolusi bentrokan dilakukan dengan mencari lokasi tabel yang masih kosong setelah lokasi yang telah terbentur.
Operasi pada Hash Table :
<pre>
- insert: diberikan sebuah key dan nilai, insert nilai dalam tabel
- find: diberikan sebuah key, temukan nilai yang berhubungan dengan key
- remove: diberikan sebuah key,temukan nilai yang berhubungan dengan key kemudian hapus nilai tersebut
- getIterator: mengambalikan iterator,yang memeriksa nilai satu demi satu
</pre>

Struktur dan Fungsi pada Hash Tabel :
Hash table menggunakan struktur data array asosiatif yang mengasosiasikan record dengan sebuah field kunci unik berupa bilangan (hash) yang merupakan representasi dari record tersebut. Misalnya, terdapat data berupa string yang hendak disimpan dalam sebuah hash table. String tersebut direpresentasikan dalam sebuah field kunci k. Cara untuk mendapatkan field kunci ini sangatlah beragam, namun hasil akhirnya adalah sebuah bilangan hash yang digunakan untuk menentukan lokasi record.
- Inisialisasi
- Cleanup
- Menambah Elemen Baru
- Menghapus sebuah elemen
- Searching : Teknik pencarian pada hash tabel yaitu dengan mencari nilai hash yang sesuai menggunakan deklarasi sama seperti pada linked list. Jika data tidak ditemukan maka menggunakan nilai balik NULL.
- Resizing : Jumlah elemen pada hash tabel tidak selalu diketahui ketika terjadi penambahan data. Jika jumlah elemen bertambah begitu besar maka itu akan mengurangi operasi pada hash tabel yang dapat menyebabkan terjadinya kegagalan memory. Fungsi Resizing hash tabel digunakan untuk mencegah terjadinya hal itu.
- Lookup : keunggulan struktur hash table dibandingkan dengan struktur tabel biasa adalah kecepatannya dalam mencari data. Terminologi lookup mengacu pada proses yang bertujuan untuk mencari sebuah record pada sebuah tabel, dalam hal ini adalah hash table.
- Collision (Tabrakan) : Keterbatasan tabel hash menyebabkan ada dua angka yang jika dimasukkan ke dalam fungsi hash maka menghasilkan nilai yang sama. Hal ini disebut dengan collision.

## Guided
### 1. Rekursif Langsung (Direct Recursion)
#### Sourcecode
```C++
#include <iostream>
using namespace std;

// Code ini berfungsi untuk melakukan hitung mundur
// dari angka yang diinputkan

void countdown(int n) {
    if (n == 0) {
        return; // invalid input
    }

    cout << n << " ";
    countdown(n - 1);
}

int main() {
    int number = 5; // 5 merupakan inputnya

    cout << "Rekursif Langsung: ";
    countdown(number);
    cout << endl;

    return 0;
}

// Khulika Malkan
// 2311110057
```
#### Full Code Screenshot
![image](https://github.com/Malkankhulika/Modul-9/assets/149793653/6a7d7bde-dd97-4336-b11d-40a21281d2ed)


#### Output
![image](https://github.com/Malkankhulika/Modul-9/assets/149793653/6371bd5e-aaf7-43cf-ada0-3bf53b9d8489)


#### Penjelasan
a. Fungsi countdown(n):
- Menerima bilangan bulat n sebagai input, yang mewakili angka awal untuk hitung mundur.
- Mengecek kondisi dasar: Jika n adalah 0 (batas terendah), fungsi ini langsung kembali (return) tanpa melakukan rekursi lebih lanjut. Ini untuk mencegah rekursi tak terhingga dan memastikan hitung mundur berhenti.
- Jika n bukan 0, fungsi ini mencetak nilai n saat ini ke konsol.
- Kemudian, fungsi ini memanggil dirinya sendiri secara rekursif dengan n - 1 sebagai argumen. Ini secara efektif mengurangi nilai n dan melanjutkan hitung mundur.

b. Fungsi main():
- Menyetel nilai input awal number menjadi 5.
- Memanggil fungsi countdown() dengan nilai input number.
- Ini memulai proses hitung mundur rekursif dari 5 ke 0, mencetak setiap angka di sepanjang proses.-

### 2. Rekursif Tidak Langsung (Indirect Recursion)
#### Sourcecode
```C++
#include <iostream>
using namespace std;
void functionB(int n);
void functionA(int n) {
    if (n > 0) {
        cout << n << " ";
        functionB(n - 1); // Panggilan rekursif tidak langsung
    }
}
void functionB(int n) {
    if (n > 0) {
        cout << n << " ";
        functionA(n / 2); // Panggilan rekursif tidak langsung
    }
}
int main() {
    int num = 5;
    cout << "Rekursif Tidak Langsung: ";
    functionA(num);
    return 0;
}

//Khulika Malkan
//2311110057
```
#### Full Code Screenshot
![image](https://github.com/Malkankhulika/Modul-9/assets/149793653/4c5806e3-0a21-4282-802b-e1c627417afb)


#### Output
![image](https://github.com/Malkankhulika/Modul-9/assets/149793653/9bff5407-c522-4e40-876e-d7c3b0f075ec)


#### Penjelasan
konsep rekursi tidak langsung melalui dua fungsi, functionA() dan functionB(), yang saling memanggil secara tidak langsung. Program ini mencetak urutan angka dalam pola tertentu.

a. Fungsi functionA(n):
- Menerima bilangan bulat n sebagai input.
- Memiliki kondisi dasar: Jika n lebih besar dari 0, fungsi ini mencetak nilai n saat ini ke konsol.
- Kemudian, fungsi ini memanggil functionB() dengan n - 1 sebagai argumen. Ini memulai panggilan rekursif tidak langsung ke functionB().

b. Fungsi functionB(n):
- Menerima bilangan bulat n sebagai input.
- Memiliki kondisi dasar: Jika n lebih besar dari 0, fungsi ini mencetak nilai n saat ini ke konsol.
- Kemudian, fungsi ini memanggil functionA() dengan n / 2 sebagai argumen. Ini memulai panggilan rekursif tidak langsung lainnya kembali ke functionA().

c. Fungsi main():
- Menyetel nilai input awal num menjadi 5.
- Memanggil functionA(num) dengan nilai input num.
- Ini memicu proses rekursi tidak langsung antara functionA() dan functionB()

### 3. Hash Table
#### Sourcecode
```C++
 #include <iostream>
#include <string>
#include <vector>

using namespace std;
const int TABLE_SIZE = 11;


string name;
string phone_number;
class HashNode {
public:
    string name;
    string phone_number;

    HashNode(string name, string phone_number) {
        this->name = name;
        this->phone_number = phone_number;
    }
};


class HashMap {
private:
    vector<HashNode*> table[TABLE_SIZE];
public:
    int hashFunc(string key) {
        int hash_val = 0;
        for (char c : key) {
            hash_val += c;
        }
    return hash_val % TABLE_SIZE; //4 bisa aja 204, 12004, 6 bisa aja 266, 300
}

    void insert(string name, string phone_number) {
        int hash_val = hashFunc(name);
        
        for (auto node : table[hash_val]) {
            if (node->name == name) {
                node->phone_number = phone_number;
                return;
            }
        }
        table[hash_val].push_back(new HashNode(name, phone_number));
    }
    void remove(string name) {
        int hash_val = hashFunc(name);
        
        for (auto it = table[hash_val].begin(); it !=
table[hash_val].end(); it++) {
            if ((*it)->name == name) {
                table[hash_val].erase(it);
                return;
            }
        }
    }

    string searchByName(string name) {
    int hash_val = hashFunc(name);
    for (auto node : table[hash_val]) {
        if (node->name == name) {
            return node->phone_number;
        }
    }
return "";
}

void print() {
    for (int i = 0; i < TABLE_SIZE; i++) {
        cout << i << ": ";
            for (auto pair : table[i]) {
            if(pair != nullptr){
                cout << "[" << pair->name << ", " << pair->phone_number << "]";
            }
        }
        cout << endl;
    }
    }   
};
int main() {
HashMap employee_map;

employee_map.insert("Mistah", "1234");
employee_map.insert("Pastah", "5678");
employee_map.insert("Ghana", "91011");

cout << "Nomer Hp Mistah : " <<
employee_map.searchByName("Mistah") << endl;
cout << "Phone Hp Pastah : " <<
employee_map.searchByName("Pastah") << endl;
employee_map.remove("Mistah");

cout << "Nomer Hp Mistah setelah dihapus : " <<
employee_map.searchByName("Mistah") << endl << endl;
cout << "Hash Table : " << endl;

employee_map.print();

return 0;
}
// Khulika Malkan
// 2311110057
```
#### Full Code Screenshot
![image](https://github.com/Malkankhulika/Modul-9/assets/149793653/f5c0d003-9cdb-4a15-9190-ea26a0a58faa)


#### Output
![image](https://github.com/Malkankhulika/Modul-9/assets/149793653/40f6b337-85e5-4137-9e47-e720581efa04)


#### Penjelasan
Pada program di atas, class HashNode merepresentasikan setiap node dalam hash table, yang terdiri dari nama dan nomor telepon karyawan. Class HashMap digunakan untuk mengimplementasikan struktur hash table dengan menggunakan vector yang menampung pointer ke HashNode. Fungsi hashFunc digunakan untuk menghitung nilai hash dari nama karyawan yang diberikan, dan fungsi insert digunakan untuk menambahkan data baru ke dalam hash table. Fungsi remove digunakan untuk menghapus data dari hash table, dan fungsi searchByName digunakan untuk mencari nomor telepon dari karyawan dengan nama yang diberikan


## Unguided 
### 1. Buatlah sebuah program Rekursif Langsung (Direct Recursion) yang menghitung nilai faktorial dari sebuah inputan bilangan bulat positif!             Contoh Output:
![image](https://github.com/Malkankhulika/Modul-9/assets/149793653/1f6cc29b-5f62-4e31-bb82-eea9e77a4e7a)

#### Kode Program
```C++
#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0) {
        return 1; 
    } else {
        return n * factorial(n - 1); 
    }
}

int main() {
    int number = 5; 
    int result = factorial(number);

    cout << "Masukkan bilangan bulat positif : " << number << endl;
    cout << "Faktorial dari 5 adalah: " << result << endl;

    return 0;
}

//Khulika Malkan
//2311110057
```
#### Full Code Screenshot
![image](https://github.com/Malkankhulika/Modul-9/assets/149793653/8a4bb62b-25c3-4454-936c-546fae8bc76e)


#### Output:
![image](https://github.com/Malkankhulika/Modul-9/assets/149793653/4d6827ab-e57e-4099-b6dc-0515145c98bc)

#### Penjelasan:
- #include <iostream>: Baris ini menyertakan file header iostream yang menyediakan fungsi untuk operasi input/output seperti cout (output konsol) dan cin (input konsol).
- using namespace std;: Baris ini membawa namespace std ke dalam cakupan, memungkinkan Anda untuk menggunakan objek C++ standar seperti cout dan cin tanpa awalan std::.
- int factorial(int n): Fungsi ini menerima bilangan bulat n sebagai input dan mengembalikan faktorial dari bilangan tersebut. if (n == 0) { return 1; }: Ini adalah kondisi dasar dari rekursi. Faktorial dari 0 didefinisikan sebagai 1, jadi jika n adalah 0, fungsi ini hanya mengembalikan 1. Dan
else { return n * factorial(n - 1); }: Ini adalah kasus rekursif. Faktorial dari n dihitung dengan mengalikan n dengan faktorial dari n - 1. Fungsi kemudian memanggil dirinya sendiri secara rekursif dengan n - 1 sebagai argumen. 4. Fungsi main:
- int main(): Ini adalah titik masuk program. Eksekusi kode dimulai di sini.
 int number = 5;: Baris ini mendeklarasikan variabel integer number dan menginisialisasinya dengan nilai 5 (Anda dapat mengubah nilai ini untuk menghitung faktorial dari bilangan yang berbeda).
- int result = factorial(number);: Baris ini memanggil fungsi factorial dengan nilai number (5 dalam kasus ini) dan menyimpan hasil yang dikembalikan (faktorial dari 5) dalam variabel result.
- Pernyataan cout: Baris ini mencetak pesan ke konsol. Baris pertama menampilkan bilangan input, dan baris kedua menampilkan faktorial yang dihitung.

### 2. Buatlah versi program Rekursif Tidak Langsung (Indirect Recursion) dari soal nomor 1 di atas!
#### Kode Program
```C++
#include <iostream>
using namespace std;

int factorialHelper(int n, int accumulator) {
    if (n == 0) {
        return accumulator;
    } else {
        return factorialHelper(n - 1, accumulator * n);
    }
}


int factorial(int n) {
    if (n < 0) {
        cout << "Input must be non-negative." << endl;
        return -1; // Error untuk input negatif
    }
    return factorialHelper(n, 1);
}

int main() {
    int number = 5; // 5 masukan inputnya 
    int result = factorial(number);

    if (result != -1) { // untuk mengecek kondiri eror
    cout << "Masukkan bilangan bulat positif : " << number << endl;
    cout << "Faktorial dari 5 adalah: " << result << endl;
    }
    return 0;
}

// Khulika Malkan
// 2311110057
```
#### Full Code Screenshot
![image](https://github.com/Malkankhulika/Modul-9/assets/149793653/1752c8af-007c-4b64-bcc9-c8450da9e934)


#### Output:
![image](https://github.com/Malkankhulika/Modul-9/assets/149793653/c275a029-7d1b-4347-b2d9-197c6f6d4640)

#### Penjelasan:
a. Fungsi factorialHelper (Fungsi Pembantu):
- int factorialHelper(int n, int accumulator): Fungsi ini menerima dua argumen:
- n: Bilangan untuk menghitung faktorial.
- accumulator: Variabel untuk menyimpan hasil perkalian selama perhitungan.
- Fungsi ini mengimplementasikan logika inti faktorial menggunakan rekursi.
- if (n == 0): Ini adalah kondisi dasar dari rekursi. Ketika n mencapai 0 (faktorial dari 0), fungsi mengembalikan nilai accumulator akhir, yang mewakili faktorial.
- else: Ini adalah kasus rekursif. Fungsi mengalikan n saat ini dengan accumulator dan memanggil dirinya sendiri secara rekursif dengan n - 1 dan accumulator yang diperbarui.

b. Fungsi factorial (Fungsi Pembungkus):
- int factorial(int n): Fungsi ini bertindak sebagai pembungkus di sekitar factorialHelper. Ini menangani validasi input dan memanggil fungsi pembantu.
- if (n < 0): Ini memeriksa input negatif. Jika input negatif, pesan kesalahan ditampilkan, dan kode kesalahan (-1) dikembalikan.
- return factorialHelper(n, 1);: Jika input valid (non-negatif), fungsi memanggil factorialHelper dengan n dan nilai accumulator awal 1.

c. Fungsi main:
- int main(): Ini adalah titik masuk program.
- int number = 5;: Baris ini mendeklarasikan dan menginisialisasi variabel integer number dengan nilai input (5 dalam kasus ini). int result = factorial(number);: Baris ini memanggil fungsi factorial dengan number untuk menghitung faktorial.
- if (result != -1): Ini memeriksa nilai yang dikembalikan (result). Jika bukan kode kesalahan (-1), ini menunjukkan perhitungan yang berhasil.
- Pernyataan cout: Baris ini mencetak pesan ke konsol, menampilkan bilangan input dan faktorial yang dihitung.

### 3. Implementasikan hash table untuk menyimpan data mahasiswa. Setiap mahasiswa memiliki NIM dan nilai. Implementasikan fungsi untuk menambahkan data baru, menghapus data, mencari data berdasarkan NIM, dan mencari data berdasarkan nilai. Dengan ketentuan :
<pre>
a. Setiap mahasiswa memiliki NIM dan nilai.
b. Program memiliki tampilan pilihan menu berisi poin C.
c. Implementasikan fungsi untuk menambahkan data baru, menghapus data, mencari data berdasarkan NIM, dan mencari data berdasarkan rentang nilai (80 – 90).
</pre>
#### Kode Program
```C++
#include <iostream>
#include <string>
#include <vector>
using namespace std;

const int TABLE_SIZE = 10;

class HashNode
{
public:
    string NIM;
    int nilai;
    HashNode(string NIM, int nilai)
    {
        this->NIM = NIM;
        this->nilai = nilai;
    }
};

class HashMap
{
private:
    vector<HashNode *> table[TABLE_SIZE];

public:
    int hashFunc(string key)
    {
        int hash_val = 0;
        for (char c : key)
        {
            hash_val += c;
        }
        return hash_val % TABLE_SIZE;
    }
    
    void insert(string NIM, int nilai)
    {
        int hash_val = hashFunc(NIM);
        for (auto node : table[hash_val])
        {
            if (node->NIM == NIM)
            {
                node->nilai = nilai;
                return;
            }
        }
        table[hash_val].push_back(new HashNode(NIM, nilai));
        cout << "Data berhasil ditambahkan!" << endl;
    }
    
    void remove(string NIM)
    {
        int hash_val = hashFunc(NIM);
        for (auto it = table[hash_val].begin(); it !=
                                                table[hash_val].end();
             it++)
        {
            if ((*it)->NIM == NIM)
            {
                table[hash_val].erase(it);
                cout << "Data berhasil dihapus!\n";
                return;
            }
        }
    }
    
    string searchByNim(string NIM)
    {
        int hash_val = hashFunc(NIM);
        for (auto &node : table[hash_val])
        {
            if (node->NIM == NIM)
            {
                string nilai = to_string(node->nilai);
                cout << "Data di temukan : \n"
                     << "NIM : " << NIM << endl
                     << "Nilai : " << nilai << endl;
                return nilai;
            }
        }
        cout << "Data anda dengan NIM " << NIM << " tidak ditemukan." << endl;
        return "";
    }
    
    void searchByrangeNim()
    {
        cout << "Data rentang nilai antara 80-90:\n";
        for (int i = 0; i < TABLE_SIZE; i++)
        {
            for (auto node : table[i])
            {
                int nilai = node->nilai;
                if (nilai >= 80 && nilai <= 90)
                {
                    cout << "NIM : " << node->NIM << endl
                         << "Nilai : " << node->nilai << endl;
                }
            }
        }
    }
   
    void print()
    {
        cout << "Tampilan Data :" << endl;
        for (int i = 0; i < TABLE_SIZE; i++)
        {
            cout << i << ": ";
            for (auto pair : table[i])
            {
                if (pair != nullptr)
                {
                    cout << "[" << pair->NIM << ", " << pair->nilai << "] ";
                }
            }
            cout << endl;
        }
    }
};

int main()
{
    HashMap employee_map;
loop_menu:
    cout << "Pilihan Menu: \n";
    cout << "1. Menambah Data\n";
    cout << "2. Menghapus Data\n";
    cout << "3. Mencari Data berdasarkan NIM\n";
    cout << "4. Mencari Data berdasarkan Nilai 80 - 90\n";
    cout << "5. Menampilkan Data\n";
    cout << "6. Keluar\n";
    cout << "Input Pilihan Anda : ";

    int pilih, nilai;
    string nim;
    cin >> pilih;

    switch (pilih)
    {
    case 1:
        int x;
        cout << "Jumlah yang ingin ditambahkan : ";
        cin >> x;
        for (int i = 1; i <= x; i++)
        {
            cout << "Menambah data ke-" << i << endl;
            cout << "Input NIM : ";
            cin >> nim;
            cout << "Input Nilai : ";
            cin >> nilai;
            employee_map.insert(nim, nilai);
        }
        goto loop_menu;
        break;
    case 2:
        cout << "Menghapus data\n";
        cout << "Input NIM : ";
        cin >> nim;
        employee_map.remove(nim);
        goto loop_menu;
        break;
    case 3:
        cout << "Mencari Data berdasarkan NIM \n";
        cout << "Input NIM : ";
        cin >> nim;
        employee_map.searchByNim(nim);
        goto loop_menu;
        break;
    case 4:
        employee_map.searchByrangeNim();
        goto loop_menu;
        break;
    case 5:
        employee_map.print();
        goto loop_menu;
        break;
    case 6:
        cout << "Keluar\n";
        return 0;
    default:
    {
        goto loop_menu;
    }
    }
    return 0;
}

// Khulika Malkan
// 2311110057
```
#### Full Code Screenshot
![image](https://github.com/Malkankhulika/Modul-9/assets/149793653/2c76f5d6-0a1a-486d-b115-ba90965e8adb)


#### Output:
- menambahkan data
  
![image](https://github.com/Malkankhulika/Modul-9/assets/149793653/db8bb1ed-2247-4423-9396-beca2a4f6435)



- menghapus data & mencari data berdasarkan NIM
  
  ![image](https://github.com/Malkankhulika/Modul-9/assets/149793653/127ad69e-bcce-49dc-a60c-b3026f5a5f7e)



- mencari data berdasarkan NIM 80-90
- 
  ![image](https://github.com/Malkankhulika/Modul-9/assets/149793653/cc4532cc-4dd3-4288-9b2d-2856e0aafc63)



- Menampilkan data
  
![image](https://github.com/Malkankhulika/Modul-9/assets/149793653/c2f9d31f-1746-4529-afc5-84ab5bf7c58b)



- selesai (keluar)
  
  ![image](https://github.com/Malkankhulika/Modul-9/assets/149793653/6638f896-6027-4e89-b908-7ea3b61a167c)

#### Penjelasan:
Program diatas menggunakan hash table untuk menyimpan data mahasiswa dengan menggunakan NIM. Fungsi hash digunakan untuk menghitung indeks dalam hash table berdasarkan NIM. Fungsi insert digunakan untuk menambahkan data mahasiswa ke hash table. Fungsi remove untuk menghapus data mahasiswa dari hash table berdasarkan NIM. Fungsi searchByNim digunakan untuk mencari data mahasiswa dari hash table berdasarkan NIM. Fungsi searchByRange digunakan untuk mencari data mahasiswa dari hash table berdasarkan rentang nilai.
Program juga memiliki menu pilihan untuk memudahkan pengguna dalam mengakses fungsi-fungsi tersebut. Pengguna dapat memilih untuk menambahkan data mahasiswa baru, menghapus data mahasiswa, mencari data mahasiswa berdasarkan NIM, atau mencari data mahasiswa berdasarkan rentang nilai.


## Kesimpulan
Rekursif merupakan alat untuk memecahkan masalah dalam suatu fungsi atau procedure yang memanggil dirinya sendiri. Secara teori semua masalah yang dapat dipecahkan dengan rekursif dapat dipecahkan dengan tanpa rekursif. Meskipun dalam kenyataa ini, rekursif sangat bermanfaat sebab beberapa masalah mempunyai solusi yang sulit tanpa menggunakan rekursif. Penggunaan rekursif kadang-kadang harus mengorbankan efisiensi dan kecepatan, disamping itu ada masalah yang sering muncul dalam rekursif, yaitu eksekusi yang tidak pernah berhenti, akibatnya memori tumpukan akan habis dan computer hank. Pada dasarnya rekursif sering digunakan dalam perhitungan matematika, sebagai contoh pertimbangan fungsi factorial dan juga bilangan Fibonacci.


Hash table pada C++ adalah struktur data yang digunakan untuk menyimpan data dalam bentuk key-value pairs dengan menggunakan fungsi hash untuk menghitung nilai indeks dari setiap key. Dalam hash table, program dapat melakukan pencarian dan manipulasi data dengan sangat efisien. Untuk menangani collision, hash table menggunakan linked list. Fungsi-fungsi yang tersedia dalam hash table antara lain menambahkan data baru, menghapus data, dan mencari data berdasarkan NIM atau rentang nilai.

## Referensi
[1]	Rohmah, M. F., & Cahyono, R. E. (2022). Teori dan Aplikasi Algoritma Pemrograman dengan Bahasa C dan C++. Penerbit NEM.

[2]	https://yuliana.lecturer.pens.ac.id/Struktur%20Data/PRAKTIKUM%202015/Praktikum%207%20-%20Rekursif%201.pdf

[3] 	https://elektro.um.ac.id/wp-content/uploads/2016/04/Struktur-Data-Modul-Praktikum-11-Hashing-Table.pdf
