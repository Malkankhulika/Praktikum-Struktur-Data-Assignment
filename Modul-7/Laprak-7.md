# <h1 align="center">Laporan Praktikum Modul Stack dan Queue</h1>
<p align="center">Khulika Malkan</p>
<p align="center">2311110057</p>

## Dasar Teori
Istilah stack dalam c++ adalah tumpukan, tumpukan sendiri dalam bahasa kita adalah pengumpulan sebuah data lalu menaruh data tersebut ke dalam data-data lain yang sudah di tata sebelumnya, metode peletakan beberapa data di atas data- data [1].
Secara mudahnya misalkan kita ingin mengambil beberapa buku yang ada di rak perpustakaan untuk dipindahkan ke rak buku lainya, lalu dalam pengambilan beberapa buku yang ada di perpustakaan tersebut, sebelum dipindahkan kita mengambil satu persatu buku dari perpustakaan lalu menatanya menjadi satu tumpukan bukan ? nah tumpukan buku tersebutlah yang dinamakan stack.


![image](https://github.com/Malkankhulika/Modul-7/assets/149793653/2a7b6ed1-f5b1-4e4b-9bd9-a628224ec9a8)

### Stack
Container stack dibuat berdasarkan deque dan tidak memiliki iterator. Container ini hanya mengijinkan penyisipan dan penghapusan elemen pada bagian atas. Member function yang dimiliki antara lain:
- empty() memberikan true jika dan hanya jika stack kosong.
- size() memberikan jumlah elemen.
- top() memberikan elemen paling atas.
- push(x) menyisipkan elemen x.
- pop() menghapus elemen.

#### Operasi pada Stack
- Ø Push : operasi untuk menambahkan stack (data tumpukan) dalam program, harus bisa menambahkan satu per satu elemen dalam program untuk bisa dijadikan data stack, otomatis menambahkan data.
- Ø Pop : operasi penghapusan elemen yang sudah ditambahkan dalam stack (tumpukan) yang kita tambahkan sebelumnya pada posisi paling atas.
- Ø Count : menghitung banyak data pada stack
- Ø Change : Mengubah posisi data ke posisi tertentu
- Ø Display : Menampilkan data pada stack.
- Ø Destroy : Menghapus atau bersihkan semua data di stack

### Queue
Queue adalah struktur data yang digunakan untuk menyimpan data dengan metode FIFO (First-In First-Out), di mana data yang pertama dimasukkan ke dalam queue akan menjadi data yang pertama pula untuk dikeluarkan dari queue. Queue mirip dengan konsep antrian pada kehidupan sehari-hari. Implementasi queue dapat dilakukan menggunakan array atau linked list. Struktur data queue terdiri dari dua pointer, yaitu front dan rear. Front adalah pointer ke elemen pertama dalam queue, sedangkan rear adalah pointer ke elemen terakhir dalam queue.



Container queue dibuat berdasarkan deque dan tidak memiliki iterator [2]. Container ini hanya mengijinkan penyisipan elemen pada bagian belakang dan penghapusan elemen pada bagian depan. Selain empty(), size(), push(x), dan pop(), member function yang dimiliki antara lain :
- front() memberikan elemen paling depan.
- back() memberikan elemen paling belakang.

#### Operasi pada Queue
Fungsi-fungsi pada queue meliputi:
- Enqueue: Menambahkan data ke dalam queue. Data baru ditambahkan setelah elemen terakhir queue.
- Dequeue: Mengeluarkan data dari queue. Elemen pertama dalam queue dihapus, dan posisi front digeser ke elemen selanjutnya.
- Peek: Mengambil data dari queue tanpa menghapusnya. Data pada elemen pertama queue dikembalikan.
- isEmpty: Mengecek apakah queue kosong atau tidak. Mengembalikan nilai true jika queue kosong, dan false jika tidak.
- isFull: Mengecek apakah queue penuh atau tidak (khusus untuk implementasi menggunakan array). Mengembalikan nilai true jika queue penuh, dan false jika tidak.
- Size: Menghitung jumlah elemen dalam queue. Mengembalikan jumlah
elemen yang ada dalam queue.

## Guided
### 1. Stuck
#### Kode Program
```C++
#include <iostream>
using namespace std;

string arrayBuku[5];
int maksimal = 5, top = 0;

bool isFull() {
    return (top == maksimal);
}

bool isEmpty() {
    return (top == 0);
}

void pushArrayBuku(string data) {
    if (isFull()) {
        cout << "Data telah penuh" << endl;
    } else {
        arrayBuku[top] = data;
        top++;
    }
}

void popArrayBuku() {
    if (isEmpty()) {
        cout << "Tidak ada data yang dihapus" << endl;
    } else {
        arrayBuku[top - 1] = "";
        top--;
    }
}

void peekArrayBuku(int posisi) {
    if (isEmpty()) {
        cout << "Tidak ada data yang bisa dilihat" << endl;
    } else {
        int index = top;
        for (int i = 1; i <= posisi; i++) {
            index--;
        }
        cout << "Posisi ke " << posisi << " adalah " << arrayBuku[index] << endl;
    }
}

int countStack() {
    return top;
}

void changeArrayBuku(int posisi, string data) {
    if (posisi > top) {
        cout << "Posisi melebihi data yang ada" << endl;
    } else {
        int index = top;
        for (int i = 1; i <= posisi; i++) {
            index--;
        }
        arrayBuku[index] = data;
    }
}

void destroyArraybuku() {
    for (int i = top; i >= 0; i--) {
        arrayBuku[i] = "";
    }
    top = 0;
}

void cetakArrayBuku() {
    if (isEmpty()) {
        cout << "Tidak ada data yang dicetak" << endl;
    } else {
        for (int i = top - 1; i >= 0; i--) {
            cout << arrayBuku[i] << endl;
        }
    }
}

int main() {
    pushArrayBuku("Kalkulus");
    pushArrayBuku("Struktur Data");
    pushArrayBuku("Matematika Diskrit");
    pushArrayBuku("Dasar Multimedia");
    pushArrayBuku("Inggris");

    cetakArrayBuku();
    cout << "\n";
    cout << "Apakah data stack penuh? " << isFull() << endl;
    cout << "Apakah data stack kosong? " << isEmpty() << endl;
    peekArrayBuku(2);
    popArrayBuku();
    cout << "Banyaknya data = " << countStack() << endl;
    changeArrayBuku(2, "Bahasa Jerman");
    cout << endl;
    cetakArrayBuku();
    cout << "\n";
    destroyArraybuku();
    cout << "Jumlah data setelah dihapus: " << top << endl;
    cetakArrayBuku();

    return 0;
}

//Khulika Malkan
//311110057
```
#### Full Code Screenshot
![image](https://github.com/Malkankhulika/Modul-7/assets/149793653/0e7975ca-3d03-44c7-9628-321f0ac9d285)


#### Output
![image](https://github.com/Malkankhulika/Modul-7/assets/149793653/dd241b8c-6f5f-4d73-bcf0-6a28be9030b9)


#### Penjelasan
Inisialisasi Data:
1. Memuatkan Pustaka:
   - Kode diawali dengan menyertakan file header iostream untuk memungkinkan operasi input/output.
   - Pernyataan using namespace std; membawa namespace library standar ke dalam cakupan, sehingga memungkinkan akses langsung ke fungsinya tanpa menggunakan awalan std::.
2. Mendefinisikan Struktur Data:
   - string arrayBuku[5];: Mendeklarasikan array bernama arrayBuku untuk menyimpan judul buku. Array ini dapat menampung hingga 5 elemen bertipe string.
   - int maksimal = 5;: Menetapkan variabel konstan maksimal untuk mengatur kapasitas maksimum array (5 dalam kasus ini).
   - int top = 0;: Meminisiasi variabel top untuk melacak posisi puncak stack saat ini, awalnya diatur ke 0.
Operasi Stack:
- isFull():
  - Memeriksa apakah stack penuh dengan membandingkan top dengan maksimal.
  - Mengembalikan true jika top sama dengan maksimal, menunjukkan stack penuh.
  - Mengembalikan false sebaliknya.
- isEmpty():
  - Memeriksa apakah stack kosong dengan membandingkan top dengan 0.
  - Mengembalikan true jika top sama dengan 0, menunjukkan stack kosong.
  - Mengembalikan false sebaliknya.
- pushArrayBuku(string data):Menambahkan judul buku baru (data) ke puncak stack.
  - Memeriksa apakah stack penuh menggunakan isFull().
  - Jika stack penuh, program menampilkan pesan "Data telah penuh".
  - Jika stack tidak penuh, program menambahkan judul buku ke elemen arrayBuku pada indeks top, kemudian menambah top sebesar 1.
- popArrayBuku():
  - Menghapus judul buku teratas dari stack.
  - Memeriksa apakah stack kosong menggunakan isEmpty().
  - Jika stack kosong, program menampilkan pesan "Tidak ada data yang dihapus".
  - Jika stack tidak kosong, program menghapus judul buku dari elemen arrayBuku pada indeks top-1, kemudian mengurangi top sebesar 1.
- peekArrayBuku(int posisi):
  - Menampilkan judul buku pada posisi (posisi) tertentu di stack.
  - Memeriksa apakah stack kosong menggunakan isEmpty().
  - Jika stack kosong, program menampilkan pesan "Tidak ada data yang bisa dilihat".
  - Jika stack tidak kosong, program menghitung indeks aktual berdasarkan posisi dan top, kemudian mengambil dan menampilkan judul buku dari elemen arrayBuku yang sesuai.
- countStack():
  - Mengembalikan jumlah buku saat ini (ukuran stack).
  - Mengembalikan nilai top, yang mewakili jumlah elemen di stack.
- changeArrayBuku(int posisi, string data):
  - Mengubah judul buku pada posisi (posisi) tertentu dengan data baru.
  - Memeriksa apakah posisi (posisi) lebih besar dari top, menunjukkan posisi yang tidak valid di luar batas stack.
  - Jika posisinya valid, program menghitung indeks aktual berdasarkan posisi dan top, kemudian mengubah elemen arrayBuku yang sesuai dengan data baru.
- destroyArraybuku():
  - Mengosongkan stack dengan menghapus semua judul buku dan menyetel ulang top ke 0.
  - Melakukan iterasi melalui array arrayBuku dari top ke 0, menyetel setiap elemen menjadi string kosong ("").
  - Menyetel ulang variabel top ke 0, menunjukkan stack sekarang kosong.
- cetakArrayBuku():
  - Mencetak seluruh isi stack.
  - Memeriksa apakah stack kosong menggunakan isEmpty().
  - Jika stack kosong, program menampilkan pesan "Tidak ada data yang dicetak".
  - Jika stack tidak kosong, program melakukan iterasi melalui array arrayBuku dari top-1 ke 0, mencetak setiap judul buku jika bukan string kosong.

### 2. Queue
#### Kode Program
```C++
#include <iostream>
using namespace std;

const int maksimalQueue = 5; // Maksimal antrian
int front = 0; // Penanda depan antrian
int back = 0; // Penanda belakang antrian
string queueTeller[5]; // Array untuk menyimpan antrian

bool isFull() { // Pengecekan antrian penuh atau tidak
    if (back == maksimalQueue) {
        return true; // =1
    } else {
        return false;
    }
}

bool isEmpty() { // Antrian kosong atau tidak
    if (back == 0) {
        return true;
    } else {
        return false;
    }
}

void enqueueAntrian(string data) { // Menambahkan antrian
    if (isFull()) {
        cout << "Antrian penuh" << endl;
    } else {
        if (isEmpty()) { // Jika antrian kosong
            queueTeller[0] = data;
            front++;
            back++;
        } else { // Jika antrian ada isi
            queueTeller[back] = data;
            back++;
        }
    }
}

void dequeueAntrian() { // Mengurangi antrian
    if (isEmpty()) {
        cout << "Antrian kosong" << endl;
    } else {
        for (int i = 0; i < back; i++) {
            queueTeller[i] = queueTeller[i + 1];
        }
        back--;
    }
}

int countQueue() { // Menghitung jumlah antrian
    return back;
}

void clearQueue() { // Menghapus semua antrian
    if (isEmpty()) {
        cout << "Antrian kosong" << endl;
    } else {
        for (int i = 0; i < back; i++) {
            queueTeller[i] = "";
        }
        back = 0;
        front = 0;
    }
}

void viewQueue() { // Melihat isi antrian
    cout << "Data antrian teller:" << endl;
    for (int i = 0; i < maksimalQueue; i++) {
        if (queueTeller[i] != "") {
            cout << i + 1 << ". " << queueTeller[i] << endl;
        } else {
            cout << i + 1 << ". (kosong)" << endl;
        }
    }
}

int main() {
    enqueueAntrian("Andi");
    enqueueAntrian("Maya");
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    dequeueAntrian();
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    clearQueue();
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    return 0;
}

//Khulika Malkan
//311110057
```
#### Full Code Screenshot
![image](https://github.com/Malkankhulika/Modul-7/assets/149793653/4cff9fa9-b417-4068-a554-21726e9764ac)


#### Output
![image](https://github.com/Malkankhulika/Modul-7/assets/149793653/6dddd345-b568-42c1-b852-ba373abcf7d4)


#### Penjelasan
Variabel :
- maksimalQueue: Konstanta yang menentukan kapasitas maksimum antrian (5 dalam kasus ini).
- front: Variabel yang menunjukkan indeks elemen pertama dalam antrian (awalnya 0).
- back: Variabel yang menunjukkan indeks slot kosong berikutnya dalam antrian (awalnya 0).
- queueTeller: Array untuk menyimpan nama nasabah dalam antrian.
Fungsi:
- isFull(): Memeriksa apakah antrian penuh (back mencapai maksimalQueue).
- isEmpty(): Memeriksa apakah antrian kosong (back adalah 0).
- enqueueAntrian(string data): Menambahkan nama nasabah baru (data) ke belakang antrian.
  - Jika antrian penuh, program menampilkan pesan "Antrian penuh".
  - Jika antrian kosong, program menyetel front dan back ke 0 dan menambahkan nama nasabah.
  - Jika tidak, program menambahkan nama nasabah ke indeks back dan menambah back nilainya 1.
- dequeueAntrian(): Menghapus nama nasabah pertama dari antrian.
  - Jika antrian kosong, program menampilkan pesan "Antrian kosong".
  - Jika tidak, program menggeser semua elemen maju satu posisi, mengurangi back nilainya 1, dan memperbarui front jika perlu.
- countQueue(): Mengembalikan jumlah nasabah saat ini dalam antrian (nilai back).
- clearQueue(): Mengosongkan antrian dengan menyetel semua elemen menjadi string kosong dan menyetel ulang front dan back ke 0.
- viewQueue(): Menampilkan seluruh isi antrian.
  - Memeriksa apakah antrian kosong; jika ya, program menampilkan pesan "Antrian kosong".
  - Jika tidak, program iterasi melalui array queueTeller, mencetak nama dan indeks nasabah untuk setiap elemen yang tidak kosong.
Fungsi Utama (main):
- Fungsi main() mendemonstrasikan penggunaan operasi antrian.
- Fungsi ini memasukkan dua nasabah, "Andi" dan "Maya", lalu menampilkan isi antrian dan jumlahnya.
- Fungsi ini mengeluarkan satu nasabah, menampilkan antrian yang diperbarui, dan sekali lagi menunjukkan jumlahnya.
- Terakhir, program ini mengosongkan antrian, menampilkan antrian yang sekarang kosong, dan jumlahnya (0)


## Unguided 
### 1. Buatlah program untuk menentukan apakah kalimat tersebut yang diinputkan dalam program stack adalah palindrom/tidak. Palindrom kalimat yang dibaca dari depan dan belakang sama. Jelaskan bagaimana cara kerja programnya.

![image](https://github.com/Malkankhulika/Modul-7/assets/149793653/82cc34a0-8f16-47d5-ba90-140df26e41de)


#### Kode Program
```C++
#include <iostream>
#include <stack>
#include <string>
using namespace std;
bool isPalindrome(string sentence)
{
    stack<char> s;
    int len = sentence.length();
    int mid = len / 2;

    for (int i = 0; i < mid; i++)
    {
        s.push(sentence[i]);
    }
    if (len % 2 != 0)
    {
        mid++;
    }
    for (int i = mid; i < len; i++)
    {
        if (s.empty())
        {
            return false;
        }
    if (sentence[i] != s.top())
    {
        return false;
    }
    s.pop();
}
    return true;
}

int main()
{
    string sentence;
    cout << "Masukan Kalimat: ";
    getline(cin, sentence);

    if (isPalindrome(sentence))
    {
    cout << "Kalimat ini adalah Polindrom." << endl;
    }
    else
    {
    cout << "Kalimat ini bukan Polindrom." << endl;
    }
    return 0;
}


```
#### Full Code Screenshot
![image](https://github.com/Malkankhulika/Modul-7/assets/149793653/911fd7f9-9520-48bc-966d-ddfa183e1ccb)


#### Output:
![image](https://github.com/Malkankhulika/Modul-7/assets/149793653/b3f5fbb2-4f6e-462c-b714-d433a3c01dd3)


#### Penjelasan:
1.	Header dan Namespace:
- #include <iostream>: Memuatkan pustaka input/output standar untuk memungkinkan pengguna memasukkan kalimat dan program menampilkan hasilnya.
- #include <stack>: Memuatkan pustaka stack untuk menggunakan struktur data stack (tumpukan) dalam program.
- #include <string>: Memuatkan pustaka string untuk menangani operasi string (kalimat).
- using namespace std;: Menggunakan namespace standar std untuk memudahkan penggunaan fungsi-fungsi standar tanpa perlu menuliskan std:: di depan setiap fungsi.
2.	Fungsi isPalindrome(string sentence):
- Fungsi ini menerima string sentence (kalimat) sebagai parameter dan mengembalikan nilai bool (true/false).
- Fungsi ini menentukan apakah sentence merupakan palindrom.
3.	Deklarasi Variabel:
- stack<char> s;: Deklarasi sebuah stack s untuk menyimpan karakter-karakter dalam kalimat. Stack ini menggunakan tipe data char (karakter) untuk menyimpan setiap huruf dalam kalimat.
- int len = sentence.length();: Variabel len menyimpan panjang kalimat yang dimasukkan pengguna.
- int mid = len / 2;: Variabel mid digunakan untuk menentukan indeks tengah kalimat (dibulatkan ke bawah untuk kalimat dengan panjang ganjil).
4.	Memproses Kalimat Bagian Depan:
- for (int i = 0; i < mid; i++): Perulangan ini iterasi dari indeks 0 hingga mid - 1 (bagian depan kalimat).
  - s.push(sentence[i]);: Mendorong setiap karakter dari bagian depan kalimat ke dalam stack s.
5.	Penanganan Kalimat dengan Panjang Ganjil (Opsional):
- if (len % 2 != 0): Blok kode ini dijalankan jika panjang kalimat (len) ganjil.
  - mid++;: Jika panjang kalimat ganjil, mid diincrement 1 untuk melewati karakter tengah yang tidak perlu dibandingkan.
6.	Memproses Kalimat Bagian Belakang:
- for (int i = mid; i < len; i++): Perulangan ini iterasi dari indeks mid hingga len - 1 (bagian belakang kalimat).
  - if (s.empty()): Memeriksa apakah stack s kosong.
  - return false;: Jika stack kosong, berarti kalimat tidak mungkin palindrom dan fungsi mengembalikan false.
  - if (sentence[i] != s.top()): Membandingkan karakter di posisi i pada kalimat dengan karakter teratas di stack s.
  - return false;: Jika karakter tidak sama, maka kalimat tidak palindrom dan fungsi mengembalikan false.
  - s.pop();: Jika karakter sama, karakter teratas di stack s dikeluarkan (dihapus).
7.	Mengembalikan Hasil:
- return true;: Jika semua karakter dibandingkan dan cocok, fungsi mengembalikan true yang menandakan kalimat adalah palindrom.
8.	Fungsi main():
- Fungsi utama program yang akan dijalankan.
- string sentence;: Deklarasi variabel string sentence untuk menyimpan kalimat yang akan diperiksa.
- cout << "Masukan Kalimat: ";: Mencetak pesan ke konsol meminta pengguna untuk memasukkan kalimat.
- getline(cin, sentence);: Membaca kalimat yang dimasukkan pengguna dan menyimpannya ke dalam variabel sentence.
- if (isPalindrome(sentence)): Memanggil fungsi isPalindrome dengan sentence sebagai argumen.
  - cout << "Kalimat ini adalah Polindrom." << endl;: Jika fungsi mengembalikan true, kalimat dicetak sebagai palindrom.
- else: Jika fungsi mengembalikan false, kalimat dicetak sebagai bukan palindrom.
- return 0;: Mengembalikan nilai 0 dari fungsi main() untuk menandakan program selesai dengan sukses.


### 2. Ubah guided queue diatas agar menjadi program inputan user dan program menu.
#### Kode Program
```c++
#include <iostream>
#include <string>

using namespace std;

const int maksimalQueue = 5;
int front = 0;
int back = 0;
string queueTeller[5];

bool isFull() {
  if (back == maksimalQueue) {
    return true;
  } else {
    return false;
  }
}

bool isEmpty() {
  if (back == 0) {
    return true;
  } else {
    return false;
  }
}

void enqueueAntrian(string data) {
  if (isFull()) {
    cout << "Antrian penuh!" << endl;
  } else {
    if (isEmpty()) {
      queueTeller[0] = data;
      front++;
      back++;
    } else {
      queueTeller[back] = data;
      back++;
    }
  }
}

void dequeueAntrian() {
  if (isEmpty()) {
    cout << "Antrian kosong!" << endl;
  } else {
    for (int i = 0; i < back; i++) {
      queueTeller[i] = queueTeller[i + 1];
    }
    back--;
  }
}

int countQueue() {
  return back;
}

void clearQueue() {
  if (isEmpty()) {
    cout << "Antrian kosong!" << endl;
  } else {
    for (int i = 0; i < back; i++) {
      queueTeller[i] = "";
    }
    back = 0;
    front = 0;
  }
}

void viewQueue() {
  cout << "Data antrian teller:" << endl;
  for (int i = 0; i < maksimalQueue; i++) {
    if (queueTeller[i] != "") {
      cout << i + 1 << ". " << queueTeller[i] << endl;
    } else {
      cout << i + 1 << ". (kosong)" << endl;
    }
  }
}

int main() {
  int pilihan;
  string nama;

  do {
    cout << "\n=====Menu Queue Teller=====" << endl;
    cout << "1. Enqueue (Memasukkan antrian)" << endl;
    cout << "2. Dequeue (Mengeluarkan antrian)" << endl;
    cout << "3. Lihat Antrian" << endl;
    cout << "4. Hitung Antrian" << endl;
    cout << "5. Hapus Antrian" << endl;
    cout << "6. Keluar" << endl;
    cout << "Masukkan pilihan: ";
    cin >> pilihan;

    switch (pilihan) {
    case 1:
        cout << "Masukkan nama: ";
        cin >> nama;
        enqueueAntrian(nama);
        break;
    case 2:
        dequeueAntrian();
        break;
    case 3:
        viewQueue();
        break;
    case 4:
        cout << "Jumlah antrian: " << countQueue() << endl;
        break;
    case 5:
        clearQueue();
        break;
    case 6:
        cout << "Terima kasih! program selesai." << endl;
        break;
    default:
        cout << "Pilihan tidak valid!" << endl;
    }
} while (pilihan != 0);

return 0;
}

//Khulika Malkan
//2311110057
```

#### Full Code Screenshot
![image](https://github.com/Malkankhulika/Modul-7/assets/149793653/57d7de20-1a5d-4c65-96de-5449f3ef57be)


#### Output
![image](https://github.com/Malkankhulika/Modul-7/assets/149793653/5b99a240-108d-457e-9b91-3c4c321098e6)


![image](https://github.com/Malkankhulika/Modul-7/assets/149793653/f6835786-23d2-4524-b34b-06b9a577d0d2)

![image](https://github.com/Malkankhulika/Modul-7/assets/149793653/7f65369c-e64d-411e-b1e1-d3bdecb9655e)


#### Penjelasan
- Kapasitas Antrian: Program ini dapat menampung hingga 5 nasabah (konstanta maksimalQueue).
- Variabel Penunjuk: front menunjukkan nasabah terdepan dalam antrian (awalnya indeks 0), sedangkan back menunjukkan slot kosong berikutnya (awalnya indeks 0).
- Array queueTeller: Menyimpan nama nasabah dalam antrian.
- Fungsi Pemeriksaan:
  - isFull(): Memeriksa apakah antrian penuh.
  - isEmpty(): Memeriksa apakah antrian kosong.
- Fungsi Operasi Antrian:
  - enqueueAntrian(string data): Menambahkan nasabah baru (data) ke antrian.
  - dequeueAntrian(): Menghapus nasabah terdepan dari antrian.
  - countQueue(): Mengembalikan jumlah nasabah saat ini.
  - clearQueue(): Menghapus semua nasabah dari antrian.
  - viewQueue(): Menampilkan seluruh isi antrian beserta posisi antrian masing-masing nasabah.
- Menu Interaktif: Program menampilkan menu yang memungkinkan pengguna memilih operasi yang diinginkan.




## Kesimpulan
Stack merupakan struktur data yang vital dalam pemrograman, memungkinkan penyimpanan dan pengambilan data dengan cara Last In First Out (LIFO). Di C++, stack umumnya diimplementasikan sebagai tipe data abstrak yang mudah digunakan melalui library STL (Standard Template Library). Operasi utama pada stack meliputi push (menambahkan data), pop (mengambil data terakhir), dan top (mengakses data terakhir tanpa menghapusnya). Kegunaan stack sangat beragam, mulai dari konversi notasi infix ke postfix, evaluasi ekspresi postfix, hingga simulasi tumpukan kartu dalam permainan. Sedangkan antrian dalam pemrograman mencerminkan konsep antrian dalam kehidupan sehari-hari, di mana elemen-elemen data ditata dan diproses berdasarkan urutan kedatangan. Mirip dengan mengantre di kasir, antrian memastikan elemen pertama yang masuk diproses terlebih dahulu, menegakkan prinsip First In, First Out (FIFO). Penggunaan antrian dalam pemrograman sangat beragam, seperti :
- Manajemen antrian: Mengatur urutan pemrosesan tugas, seperti pencetakan dokumen atau pengiriman email.
- Buffering data: Menyimpan data sementara sebelum diproses lebih lanjut, seperti streaming video atau transfer data jaringan.
- Simulasi: Memodeli sistem antrian nyata, seperti antrian di bank atau loket pelayanan publik.
- Algoritma: Digunakan dalam berbagai algoritma, seperti penjadwalan proses dan pencarian pohon.
Antrian menawarkan cara yang efisien dan terstruktur untuk mengelola urutan data, menjadikannya alat yang penting dalam berbagai aplikasi pemrograman.

## Referensi
[1]	Anita Sindar, R. M. S. (2019). Struktur Data Dan Algoritma Dengan C++ (Vol. 1). CV. AA. RIZKY.

[2]	Santoso, L. E. (2004). STANDARD TEMPLATE LIBRARY C++ UNTUK MENGAJARKAN STRUKTUR DATA. Jurnal FASILKOM Vol, 2(2).
