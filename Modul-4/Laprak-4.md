# <h1 align="center">Laporan Praktikum Modul Searching</h1>
<p align="center">Khulika Malkan</p>
<p align="center">2311110057</p>

## Dasar Teori
Pencarian (Searching) merupakan tindakan untuk mendapatkan suatu data dalam kumpulan data berdasarkan satu kunci (key) atau acuan data. Dalam kehidupan sehari- hari, seringkali kita berurusan dengan pencarian; misalnya untuk menemukan nomor telepon seseorang pada buku telepon atau mencari istilah dalam kamus, dan masih banyak lagi.
Pada aplikasi komputer, pencarian kerapkali dilakukan. Misalnya untuk proses penghapusan data/record atau mengubah data/record tertentu di dalam suatu tabel atau file, langkah pertama yang harus dilakukan adalah mencari apakah data tersebut terdapat di dalam tabel/file atau tidak. Jika ada maka dapat dihapus atau diubah. Kegunaan beberapa struktur data dalam hubungannya untuk menyimpan data sehingga memudahkan proses pencarian kembali tergantung pada:
<pre>
- Media penyimpanan data (memori, disk, tape).
- Karakteristik jenis data yang disimpan (data numerik/character/string).
- Jumlah data yang akan disimpan dan keperluan akses data secepat-cepatnya.
</pre>
Ada  beberapa  algoritma  yang  bisa digunakan untuk melakukan pencarian, salah satunya adalah Sequential Search, yaitu  algoritma  yang  dasar  dan  simpel dari  pencarian,  dimana menggunakan metode pencarian data dari paling awal hingga  paling  akhir dari sebuah list sampai data ditemukan [1].


### 1. SEQUENTIAL SEARCH
Sequential Search adalah cara untuk  pencarian  data  dalam  array  1 dimensi.  Data  yang  akan  dicari  nanti akan  ditelusuri dalam  semua  elemen-elemen  array  dari  awal  sampai  akhir, dan data yang dicari tersebut tidak perlu diurutkan  terlebih  dahulu. Pencarian beruntun dapat dilakukan terhadap elemen array yang belum terurut atau terhadap elemen array yang terurut. Perbedaan dari keduanya terletak pada efisiensi operasi pembandingan yang dilakukan. Dengan kata lain sequential search akan mencari data dengan cara membandingkannya satu-persatu dengan data yang ada. Prosesnya tentu saja akan singkat jika data yang diolah sedikit, dan akan lama jika data yang diolah banyak. Metode ini disarankan untuk digunakan pada data yang sedikit saja. Terdapat  2 kemungkinan  yang  akan  terjadi  dalam waktu pencarian data Sequential Search, diantaranya yaitu [2] :
- Best CaseBest case/   kemungkinan   terbaik akan terjadi apabila data yang dicari terletakpada index array yang paling depan, sehingga waktu yang dibutuhkan    untuk   mencari    data sedikit.
- Worse CaseWorse case/  kemungkinan  terburuk akan terjadi apabila data yang dicari terletak pada index array yang paling akhir, sehingga waktu yang dibutuhkan untuk mencari data akan sangat lama. Untuk meningkatkan efisiensi pencarian  data  pada Sequential Search dapat dilakukan dengan cara menghentikan looping dengan menggunakan   BREAK   apabila   data yang dicari sudah ketemu[2]

### 2. BINARY SEARCH
Binary Search adalah  cara  untuk pencarian  data  pada  array  yang  sudah terurut.  karena  salah  satu  syarat  dalam binary search adalah data sudah dalam keadaan terurut. Proses pencarian ini hanya dapat dilakukan pada kumpulan data yang sudah diurutkan terlebih dahulu dengan kata lain apabila   data   belum   dalam   keadaan terurut,  pencarian binary tidak  dapat dilakukan. Binary Search ini dilakukan untuk [2] :
<pre>
a.Memperkecil jumlah operasi perbandingan yang harus dilakukan antara data yang dicari dengan data yang ada didalam tabel, khususnya untuk   jumlah   data   yang   sangat besar ukurannya.
b.Beban komputasi lebih kecil karena pencarian   dilakukan   dari   depan, belakang dan tengah.
c.Prinsip dasarnya adalah melakukan proses  pembagian  ruang  pencarian secara  berulang-ulang  sampai  data ditemukan  atau  sampai  pencarian tidak   dapat   dibagi   lagi   (berarti terdapatkemungkinandata  tidak dtiemukan).
</pre>

## Guided

### 1. Buatlah sebuah project dengan menggunakan sequential search sederhana untuk melakukan pencarian data.

```C++
#include <iostream>
using namespace std;

int main () {
	int n = 10;
	int data[n] = {9, 4, 1, 7, 5, 12, 4, 13, 4, 10};
	int cari = 10;
	bool ketemu = false;
	int i;
	// Algoritma Sequential Searching
	for (i = 0; i < n; i++) {
		if(data[i] == cari) {
			ketemu = true; 
			break;
		}
	}
	cout << "\t Program Sequential Search Sederhana\n" << endl; 
	cout << "Data: {9, 4, 1, 7, 5, 12, 4, 13, 4, 10}" << endl;
	
	if (ketemu) {
		cout << "\nAngka" << cari << " ditemukan pada Index ke-" << i << endl;
	} else {
		cout << " tidak dapat ditemukan pada data." << endl;
	}
	
	return 0;
	}

// Khulika Malkan
// 2311110057 
```
### Full Code Screenshot
![image](https://github.com/Malkankhulika/Modul-4/assets/149793653/fd498764-d7fd-483a-a5c3-a31edc0526c7)

### Output
![image](https://github.com/Malkankhulika/Modul-4/assets/149793653/7b1df59c-95d8-408b-9972-0088c8387e19)

### Penjelasan
Program di atas bertujuan untuk menemukan nilai tertentu ("10") dalam sebuah kumpulan data yang disimpan dalam array. Algoritma yang digunakan adalah Sequential Search, yang bekerja dengan cara mencari nilai secara berurutan dari awal array hingga akhir.

Algoritma ini bekerja dengan cara membandingkan setiap elemen dalam daftar secara berurutan hingga nilai yang dicari ditemukan. Pertama kita menginputkan library iostream dan menggunakan using namespace std. Lalu pada main program variable n digunakan untuk menentukan panjang array. Kemudian kita membuat variable data yang berisi data array. Lalu kita membuat variable cari yang diisi dengan angka berapa yang ingin kita cari, dan variable ketemu diinisialisasi dengan false karena sebelum proses pencarian dilakukan, belum ada kepastian bahwa angka yang dicari cari ada dalam array data. Dengan menginisialisasi ketemu sebagai false, kita mempersiapkan kondisi awal untuk proses pencarian.

Program ini melakukan pencarian nilai secara berurutan dalam array. Jika nilai ditemukan, program akan menampilkan posisinya. Jika tidak ditemukan, program akan menampilkan pesan "tidak dapat ditemukan". Algoritma Sequential Search ini mudah dipahami dan diimplementasikan, tetapi bisa menjadi lambat dan tidak efisien untuk array yang besar.

### 2. Buatlah sebuah project untuk melakukan pencarian data dengan menggunakan Binary Search

```C++
#include <iostream>
#include <iomanip>

using namespace std;

int bil_data[7] = {1, 8, 2, 5, 4, 9, 7};
int cari;

void selection_sort() {
    int temp, min, i, j;
    for(i = 0; i < 7; i++) {
        min = i;
        for(j = i + 1; j < 7; j++) {
            if(bil_data[j] < bil_data[min]) {
                min = j;
            }
        }
        temp = bil_data[i];
        bil_data[i] = bil_data[min];
        bil_data[min] = temp;
    }
}

void binary_search() {
    int awal, akhir, tengah, b_flag = 0;
    awal = 0;
    akhir = 6;
    while (b_flag == 0 && awal <= akhir) {
        tengah = (awal + akhir) / 2;
        if(bil_data[tengah] == cari) {
            b_flag = 1;
            break;
        } else if(bil_data[tengah] < cari) {
            awal = tengah + 1;
        } else {
            akhir = tengah - 1;
        }
    }
    if(b_flag == 1) {
        cout << "\n Data ditemukan pada index ke-" << tengah << endl;
    } else {
        cout << "\n Data tidak ditemukan\n";
    }
}

int main() {
    cout << "\t BINARY SEARCH\n";
    cout << "\n Data : ";
    // tampilkan data awal
    for(int x = 0; x < 7; x++) {
        cout << setw(3) << bil_data[x];
    }
    cout << endl;
    cout << "\n Masukkan data yang ingin Anda cari : ";
    cin >> cari;
    cout << "\n Data diurutkan : ";
    // urutkan data dengan selection sort
    selection_sort();
    // tampilkan data setelah diurutkan
    for(int x = 0; x < 7; x++) {
        cout << setw(3) << bil_data[x];
    }
    cout << endl;
    binary_search();
    return 0;
}

// Khulika Malkan
// 2311110057 
```
### Full Code Screenshot
![image](https://github.com/Malkankhulika/Modul-4/assets/149793653/351e685c-8c82-4b7d-bbfb-2aa0b1a26aa4)

### Output
![image](https://github.com/Malkankhulika/Modul-4/assets/149793653/71a2fe48-cbe6-4874-879a-f94c470912eb)

### Penjelasan
Program ini bertujuan untuk mencari data ("cari") dalam sebuah kumpulan data yang disimpan dalam array menggunakan algoritma Binary Search. Sebelum melakukan pencarian, program mengurutkan data terlebih dahulu menggunakan algoritma Selection Sort.

untuk function binary_search kita menentukan indeks awal, tengah, dan akhir. awal diinisialisasi dengan 0, akhir diinisialisasi dengan 6, dan tengah dihitung sebagai rata-rata awal dan akhir. Lalu kita membandingkan nilai dengan cara diperiksa apakah nilai pada indeks tengah bil_data[tengah] sama dengan cari. Jika sama, maka nilai ditemukan dan proses dihentikan, namun jika bil_data[tengah] lebih kecil dari cari, maka awal diperbarui menjadi tengah + 1 dan jika bil_data[tengah] lebih besar dari cari, maka akhir diperbarui menjadi tengah - 1. Kemudian pada main program digunakan untuk menampilkan nilai. Jika nilainya ditemukan maka indeksnya ditampilkan, namun jika nilai tidak ditemukan maka akan muncul pesan.

Program ini menggabungkan dua algoritma: Selection Sort untuk mengurutkan data dan Binary Search untuk mencari nilai dalam data yang sudah diurutkan. Algoritma ini memungkinkan pencarian nilai yang lebih efisien dibandingkan dengan Sequential Search, terutama untuk array yang besar.

## Unguided 

### 1. Buatlah sebuah program untuk mencari sebuah 'huruf' pada sebuah kalimat yang sudah di input dengan menggunakan Binary Search!

```C++
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int binarySearch(string kalimat, char target) {
  int left = 0;
  int right = kalimat.length() - 1;

  while (left <= right) {
    int mid = left + (right - left) / 2;
    char midChar = kalimat[mid];

    if (midChar == target) {
      return mid;
    } else if (midChar < target) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }

  return -1;
}

int main() {
  string kalimat;
  char target;

  cout << "Masukkan kalimat: ";
  getline(cin, kalimat);

  // Urutkan kalimat sebelum melakukan pencarian
  sort(kalimat.begin(), kalimat.end());

  cout << "Masukkan huruf yang ingin dicari: ";
  cin >> target;

  int position = binarySearch(kalimat, target);

  if (position == -1) {
    cout << "Huruf '" << target << "' tidak ditemukan dalam kalimat." << endl;
  } else {
    cout << "Huruf '" << target << "' ditemukan pada posisi ke-" << position + 1 << "." << endl;
  }

  return 0;
}

// Khulika Malkan
// 2311110057 
```
### Full Code Screenshot
![image](https://github.com/Malkankhulika/Modul-4/assets/149793653/e491dbdd-45cd-4784-9ac4-b3a5901e7c67)

#### Output:
![image](https://github.com/Malkankhulika/Modul-4/assets/149793653/7ef90774-66f4-4624-994b-8c6d5e16ceff)

### Penjelasan
Program ini bertujuan untuk mencari huruf tertentu dalam sebuah kalimat yang dimasukkan oleh pengguna. Algoritma yang digunakan adalah Binary Search, yang merupakan algoritma pencarian yang efisien untuk data yang sudah diurutkan.

Program ini menggunakan algoritma Binary Search untuk mencari huruf tertentu dalam sebuah kalimat yang sudah diurutkan. Algoritma ini memungkinkan pencarian huruf yang lebih efisien dibandingkan dengan Sequential Search, terutama untuk kalimat yang panjang.

### 2. Buatlah sebuah program yang dapat menghitung banyaknya 'huruf' vocal dalam sebuah kalimat!

```C++
#include <iostream>
#include <string>
using namespace std;

int main() {
    string kalimat;
    int jumlah_vokal = 0;

    cout << "Masukkan kalimat: "; getline(cin, kalimat);

    for(int i = 0; i < kalimat.length(); i++) {
    if(kalimat[i] == 'a' || kalimat[i] == 'i' || kalimat[i] == 'u' || kalimat[i] == 'e' || kalimat[i] == 'o' || kalimat[i] == 'A' || kalimat[i] == 'I' || kalimat[i] == 'U' || kalimat[i] == 'E' || kalimat[i] == 'O') {
        jumlah_vokal++;
        }
    }

    cout << "Jumlah huruf vokal dalam kalimat tersebut adalah: " << jumlah_vokal;

    return 0;
}

// Khulika Malkan
// 2311110057 
```
### Full Code Screenshot
![image](https://github.com/Malkankhulika/Modul-4/assets/149793653/3ef36476-b38b-47bb-bc79-49692614ca9c)

#### Output
![image](https://github.com/Malkankhulika/Modul-4/assets/149793653/884606d7-3915-469f-a5e3-78ead6ea4381)

### Penjelasan
Pertama, program akan meminta pengguna untuk memasukkan kalimat menggunakan getline(). Kemudian, program akan melakukan perulangan untuk setiap karakter dalam kalimat dan memeriksa apakah karakter tersebut merupakan huruf vokal atau bukan. Jika karakter tersebut merupakan huruf vokal, maka variabel jumlah_vokal akan ditambah satu. Terakhir, program akan mencetak jumlah huruf vokal yang ditemukan.


### 3. Diketahui data = 9, 4, 1, 4, 7, 10, 5, 4, 12, 4. Hitunglah berapa banyak angka 4 dengan menggunakan algoritma Sequential Search!

```C++
 #include <iostream>
using namespace std;

int main() {
    int data[] = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4};
    int length = sizeof(data)/sizeof(data[0]);
    int searchNum = 4;
    int count = 0;

    cout << "Data: ";
    for(int i=0; i<length; i++)
        { cout << data[i] << " ";
        if(data[i] == searchNum) {
            count++;
        }   
    }
    cout << endl;

    cout << "Jumlah angka " << searchNum << " pada data tersebut adalah: " << count << endl;

    return 0;
}

// Khulika Malkan
// 2311110057 
```
### Full Code Screenshot
![image](https://github.com/Malkankhulika/Modul-4/assets/149793653/7ded7f8e-55b6-47dd-9940-0f4235322df5)

#### Output
![image](https://github.com/Malkankhulika/Modul-4/assets/149793653/5205e505-17b3-4561-a366-77e48e8b75b4)

### Penjelasan
Program tersebut akan menampilkan data awal dan jumlah angka 4 pada data tersebut. Algoritma Sequential Search diimplementasikan dengan melakukan looping pada setiap elemen dari array dan memeriksa apakah elemen tersebut sama dengan angka yang dicari. Jika sama, maka variabel count akan diincrement.


## Kesimpulan
- Algoritma sequential search adalah metode pencarian data dengan cara mengecek satu per satu setiap elemen data secara berurutan dari awal sampai akhir. Algoritma ini mudah diimplementasikan, namun waktu eksekusinya semakin lambat seiring dengan bertambahnya jumlah data.
- Algoritma binary search bekerja dengan cara membagi data menjadi dua bagian dan mencari data pada salah satu bagian. Algoritma ini membutuhkan data terurut secara ascending atau descending, namun waktu eksekusinya lebih cepat dibandingkan sequential search, terutama pada data yang besar.
- Dalam penggunaannya, algoritma sequential search cocok digunakan pada data yang kecil atau tidak terurut, sementara binary search cocok digunakan pada data yang besar dan terurut. Namun, penggunaan algoritma binary search akan butuh waktu lebih lama pada saat proses pengurutan data.postfix, evaluasi ekspresi postfix, pengecekan tumpukan kartu pada permainan, dan sebagainya.

## Referensi
[1] English Thomas.” No More Lunch: Analysis   of SequentialSearch”. 2008 .

[2] Religia, Y. (2019). Analisis Algoritma Sequential Search Dan Binary Search Pada Big Data: Analysis Of Sequential Search And Binary Search Algorithm In Big Data. Pelita Teknologi, 14(1), 74-79.
