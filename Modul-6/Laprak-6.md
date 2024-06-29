# <h1 align="center">Laporan Praktikum Modul Single and Double Linked List</h1>
<p align="center">Khulika Malkan</p>
<p align="center">2311110057</p>

## Dasar Teori
Salah satu bentuk struktur data yang berisi kumpulan data yang tersusun secara sekuensial, saling bersambungan, dinamis dan terbatas adalah senarai berkait (linked list). Suatu senarai berkait (linked list) adalah suatu simpul (node) yang dikaitkan dengan simpul yang lain dalam suatu urutan tertentu. Suatu simpul dapat berbentuk suatu struktur atau class. Simpul harus mempunyai satu atau lebih elemen struktur atau class yang berisi data. 


Secara teori, linked list adalah sejumlah node yang dihubungkan secara linier dengan bantuan pointer. Senarai berkait lebih efisien di dalam melaksanakan penyisipan-penyisipan dan penghapusan-penghapusan. Senarai berkait juga menggunakan alokasi penyimpanan secara dinamis, yang merupakan penyimpanan yang dialokasikan pada runtime [1].

### Operasi-operasi Linked List
- Insert : Istilah Insert berarti menambahkan sebuah simpul baru ke dalam suatu linked list.
- IsEmpty : Fungsi ini menentukan apakah linked list kosong atau tidak.
- Find First : Fungsi ini mencari elemen pertama dari linked list.
- Find Next : Fungsi ini mencari elemen sesudah elemen yang ditunjuk now.
- Retrieve : Fungsi ini mengambil elemen yang ditunjuk oleh now. Elemen tersebut lalu dikembalikan oleh fungsi.
- Update : Fungsi ini mengubah elemen yang ditunjuk oleh now dengan isi dari sesuatu.
- Delete Now : Fungsi ini menghapus elemen yang ditunjuk oleh now. Jika yang dihapus adalah elemen pertama dari linked list (head), head akan berpindah ke elemen berikutnya.
- Delete Head : Fungsi ini menghapus elemen yang ditunjuk head. Head berpindah ke elemen sesudahnya.
- Clear : Fungsi ini menghapus linked list yang sudah ada. Fungsi ini wajib dilakukan bila anda ingin mengakhiri program yang menggunakan linked list. Jika anda melakukannya, data-data yang dialokasikan ke memori pada program sebelumnya akan tetap tertinggal di dalam memori [1].

### Single Linked List
Apabila setiap Anda ingin menambahkan data, Anda selalu menggunakan variabel pointer yang baru, Anda akan membutuhkan banyak sekali pointer. Oleh karena itu, ada baiknya jika Anda hanya menggunakan satu variabel pointer saja untuk menyimpan banyak data dengan metode yang kita sebut Linked List. Jika diterjemahkan, ini berarti satu daftar isi yang saling berhubungan [2].

- Single Linked List non Circular : Pembuatan struct bernama tnode berisi 2 field, yaitu field data bertipe integer dan field next yang bertipe pointer dari tnode
- Single Linked List Circular : Hampir sama dengan single linked list non circular, bahwa dibutuhkan sebuah kait untuk menghubungkan node-node data yang ada, dimana pada node terakhir atau tail yang semula menunjukkan NULL 
diganti dengan menunjuk ke kepala atau head [1].
#### Last In First Out
Lifo adalah suatu metode pembuatan Linked List di mana data yang masuk paling akhir adalah data yang keluar paling awal. Hal ini dapat di analogikan (dalam kehidupan seharihari) dengan saat Anda menumpuk barang seperti digambarkan dibawah ini. Pembuatan sebuah simpul dalam suatu linked list seperti digambarkan dibawah ii, disebutkan istilah INSERT, Jika linked list dibuat dengan metode LIFO, terjadi penambahan / Insert simpul di belakang [2].
#### First In First Out
FIFO adalah suatu metode pembuatan Linked List di mana data yang masuk paling awal adalah data yang keluar paling awal juga. Hal ini dapat di analogikan (dalam kehidupan sehari-hari), misalnya saat sekelompok orang yang datang (ENQUEUE) mengantri hendak membeli tiket di loket. Jika linked list dibuat dengan metode FIFO, terjadi penambahan / Insert simpul didepan [2].


### Double Linked List
Salah satu kelemahan single linked list adalah pointer (penunjuk) hanya dapat bergerak satu arah saja, maju/ mundur, atau kanan/kiri sehingga pencarian data pada single linked list hanya dapat bergerak dalam satu arah saja. Untuk mengatasi kelemahan
tersebut, anda dapat menggunakan metode double linked list. Linked list ini dikenal dengan nama Linked list berpointer Ganda atau Double Linked List [2].

#### Double Linked List non Circular 
Setiap node pada linked list mempunyai field yang berisi data dan pointer ke node berikutnya dan ke node sebelumnya. Untuk pembentukan node baru, mulanya pointer next dan prev akan menunjuk ke nilai NULL. 
Selanjutnya, pointer prev akan menunjuk ke node sebelumnya, dan pointer next akan menunjuk ke node selanjutnya pada list [1].
#### Double Linked List Circular 
Double Linked List Circular (DLLC) adalah linked list dengan menggunakan pointer, dimana setiap node memiliki 3 field, yaitu 1 field pointer yang menunjuk pointer berikutnya (next), 1 field menunjuk pointer sebelumnya (prev), serta sebuah field yang berisi data untuk node tersebut dengan pointer next dan pre-nya menunjuk ke dirinya sendiri secara circular [1].

## Guided
### 1. Latihan Single Linked List.
#### Kode Program
```C++
#include <iostream>
using namespace std;

///PROGRAM SINGLE LINKED LIST NON-CIRCULAR
//Deklarasi Struct Node
struct Node{
    //komponen/member
    int data;
    Node *next;
};
    Node *head;
    Node *tail;
//Inisialisasi Node
void init(){
    head = NULL;
    tail = NULL;
}
// Pengecekan
bool isEmpty(){
    if (head == NULL)
    return true;
    else
    return false;
}
//Tambah Depan
void insertDepan(int nilai){
    //Buat Node baru
    Node *baru = new Node;
    baru->data = nilai;
    baru->next = NULL;
    if (isEmpty() == true){
        head = tail = baru;
        tail->next = NULL;
    }
    else{
        baru->next = head;
        head = baru;
    }
}
//Tambah Belakang
void insertBelakang(int nilai){
    //Buat Node baru
    Node *baru = new Node;
    baru->data = nilai;
    baru->next = NULL;
    if (isEmpty() == true){
        head = tail = baru;
        tail->next = NULL;
    }
    else{
    tail->next = baru;
    tail = baru;
    }
}
//Hitung Jumlah List
int hitungList(){
    Node *hitung;
    hitung = head;
    int jumlah = 0;
    while( hitung != NULL ){
        jumlah++;
        hitung = hitung->next;
    }
    return jumlah;
}
//Tambah Tengah
void insertTengah(int data, int posisi){
    if( posisi < 1 || posisi > hitungList() ){
        cout << "Posisi diluar jangkauan" << endl;
    }
    else if( posisi == 1){
        cout << "Posisi bukan posisi tengah" << endl;
    }
    else{
        Node *baru, *bantu;
        baru = new Node();
        baru->data = data;
        // tranversing
            bantu = head;
            int nomor = 1;
        while( nomor < posisi - 1 ){
            bantu = bantu->next;
            nomor++;
        }
        baru->next = bantu->next;
        bantu->next = baru;
    }
}
//Hapus Depan
void hapusDepan() {
    Node *hapus;
    if (isEmpty() == false){
        if (head->next != NULL){
            hapus = head;
            head = head->next;
            delete hapus;
        }
        else{
            head = tail = NULL;
        }
    }
    else{
        cout << "List kosong!" << endl;
    }
}
//Hapus Belakang
void hapusBelakang() {
    Node *hapus;
    Node *bantu;
    if (isEmpty() == false){
        if (head != tail){
            hapus = tail;
            bantu = head;
            while (bantu->next != tail){
                bantu = bantu->next;
            }
            tail = bantu;
            tail->next = NULL;
        delete hapus;
        }
        else{
            head = tail = NULL;
        }
    }
    else{
        cout << "List kosong!" << endl;
    }
}
//Hapus Tengah
void hapusTengah(int posisi){
    Node *hapus, *bantu, *bantu2;
    if( posisi < 1 || posisi > hitungList() ){
        cout << "Posisi di luar jangkauan" << endl;
    }
    else if( posisi == 1){
        cout << "Posisi bukan posisi tengah" << endl;
    }
    else{
        int nomor = 1;
        bantu = head;
        while( nomor <= posisi ){
            if( nomor == posisi-1 ){
                bantu2 = bantu;
            }
            if( nomor == posisi ){
                hapus = bantu;
            }
            bantu = bantu->next;
            nomor++;
        }
        bantu2->next = bantu;
    delete hapus;
    }
}
//Ubah Depan
void ubahDepan(int data){
    if (isEmpty() == false){
        head->data = data;
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}
//Ubah Tengah
void ubahTengah(int data, int posisi){
    Node *bantu;
    if (isEmpty() == false){
        if( posisi < 1 || posisi > hitungList() ){
            cout << "Posisi di luar jangkauan" << endl;
        }
        else if( posisi == 1){
            cout << "Posisi bukan posisi tengah" << endl;
        }
        else{
            bantu = head;
            int nomor = 1;
            while (nomor < posisi){
                bantu = bantu->next;nomor++;
            }
            bantu->data = data;
        }
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}
//Ubah Belakang
void ubahBelakang(int data){
    if (isEmpty() == false){
        tail->data = data;
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}
//Hapus List
void clearList(){
    Node *bantu, *hapus;
    bantu = head;
    while (bantu != NULL){
        hapus = bantu;
        bantu = bantu->next;
        delete hapus;
    }
    head = tail = NULL;
    cout << "List berhasil terhapus!" << endl;
}
//Tampilkan List
void tampil(){
    Node *bantu;
    bantu = head;
    if (isEmpty() == false){
        while (bantu != NULL){
            cout << bantu->data << ends;
            bantu = bantu->next;
        }
        cout << endl;
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}
int main(){
    init();
    insertDepan(3);
    tampil();
    insertBelakang(5);
    tampil();
    insertDepan(2);
    tampil();
    insertDepan(1);
    tampil();
    hapusDepan();
    tampil();
    hapusBelakang();
    tampil();
    insertTengah(7,2);
    tampil();
    hapusTengah(2);
    tampil();
    ubahDepan(1);
    tampil();
    ubahBelakang(8);
    tampil();
    ubahTengah(11, 2);
    tampil();

    insertTengah(7,1);
    tampil();
    return 0;
}
    // Nama : Khulika Malkan
	// NIM 	: 2311110057
```
#### Full Code Screenshot
![image](https://github.com/Malkankhulika/Modul-6/assets/149793653/6d77c633-3a2f-48bf-9766-8c57a4d18ee9)


#### Output
![image](https://github.com/Malkankhulika/Modul-6/assets/149793653/19936a05-5992-45e3-b3b7-6dee4fc03f04)


#### Penjelasan
Kode C++ di atas merupakan implementasi program Single Linked List Non-Circular. Struktur data ini terdiri dari node-node yang terhubung secara berantai dengan pointer next. Struktur data ini dapat digunakan untuk merepresentasikan kumpulan data terurut, seperti daftar kontak atau daftar pembelian. Fungsi-fungsi yang disediakan memungkinkan operasi dasar seperti menambah, menghapus, mengubah, dan menampilkan data pada list. Kode ini dilengkapi dengan contoh penggunaan untuk mendemonstrasikan fungsionalitasnya.


### 2. Latihan Double Linked List.
#### Kode Program
```C++
#include <iostream>
using namespace std;

class Node {
    public:int data;
    Node* prev;
    Node* next;
};
class DoublyLinkedList {
        public:
        Node* head;
        Node* tail;
        DoublyLinkedList() {
            head = nullptr;
            tail = nullptr;
    }
    void push(int data) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->prev = nullptr;
        newNode->next = head;
        if (head != nullptr) {
            head->prev = newNode;
        } 
        else {
            tail = newNode;
        }
        head = newNode;
    }
    void pop() {
        if (head == nullptr) {
            return;
        }
        Node* temp = head;
        head = head->next;
        if (head != nullptr) {
            head->prev = nullptr;
        } 
        else {
            tail = nullptr;
        }
        delete temp;
    }
    bool update(int oldData, int newData) {
        Node* current = head;
        while (current != nullptr) {
            if (current->data == oldData) {
                current->data = newData;
                return true;
            }
            current = current->next;
        }
        return false;
    }
    void deleteAll() {
        Node* current = head;
        while (current != nullptr) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
        head = nullptr;
        tail = nullptr;
    }
    void display() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};


int main() {
    DoublyLinkedList list;
    while (true) {
        cout << "1. Add data" << endl;
        cout << "2. Delete data" << endl;
        cout << "3. Update data" << endl;
        cout << "4. Clear data" << endl;
        cout << "5. Display data" << endl;
        cout << "6. Exit" << endl;int choice;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                int data;
                cout << "Enter data to add: ";
                cin >> data;
                list.push(data);
                break;
            }
            case 2: {
                list.pop();
                break;
            }
            case 3: {
                int oldData, newData;
                cout << "Enter old data: ";
                cin >> oldData;
                cout << "Enter new data: ";
                cin >> newData;
                bool updated = list.update(oldData, newData);
                if (!updated) {
                    cout << "Data not found" << endl;
                }
                break;
            }
            case 4: {
                list.deleteAll();
                break;
            }
            case 5: {
                list.display();
                break;
            }
            case 6: {
                return 0;
            }
            default: {
                cout << "Invalid choice" << endl;
                break;
            }
        }
    }
    return 0;
}
    // Nama : Khulika Malkan
	// NIM 	: 2311110057
```
#### Full Code Screenshot
![image](https://github.com/Malkankhulika/Modul-6/assets/149793653/a1107ec5-6ccb-4168-b6f2-e121e25eea32)


#### Output
![image](https://github.com/Malkankhulika/Modul-6/assets/149793653/f74ee9e3-e949-4ecb-896f-b52703215f97)

![image](https://github.com/Malkankhulika/Modul-6/assets/149793653/98bf293b-1b07-477f-ad65-78fb841f35cc)

![image](https://github.com/Malkankhulika/Modul-6/assets/149793653/06dde28f-e86a-460a-a0be-1918f5285d38)


#### Penjelasan
Kode C++ ini mengimplementasikan struktur data bernama Double Linked List.  Dengan Double Linked List, Anda dapat mengatur daftar item data di mana setiap item dapat diakses dengan maju atau mundur di dalam daftar. Kode ini mendefinisikan kelas Node yang menyimpan data itu sendiri dan pointer ke node sebelumnya dan selanjutnya di dalam daftar. Kelas DoublyLinkedList mengelola kumpulan node ini dengan pointer head dan tail. 
Kode ini menyediakan fungsi untuk:
- Menambahkan (push) item baru ke awal daftar.
- Menghapus (pop) item terdepan dari daftar.
- Memperbarui (update) nilai item yang ada berdasarkan nilai lamanya.
- Menghapus (deleteAll) semua item dari daftar.
- Menampilkan (display) isi daftar dengan iterasi melalui setiap node.
Fungsi main menyediakan antarmuka berbasis menu di mana Anda dapat memilih untuk menambah, menghapus, memperbarui, menghapus, atau menampilkan data dalam daftar.  Ini mendemonstrasikan bagaimana menggunakan fungsi-fungsi yang disediakan dari Doubly Linked List.

Jadi secara keseluruhan program di atas merupakan sebuah program implementasi dari Doubly Linked List dalam bahasa pemrograman C++.Doubly Linked List merupakan suatu struktur data linier yang terdiri dari sejumlah node yang saling terhubungdengan pointer satu dengan lainnya,dimana setiap node menyimpan suatu data yaitu data integer.
Program tersebut merupakan implementasi operasi dasar pada Doubly LinkedList,menambahkandata(push),menghapusdata(pop),mengupdate data(update),menghapus semua data(deleteAll),dan menampilkan data(display),seta memiliki sebuah menu untuk memilih operasi yang akan dijalankan.


## Unguided 
### 1. Soal mengenai Single Linked List. Buatlah program menu Single Linked List Non-Circular untuk menyimpan Nama dan usia mahasiswa, dengan menggunakan inputan dari user. Lakukan operasi berikut:
- Masukkan data sesuai urutan berikut. (Gunakan insert depan, belakang atau tengah).Data pertama yang dimasukkan adalah nama dan usia anda.

![image](https://github.com/Malkankhulika/Modul-6/assets/149793653/265e560f-b2bf-4e48-a4a7-2e82675f9a77)

- Hapus data Akechi
- Tambahkan data berikut diantara John dan Jane : Futaba	18
- Tambahkan data berikut diawal : Igor	20
- Ubah data Michael menjadi : Reyn	18
- Tampilkan seluruh data
#### Kode Program
```C++
 #include <iostream>
using namespace std;

// deklarasi struct node
struct Node {
    string nama;
    int usia;
    Node* next;
};

// deklarasi head node
Node* head = NULL;

// fungsi untuk menambahkan node di awal
void tambahDiAwal(string nama, int usia) {
    Node* newNode = new Node;
    newNode->nama = nama;
    newNode->usia = usia;
    newNode->next = head;
    head = newNode;
}

// fungsi untuk menambahkan node di akhir
void tambahDiAkhir(string nama, int usia) {
    Node* newNode = new Node;
    newNode->nama = nama;
    newNode->usia = usia;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* curr = head;
    while (curr->next != NULL) {
        curr = curr->next;
    }
    curr->next = newNode;
}

// fungsi untuk menambahkan node di tengah
void tambahDiTengah(string nama, int usia, int pos) {
    Node* newNode = new Node;
    newNode->nama = nama;
    newNode->usia = usia;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* curr = head;
    int i = 1;
    while (i < pos-1 && curr->next != NULL) {
        curr = curr->next;
        i++;
    }
    newNode->next = curr->next;
    curr->next = newNode;
}

// fungsi untuk menghapus node dengan nama tertentu
void hapus(string nama) {
    Node* curr = head;
    Node* prev = NULL;

    while (curr != NULL && curr->nama != nama) {
        prev = curr;
        curr = curr->next;
    }

    if (curr == NULL) {
        cout << "Data tidak ditemukan" << endl;
        return;
    }

    if (prev == NULL) {
        head = curr->next;
    } else {
        prev->next = curr->next;
    }

    delete curr;
}

// fungsi untuk mengubah data node dengan nama tertentu
void ubah(string nama, string newNama, int newUsia) {
    Node* curr = head;

    while (curr != NULL && curr->nama != nama) {
        curr = curr->next;
    }

    if (curr == NULL) {
        cout << "Data tidak ditemukan" << endl;
        return;
    }

    curr->nama = newNama;
    curr->usia = newUsia;
}

// fungsi untuk menampilkan semua data
void tampilkan() {
    if (head == NULL) {
        cout << "List kosong" << endl;
        return;
    }

    Node* curr = head;

    while (curr != NULL) {
        cout << curr->nama << " " << curr->usia << endl;
        curr = curr->next;
    }
}

int main() {
    // memasukkan data pertama (nama dan usia anda)
    string namaAnda;
    int usiaAnda;
    cout << "Masukkan nama anda: ";
    cin >> namaAnda;
    cout << "Masukkan usia anda: ";
    cin >> usiaAnda;
    tambahDiAwal(namaAnda, usiaAnda);
    // memasukkan data lainnya
tambahDiAkhir("John", 19);
tambahDiAkhir("Jane", 20);
tambahDiAkhir("Michael", 18);
tambahDiAkhir("Yusuke", 19);
tambahDiAkhir("Akechi", 20);
tambahDiAkhir("Hoshino", 18);
tambahDiAkhir("Karin", 18);

// menampilkan semua data
cout << "Data awal:" << endl;
tampilkan();

// menghapus data Akechi
hapus("Akechi");
cout << endl << "Setelah menghapus Akechi: " << endl;
tampilkan();

// menambahkan data Futaba di antara Carol dan Ann
tambahDiTengah("Futaba", 18, 3);
cout << endl << "Setelah menambahkan Futaba di antara John dan Jane: " << endl;
tampilkan();

// menambahkan data Igor di awal
tambahDiAwal("Igor", 20);
cout << endl << "Setelah menambahkan Igor di awal: " << endl;
tampilkan();

// mengubah data Carol menjadi Reyn
ubah("Michael", "Reyn", 18);
cout << endl << "Setelah mengubah Michael menjadi Reyn: " << endl;
tampilkan();

// menampilkan semua data setelah perubahan
cout << endl << "Data setelah perubahan:" << endl;
tampilkan();

return 0;
}

// Khulika Malkan
// 2311110057
```
#### Full Code Screenshot
![image](https://github.com/Malkankhulika/Modul-6/assets/149793653/0d0d5482-ae22-4097-8874-a9df32a9cd4a)

#### Output:
![image](https://github.com/Malkankhulika/Modul-6/assets/149793653/15948517-0101-4669-b144-07d94bb604d5)

![image](https://github.com/Malkankhulika/Modul-6/assets/149793653/2ca4b56e-f86d-4ae0-9fc1-5bc5ea01e13e)

#### Penjelasan:
Kode C++ di atas mengimplementasikan struktur data Daftar Tertaut Sederhana (Single Linked List) untuk menyimpan informasi orang. Daftar ini memungkinkan Anda untuk menambah, menghapus, mengubah, dan menampilkan data orang dengan nama dan usia mereka.

Struktur Data:
- Node: Struktur dasar untuk menyimpan data individu dalam daftar.
- nama: Menyimpan nama orang.
- usia: Menyimpan usia orang.
- next: Pointer yang menunjuk ke node berikutnya dalam daftar.
- head: Pointer yang menunjuk ke node pertama dalam daftar.

Fungsi:
- tambahDiAwal(string nama, int usia): Menambahkan node baru dengan nama dan usia yang diberikan di awal daftar.
- tambahDiAkhir(string nama, int usia): Menambahkan node baru dengan nama dan usia yang diberikan di akhir daftar.
- tambahDiTengah(string nama, int usia, int pos): Menambahkan node baru dengan nama dan usia yang diberikan di posisi pos dalam daftar.
- hapus(string nama): Menghapus node dengan nama yang diberikan dari daftar.
- ubah(string nama, string newNama, int newUsia): Mengubah nama dan usia node dengan nama yang diberikan.
- tampilkan(): Menampilkan nama dan usia semua node dalam daftar.

Jadi program ini merupakan implementasi dari linked list dengan menggunakan bahasa pemrograman C++. Linked list adalah sebuah struktur data dinamis yang terdiri dari sejumlah node yang dihubungkan satu sama lain melalui pointer. Setiap node pada linked list terdiri dari dua komponen utama, yaitu data dan pointer ke node selanjutnya. Pada program ini, terdapat sebuah struct bernama Node yang memiliki tiga atribut yaitu name, age, dan next. Atribut name dan age menyimpan data nama dan usia, sedangkan atribut next menyimpan pointer ke node selanjutnya.


### 2. Soal mengenai Double Linked List. Modifikasi Guided Double Linked List dilakukan dengan penambahan operasi untuk menambah data, menghapus, dan update di tengah / di urutan tertentu yang diminta. Selain itu, buatlah agar tampilannya menampilkan Nama produk dan harga.

![image](https://github.com/Malkankhulika/Modul-6/assets/149793653/3373821e-6197-4acc-b406-e5c20c287223)

Case:
- Tambahkan produk Azarine dengan harga 65000 diantara Somethinc dan Skintific
- Hapus produk wardah
- Update produk Hanasui menjadi Cleora dengan harga 55.000
- Tampilkan menu seperti dibawah ini Toko Skincare Purwokerto
		1.	Tambah Data
		2.	Hapus Data
  		3.	Update Data
		4.	Tambah Data Urutan Tertentu
		5.	Hapus Data Urutan Tertentu
		6.	Hapus Seluruh Data
		7.	Tampilkan Data
		8.	Exit
Pada menu 7, tampilan akhirnya akan menjadi seperti dibawah ini :


![image](https://github.com/Malkankhulika/Modul-6/assets/149793653/912fe6a9-a602-4031-9835-2750d3f3384a)


#### Kode Program
```c++
#include <iostream>
#include <iomanip>

using namespace std;

struct Node {
    string nama_produk;
    int harga;
    Node* prev;
    Node* next;
};

class LinkedList {
private:
    Node* head;
    Node* tail;
public:
    LinkedList() {
        head = NULL;
        tail = NULL;
    }
    void tambahData(string nama_produk, int harga) {
        Node* newNode = new Node;
        newNode->nama_produk = nama_produk;
        newNode->harga = harga;
        newNode->prev = NULL;
        newNode->next = NULL;
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        }
        else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }
    void hapusData(string nama_produk) {
        Node* currentNode = head;
        while (currentNode != NULL) {
            if (currentNode->nama_produk == nama_produk) {
                if (currentNode == head) {
                    head = head->next;
                    head->prev = NULL;
                }
                else if (currentNode == tail) {
                    tail = tail->prev;
                    tail->next = NULL;
                }
                else {
                    currentNode->prev->next = currentNode->next;
                    currentNode->next->prev = currentNode->prev;
                }
                delete currentNode;
                break;
            }
            currentNode = currentNode->next;
        }
    }
    void updateData(string nama_produk, string new_nama_produk, int new_harga) {
        Node* currentNode = head;
        while (currentNode != NULL) {
            if (currentNode->nama_produk == nama_produk) {
                currentNode->nama_produk = new_nama_produk;
                currentNode->harga = new_harga;
                break;
            }
            currentNode = currentNode->next;
        }
    }
    void tambahDataUrutan(string nama_produk, int harga, int urutan) {
        Node* newNode = new Node;
        newNode->nama_produk = nama_produk;
        newNode->harga = harga;
        newNode->prev = NULL;
        newNode->next = NULL;
        if (urutan == 1) {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
        else {
            Node* currentNode = head;
            int i = 1;
            while (i < urutan - 1) {
                currentNode = currentNode->next;
                i++;
            }
            newNode->prev = currentNode;
            newNode->next = currentNode->next;
            currentNode->next->prev = newNode;
            currentNode->next = newNode;
        }
    }
    void hapusDataUrutan(int urutan) {
        if (urutan == 1) {
            head = head->next;
            head->prev = NULL;
        }
        else {
            Node* currentNode = head;
            int i = 1;
            while (i < urutan) {
                currentNode = currentNode->next;
                i++;
            }
            if (currentNode == tail) {
                tail = tail->prev;
                tail->next = NULL;
            }
            else {
                currentNode->prev->next = currentNode->next;
                currentNode->next->prev = currentNode->prev;
            }
        }
    }
    void hapusSeluruhData() {
        while (head != NULL) {
            Node* currentNode = head;
            head = head->next;
            delete currentNode;
        }
        tail = NULL;
    } // <-- add closing bracket here


    void tampilkanData() {
        Node* currentNode = head;
        cout << setw(15) <<left<< "Nama Produk" << setw(10)<<"Harga"<< endl;
        while (currentNode != NULL) {
            cout <<  setw(15) << left <<  currentNode->nama_produk << setw(10) << currentNode->harga << endl;
            currentNode = currentNode->next;
        }
    }
    void tampilkanMenu() {
        int pilihan, harga, urutan;
        string nama_produk, new_nama_produk;
        cout << "Toko Skincare Purwokerto" << endl;
        cout << "1. Tambah Data" << endl;
        cout << "2. Hapus Data" << endl;
        cout << "3. Update Data" << endl;
        cout << "4. Tambah Data Urutan Tertentu" << endl;
        cout << "5. Hapus Data Urutan Tertentu" << endl;
        cout << "6. Hapus Seluruh Data" << endl;
        cout << "7. Tampilkan Data" << endl;
        cout << "8. Exit" << endl;
        do {
            cout << "Pilih menu: ";
            cin >> pilihan;
            switch (pilihan) {
            case 1:
                cout << "Masukkan Nama Produk: ";
                cin >> nama_produk;
                cout << "Masukkan Harga: ";
                cin >> harga;
                tambahData(nama_produk, harga);
                break;
            case 2:
                cout << "Masukkan Nama Produk yang akan dihapus: ";
                cin >> nama_produk;
                hapusData(nama_produk);
                break;
            case 3:
                cout << "Masukkan Nama Produk yang akan diupdate: ";
                cin >> nama_produk;
                cout << "Masukkan Nama Produk baru: ";
                cin >> new_nama_produk;
                cout << "Masukkan Harga baru: ";
                cin >> harga;
                updateData(nama_produk, new_nama_produk, harga);
                break;
            case 4:
                cout << "Masukkan Nama Produk: ";
                cin >> nama_produk;
                cout << "Masukkan Harga: ";
                cin >> harga;
                cout << "Masukkan Urutan: ";
                cin >> urutan;
                tambahDataUrutan(nama_produk, harga, urutan);
                break;
            case 5:
                cout << "Masukkan Urutan: ";
                cin >> urutan;
                hapusDataUrutan(urutan);
                break;
            case 6:
                hapusSeluruhData();
                break;
            case 7:
                tampilkanData();
                break;
            case 8:
                cout << "Terima kasih." << endl;
                break;
            default:
                cout << "Pilihan tidak tersedia." << endl;
            }
        } while (pilihan != 8);
    }
};

int main() {
    LinkedList list;
    list.tambahData ("Originote",60000);
    list.tambahData ("Somethinc",150000);
    list.tambahData ("Skintific",100000);
    list.tambahData ("Wardah"   ,50000);
    list.tambahData ("Hanasui"  ,30000);
    list.tampilkanMenu();
    return 0;
}

// Khulika Malkan
// 2311110057
```

#### Full Code Screenshot
![image](https://github.com/Malkankhulika/Modul-6/assets/149793653/63cb85bc-ede3-4fa4-b0a2-484666be397f)


#### Output
![image](https://github.com/Malkankhulika/Modul-6/assets/149793653/fc15dc82-48de-468c-9757-2b5c04611919)

#### Penjelasan
Struktur Data Node:
- nama_produk: Menyimpan nama produk skincare.
- harga: Menyimpan harga produk skincare.
- prev: Pointer yang menunjuk ke node sebelumnya dalam list.
- next: Pointer yang menunjuk ke node berikutnya dalam list.
- Kelas LinkedList:

Mengelola keseluruhan Linked List.
- head: Pointer yang menunjuk ke node pertama dalam list.
- tail: Pointer yang menunjuk ke node terakhir dalam list.
- Fungsi-fungsi untuk menambah, menghapus, memperbarui, dan menampilkan data produk skincare.

Fungsi-fungsi:
- tambahData(string nama_produk, int harga): Menambahkan produk baru di akhir list.
- hapusData(string nama_produk): Menghapus produk tertentu berdasarkan nama.
- updateData(string nama_produk, string new_nama_produk, int new_harga): Memperbarui nama dan harga produk berdasarkan nama lama produk.
- tambahDataUrutan(string nama_produk, int harga, int urutan): Menambahkan produk baru pada urutan tertentu.
- hapusDataUrutan(int urutan): Menghapus produk berdasarkan urutan.
- hapusSeluruhData(): Menghapus semua produk dari list.
- tampilkanData(): Menampilkan semua produk beserta harganya.
- tampilkanMenu(): Menu interaktif untuk melakukan operasi pengelolaan data produk.

Jadi secara keseluruhan program ini adalah suatu program untuk menambahkan data,menghapus data,mengupdate data,dan masih banyak lagi. Program ini terdapat struct Node dan kelas LinkedList. Struktur Node mewakili sebuah node dalam daftar tertaut dan berisi nama produk, harga, dan penunjuk ke node sebelumnya dan berikutnya dalam daftar. Kelas LinkedList menyediakan sekumpulan metode untuk mengelola daftar tertaut, seperti menambahkan, memperbarui, dan menghapus node. Fungsi main() dari program menampilkan menu opsi untuk dipilih pengguna. Opsinya termasuk menambah, memperbarui, dan menghapus node, serta menampilkan data dalam daftar tertaut. Secara keseluruhan, program ini mendemonstrasikan cara menggunakan struktur data daftar tertaut ganda di C++ untuk menyimpan dan mengelola data


## Kesimpulan
Kedua jenis linked list ini yaitu Single Linked List dan Double Linked List memiliki kegunaan yang beragam tergantung pada kebutuhan dari aplikasi yang akan digunakan.Single Linked List cocok untuk aplikasi yang memerlukan operasi penambahan atau penghapusan data di akhir linked list dan tidak memerlukan navigasi mundur yang kompleks.Sedangkan Double Linked List cocok untuk aplikasi yang memerlukan navigasi maju dan mundur yang cepat,serta operasi penghapusan atau penambahan data di tengah-tengah Linked List yang simple.

Manfaat dari mempelajari single linked list dan double linked list, kita juga dapat belajar tentang konsep-konsep dasar dalam pemrograman seperti pointer, alokasi memori dinamis, traversal, insertion, deletion, dan searching. Dengan memahami konsep-konsep tersebut, kita dapat memahami dan mengimplementasikan struktur data lainnya yang lebih kompleks seperti tree dan graph.


## Referensi
[1]	T. I. Umum, “Modul 6 Single & Double Linked List,” 2016.


[2]	U. P. Jaya, “‘ Struktur Data ’ Program Studi,” 2016, [Online]. Available: https://ocw.upj.ac.id/files/Handout-TIF104-Modul-Praltikum-Struktur-Data.pdf
