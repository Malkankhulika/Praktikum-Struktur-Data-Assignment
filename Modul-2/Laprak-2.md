# Modul-2
# <h1 align="center">Laporan Praktikum Modul Array</h1>
<p align="center">Khulika Malkan</p>
<p align="center">2311110057</p>

## Tujuan Praktikum
Dengan adanya praktikum ini, penulis telah menargetkan beberapa tujuan diantaranya:
1. Mahasiswa dapat memahami konsep array.
2. Mahasiswa dapat mengetahui jenis dimensi array dan cara penulisannya.
3. Mahasiswa dapat mengimplementasikan array pada kode program yang dibuat.
   
## Dasar Teori
Array adalah suatu struktur yang terdiri dari sejumlah elemen yang memiliki tipe data yang sama. Elemen-elemen array tersusun secara sekuensial dalam memori komputer. Semua elemem array bertipe sama. Array cocok untuk organisasi kumpulan data homogen yang ukuran atau jumlah elemen maksimumnya telah diketahui dari awal. Homogen adalah bahwa setiap elemen dari sebuah array tertentu haruslah mempunyai tipe data yang sama.[1]
Array adalah suatu struktur yang terdiri dari sejumlah elemen yang memiliki tipe data yang sama. Elemen-elemen array tersusun secara sekuensial dalam memori komputer. Semua elemem array bertipe sama. Array cocok untuk organisasi kumpulan data homogen yang ukuran atau jumlah elemen maksimumnya telah diketahui dari awal [2].Homogen adalah bahwasetiap elemen dari sebuah array tertentu haruslah mempunyai tipe data yang sama.Array dibagi menjadi beberapa jenis yaitu :

**1. Array Satu Dimensi**
Array satu dimensi tidak lain adalah kumpulan elemen-elemen identik yang tersusun dalam satu baris, tetapi isi dari elemen tersebut boleh berbeda.  Dapat disebut juga dengan istilah vektor yang menggambarkan data dalam suatu urutan.
Deklarasi : Type_Data Nama_Variabel [index] 
Misalnya : int A[5]:

**2. Array Dua Dimensi**
Array dua dimensi yang sering digambarkan sebagai sebuah matriks merupakan perluasan dari sebuah array satu dimensi. Jika array satu dimensi hanya terdiri dari sebuah baris dengan beberapa kolom elemen maka array dua dimensi terdiri dari beberapa baris dan beberapa kolom elemen yang bertipe sama. Pendeklarasian array dua dimensi hampir sama dengan pendeklarasian array satu dimensi, kecuali bahwa array dua dimensi terdapat dua jumlah elemen array yang fakultas Komputer Section 01 terdapat di dalam kurung siku dan keduanya boleh tidak sama.
Deklarasi : Type_Data Nama_Variabel [Index1] [index2]; 
Misal : int A[3][2];

**3. Array Multidimensi**
Array multidimensi memiliki kesamaan dengan array satu dimensi dan dua dimensi, namun memiliki kapasitas memori yang lebih besar. Array ini digunakan untuk merepresentasikan array dengan dimensi lebih dari dua atau array yang memiliki lebih dari dua indeks, seperti array tiga dimensi, array empat dimensi, array lima dimensi, dan seterusnya.

**4. Array Empat Dimensi**
Sebenarnya array banyak dimensi ini tidak terlalu sering dipakai seperti halnyaarray satu dimensi, dua dimensi, dan tiga dimensi. Array banyak dimensi ini pada dasarnya sama dengan array sebelimnya kecuali pada jumlah dimensinya.
Deklarasi : Type_Data Nama_Variabel [index1] [ndex2] [index3] [ndex4].....;
Misal : int A [3][4][2][5];

**5. Array Lima Dimensi**
contoh :
int arr [2] [4] [4] [5] [5]


## Guided 1
### Program Input Array Tiga Dimensi :
```C++
#include <iostream>
using namespace std;
int main() {
    // Deklarasi
    int arr[2][3][3]; 
    // Input
    for (int x = 0; x < 2; x++) {
        for (int y = 0; y < 3; y++) {
            for (int z = 0; z < 3; z++) {
                cout << "Input Array[" << x << "][" << y << "][" << z << "] = ";
                cin >> arr[x][y][z];
            }
        }
        cout << endl;
    }
    // Output 
    for (int x = 0; x < 2; x++) {
        for (int y = 0; y < 3; y++) {
            for (int z = 0; z < 3; z++) {
                cout << "Data Array[" << x << "][" << y << "][" << z << "] = " << arr[x][y][z] << endl;
            }
        }
    }
    cout << endl;
    // Tampilkan 
    for (int x = 0; x < 2; x++) {
        for (int y = 0; y < 3; y++) {
            for (int z = 0; z < 3; z++) {
                cout << arr[x][y][z] << ends;
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
// Nama : Khulika Malkan
// NIM  : 2311110057
```

#### Penjelasan
Program yang diberikan menunjukkan cara menggunakan array 3 dimensi dalam bahasa pemrograman C++. Komponen dan fungsi utama dalam kode tersebut:

**a.) Deklarasi Array 3 Dimensi:**
Array arr dideklarasikan dengan dimensi 2x3x3, yang berarti dapat menyimpan 2 set matriks 3x3.

**b.) Input Elemen Array:** 
Loop bersarang digunakan untuk mengiterasi setiap dimensi dari array, memungkinkan pengguna untuk memasukkan nilai untuk setiap elemen. Loop luar mengiterasi dimensi pertama (2 set matriks 3x3), loop tengah mengiterasi dimensi kedua (3 baris dalam setiap matriks 3x3), dan loop dalam mengiterasi dimensi ketiga (3 kolom dalam setiap matriks 3x3).

**c.) Output Elemen Array::** 
Mirip dengan proses input, loop bersarang digunakan untuk mengiterasi setiap dimensi dari array dan menampilkan nilai-nilai tersebut. Ini dilakukan untuk menampilkan seluruh array setelah diisi dengan input pengguna.

**d.) Menampilkan Elemen Array:** 
Loop bersarang terakhir digunakan untuk menampilkan elemen array dalam format yang diinginkan. Pernyataan cout digunakan untuk mencetak setiap elemen, dan ends digunakan untuk memasukkan spasi setelah setiap elemen daripada baris baru. Hal ini menghasilkan tampilan yang lebih ringkas dari elemen array.

**c.) Pernyataan Return:** 
Program berakhir dengan pernyataan return return 0;, menunjukkan bahwa eksekusi berhasil.
Kode ini efektif menunjukkan bagaimana bekerja dengan array 3 dimensi dalam C++, termasuk deklarasinya, memasukkan nilai, menampilkan nilai, dan menampilkan dalam format yang diinginkan.

#### Output :
```C++
Input Array[0][0][0] = 1
Input Array[0][0][1] = 3
Input Array[0][0][2] = 5
Input Array[0][1][0] = 7
Input Array[0][1][1] = 9
Input Array[0][1][2] = 0
Input Array[0][2][0] = 1
Input Array[0][2][1] = 3
Input Array[0][2][2] = 5

Input Array[1][0][0] = 2
Input Array[1][0][1] = 4
Input Array[1][0][2] = 6
Input Array[1][1][0] = 8
Input Array[1][1][1] = 0
Input Array[1][1][2] = 2
Input Array[1][2][0] = 4
Input Array[1][2][1] = 6
Input Array[1][2][2] = 8
Data Array[0][0][0] = 1
Data Array[0][0][1] = 3
Data Array[0][0][2] = 5
Data Array[0][1][0] = 7
Data Array[0][1][1] = 9
Data Array[0][1][2] = 0

Data Array[0][2][0] = 1
Data Array[0][2][1] = 3
Data Array[0][2][2] = 5
Data Array[1][0][0] = 2
Data Array[1][0][1] = 4
Data Array[1][0][2] = 6
Data Array[1][1][0] = 8
Data Array[1][1][1] = 0
Data Array[1][1][2] = 2
Data Array[1][2][0] = 4
Data Array[1][2][1] = 6
Data Array[1][2][2] = 8

135
790
135
246
802
468
```

#### Penjelasan
Dari kode yang telah dibuat, menghasilkan output seperti di atas. Dimana pada output akan ditampilkan angka-angka array dari yang kita inputkan. Lalu angka-angka tersebut akan di bentuk menjadi array 2x3x3. 

#### Full Code Screenshot
<p align="center">
<img src="https://github.com/Malkankhulika/Modul-2/assets/149793653/0bac884d-279e-4a53-bf13-f0f2890ba59d"alt="Alt Text">

#### Screenshot Output
<p align="center"> 
<img src="https://github.com/Malkankhulika/Modul-2/assets/149793653/40838581-3def-4484-a7df-cc4d5e3b5ed0"alt="Alt Text">
 <p align="center"> 
<img src="https://github.com/Malkankhulika/Modul-2/assets/149793653/2e2e3e67-f2d3-4768-862a-62346b4eb9d1"alt="Alt Text">
</p>


## 2. Guided 2
### Program Mencari Nilai Maksimum pada Array :
```C++
#include <iostream>
using namespace std;
int main() {
    // Deklarasi variabel
    int maks, a, lokasi;
    // Meminta pengguna untuk memasukkan panjang array
    cout << "Masukkan panjang array  : ";
    cin >> a;
    // Memeriksa apakah panjang array valid
    if (a <= 0){
        cout << "Panjang array harus lebih besar dari 0"<<endl;
        return 1; // Mengembalikan 1 menandakan kesalahan
    }
    // Deklarasi array dengan panjang sesuai input pengguna
    int array[a];
    // Meminta pengguna untuk memasukkan nilai-nilai array
    cout <<"Masukkan "<<a<<" angka\n";
    for (int i = 0 ; i < a ; i++) {
        cout<<"Array ke-"<<(i+1)<<": ";
        cin >> array[i];
    }
    // Inisialisasi nilai maksimum dengan elemen pertama array
    maks = array[0];
    lokasi = 0;
    // Mencari nilai maksimum dan lokasinya dalam array
    for (int i = 1 ; i < a; i++) {
        if (array[i] > maks) {
            maks = array[i];
            lokasi = i; // Memperbarui lokasi nilai maksimum
        }
    }
    // Menampilkan nilai maksimum dan lokasinya dalam array
    cout << "Nilai maksimum adalah " << maks << " Berada pada array ke-" << (lokasi + 1) << endl;
    
    return 0; // Mengembalikan 0 menandakan program berjalan dengan sukses
}
```
#### Penjelasan:
Program yang diberikan adalah contoh sederhana untuk mencari elemen maksimum dalam array yang panjangnya ditentukan oleh pengguna. Berikut adalah penjelasan langkah demi langkah dari kode tersebut:

**a.) Deklarasi Variabel:** 
Program ini memulai dengan mendeklarasikan beberapa variabel yang akan digunakan, yaitu maks untuk menyimpan nilai maksimum, a untuk menyimpan panjang array, dan lokasi untuk menyimpan posisi elemen maksimum dalam array.

**b.) Meminta Panjang Array:** 
Program meminta pengguna untuk memasukkan panjang array yang diinginkan. Nilai ini disimpan dalam variabel a.
Validasi Panjang Array: Program memeriksa apakah panjang array yang dimasukkan pengguna valid (lebih besar dari 0). Jika tidak, program menampilkan pesan kesalahan dan mengembalikan nilai 1, yang menandakan ada kesalahan.

**c.) Deklarasi Array:** 
Setelah panjang array validasi, program mendeklarasikan array dengan panjang sesuai dengan input pengguna.
Input Nilai Array: Program meminta pengguna untuk memasukkan nilai-nilai array. Loop for digunakan untuk mengambil input dari pengguna dan menyimpannya dalam array.

**d.) Pencarian Nilai Maksimum:** 
Program mencari nilai maksimum dalam array dengan menginisialisasi maks dengan elemen pertama array dan lokasi dengan 0. Kemudian, loop for digunakan untuk mengiterasi setiap elemen array mulai dari elemen kedua. Jika elemen saat ini lebih besar dari maks, maka maks diperbarui dengan nilai elemen saat ini dan lokasi diperbarui dengan indeks elemen saat ini.

**e.) Menampilkan Nilai Maksimum:** 
Setelah menemukan nilai maksimum, program menampilkan nilai maksimum tersebut dan posisi (indeks) di mana nilai maksimum tersebut ditemukan dalam array.

**f.) Return Statement:** 
Program berakhir dengan mengembalikan nilai 0, yang menandakan bahwa program berjalan dengan sukses.
Program ini menunjukkan cara sederhana untuk mencari elemen maksimum dalam array yang panjangnya ditentukan oleh pengguna, serta cara memvalidasi input pengguna dan menangani kasus di mana panjang array tidak valid.

#### Output
```C++
Masukan panjang array: 4
Masukan4angka
Array1:1
Array2:5
Array3:7
Array4:9
Nilai maksimum adalah 9 berada di Array ke 4
```
#### Penjelasan:
Pada output, pengguna diminta untuk memasukkan panjang array yang diinginkan misalnya 4. Lalu pengguna diminta memasukkan 3 angka untuk mengisi array sebagai contoh 1, 5, 7, 9. Jadi nilai maksimum adalah 9 yang berada pada array ke-4.

#### Full Code Screenshot
<p align="center">
  <img src="https://github.com/Malkankhulika/Modul-2/assets/149793653/05f2741a-e5d8-4607-bd64-c84af83f0019"alt="Alt Text">
</p>

#### Screenshot Output
<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-2/blob/main/Modul%202/Screenshot%20In%20and%20Out/OutputGuided2.png" alt="Alt Text">
</p>

## Unguided 
### 1.  Buatlah program untuk menampilkan Output seperti berikut dengan data yang diinputkan oleh user!
Data Array : 1 2 3 4 5 6 7 8 9 10
Nomor Genap : 2, 4, 6, 8 , 10,
Nomor Ganjil : 1, 3, 5, 7, 9,
Noted: Inputan boleh berubah.

#### Kode Program:
```C++
#include <iostream>
using namespace std;
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int len = sizeof(arr) / sizeof(arr[0]);
    cout << "Data array: ";
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Nomor genap: ";
    for (int i = 0; i < len; i++) {
        if (arr[i] % 2 == 0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
    cout << "Nomor ganjil: ";
    for (int i = 0; i < len; i++) {
        if (arr[i] % 2 == 1) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
    return 0;
}
// Nama : Khulika Malkan
// NIM  : 2311110057
```

#### Output:
```C++
Data array: 1 2 3 4 5 6 7 8 9 10 
Nomor genap: 2 4 6 8 10
Nomor ganjil: 1 3 5 7 9
```

#### Penjelasan
Program C++ ini mengatur data array dengan menggunakan variabel arr yang berisi nilai 1 sampai dengan 10. Variabel len dibuat untuk menghitung panjang array dengan cara mengambil ukuran arr dan mengdividinya dengan ukuran arr.
Kemudian, program mencetak isi array dengan menggunakan perulangan for dengan variable i. Setiap iterasi, nilai array arr[i] ditampilkan dengan spasi sebagai pemisah.
Selanjutnya, program mencetak angka genap dengan menggunakan perulangan for yang sama. Namun, dalam setiap iterasi, program memeriksa apakah arr[i] merupakan angka genap dengan menggunakan operator modulus %. Jika angka genap, maka nilai tersebut akan ditampilkan.
Sebagai akhirnya, program mencetak angka ganjil dengan perulangan for yang sama. Namun, dalam setiap iterasi, program memeriksa apakah arr[i] merupakan angka ganjil dengan menggunakan operator modulus %. Jika angka ganjil, maka nilai tersebut akan ditampilkan.

#### Full code Screenshot:
<p align="center">
  <img src="https://github.com/Malkankhulika/Modul-2/assets/149793653/9476532a-8c18-4616-97be-c32b3498bab6" alt="Alt Text">
</p>

#### Screenshot Output
<p align="center">
  <img src="https://github.com/Malkankhulika/Modul-2/assets/149793653/b69d1cce-d33b-4df1-82e1-4d58b0e09d76" alt="Alt Text">
</p>

### 2.  Buatlah program Input array tiga dimensi (seperti pada guided) tetapi jumlah atau ukuran elemennya diinputkan oleh user!
#### Kode Program:
```C++
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, m, l;
    cout << "Input jumlah matrix: ";
    cin >> n;
    cout << "Input jumlah baris: ";
    cin >> m;
    cout << "Input jumlah kolom: ";
    cin >> l;
    // Membuat vektor tiga dimensi
    vector<vector<vector<int>>> arr(n, vector<vector<int>>(m, vector<int>(l)));
    cout << "Input array tiga dimensi: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            for (int k = 0; k < l; k++) {
                cin >> arr[i][j][k];
            }
        }
    }
    cout << "Matrix: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Matrix " << i + 1 << ":" << endl;
        for (int j = 0; j < m; j++) {
            for (int k = 0; k < l; k++) {
                cout << arr[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
// Nama : Khulika Malkan
// NIM  : 2311110057
```

#### Output:
```C++
Masukkan ukuran array dalam tiga dimensi (x y z): 2 2 2
Input Array[0][0][0] = 1
Input Array[0][0][1] = 2
Input Array[0][1][0] = 3
Input Array[0][1][1] = 4
Input Array[1][0][0] = 5
Input Array[1][0][1] = 6
Input Array[1][1][0] = 7
Input Array[1][1][1] = 8

Elemen-elemen array yang dimasukkan:
Data Array[0][0][0] = 1
Data Array[0][0][1] = 2
Data Array[0][1][0] = 3
Data Array[0][1][1] = 4
Data Array[1][0][0] = 5
Data Array[1][0][1] = 6
Data Array[1][1][0] = 7
Data Array[1][1][1] = 8

Tampilan array:
1 2
3 4
5 6
7 8
```

#### Penjelasan
Pada output di atas, pengguna diminta untuk menginputkan ukuran array 3 dimensinya. Dimana pada kode di atas, pengguna menginputkan ukuran array 2 x 2 x 2. Berikuntnya pengguna menginputkan 8 elemen array untuk memenuhi nilai array 3 dimensi. Maka dapatlah dicetak seluruh elemen yang diinputkan lalu di tampilkan dalam bentuk array 3 dimensi.

#### Full code Screenshot:
<p align="center">
  <img src="https://github.com/Malkankhulika/Modul-2/assets/149793653/171c5f6f-9016-4a15-ab8d-4ba8671cba9c"</p>
#### Screenshot Output
<p align="center">
  <img src="https://github.com/Malkankhulika/Modul-2/assets/149793653/97609b70-71e5-4e2f-b8ab-084dc1b9e5af"</p>

### 3.  Buatlah program menu untuk mencari nilai Maksimum, Minimum dan Nilai rata– rata dari suatu array dengan input yang dimasukan oleh user!

#### Kode Program:
```C++
#include <iostream>
using namespace std;
int main() {
    int n, arr[100];
    double total, average;
    int max, min;
    cout << "Input jumlah angka: ";
    cin >> n;
    cout << "Input angka: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        total += arr[i];
    }
    average = total / n;
    max = arr[0];
    min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    cout << "Total: " << total << endl;
    cout << "Rata-rata: " << average << endl;
    cout << "Maksimum: " << max << endl;
    cout << "Minimum: " << min << endl;
    return 0;
}
// Khulika Malkan
// 2311110057
```

#### Output:
```C++
Input jumlah angka: 2
Input angka: 18
25
Total: 43
Rata-rata: 21.5       
Maksimum: 25
Minimum: 18
```

#### Screenshot Output

<p align="center">
  <img src="https://github.com/Malkankhulika/Modul-2/assets/149793653/97609b70-71e5-4e2f-b8ab-084dc1b9e5af"</p>

<p align="center">
  <img src="https://github.com/Malkankhulika/Modul-2/assets/149793653/1e1d81be-ea1c-4026-b967-9232c87a58cb"</p>


#### Penjelasan

Pada output kode di atas, user akan diminta untuk memasukkan panjang array terlebih dahulu, pada contoh memasukkan panjang array adalah 4 dengan nilai 1, 56, 1, 4. Lalu array akan di urutkan sesuai dari terkecil ke terbesar atau ascending. Setelah diurutkan maka seluruh perhitungan dapat dicetak mulai dari nilai maksimum, minimum, rata-rata, median, dan modus.

#### Full code Screenshot:
<p align="center">
  <img src="https://github.com/Malkankhulika/Modul-2/assets/149793653/96375410-7744-40d2-85fd-f1e8b2ff59fc">
</p>

#### Screenshot Output
<p align="center">
  <img src="https://github.com/Malkankhulika/Modul-2/assets/149793653/88f922f2-4e66-4ce9-9e67-b0a830ebab73"</p>

   ## Kesimpulan
Dengan mempelajari array dalam bahasa pemrograman C++ kita dapat mengetahui berbagai hal yang baru dan penting. Dimana kita dapat mengetahui bagaimana kemampuan array dalam menyimpan dan mengelola data secara efisien di dalam program. Disini, saya belajar mengenai array dengan banyak variasi atau jenis- jenisnya seperti array satu dimensi, array dua dimensi,dan array multidimensi.Array satu dimensi adalah array yang terdiri dari n buah kolom atau Array satu dimensi adalah array yang terdiri dari 1 subskrip array saja. Setiap elemen array satu dimensi dapat diakses melalui indeks yang terdapat di dalamnya. Array dua dimensi adalah array yang terdiri dari n buah baris dan m buah kolom, atau array dua dimensi juga biasa disebut sebagai array yang mempunyai dua subskrip, yaitu baris dan kolom. Bentuknya dapat sobat bayangkan seperti matriks atau tabel. dimana indeks pertama menunjukan baris dan indeks kedua menunjukan kolom. Array Multidimensi merupakan array yang serupa dengan array satu dimensi maupun array dua dimensi, namun array multidimensi dapat memiliki memori yang lebih besar. Biasanya array multidimensi digunakan untuk menyebut array dengan dimensi lebih dari dua atau array yang mempunyai lebih dari dua subskrip, seperti untuk menyebut array tiga dimensi, empat dimensi, lima dimensi dan seterusnya..

## Referensi
YO’LDASHEV, B. I. L. O. L. K. H. O. N., & MUKHRIDDIN, S. (2023). Exploring the Versatility of String and Array Functions in C++ Programming. Science Promotion, 1(1), 26-30.
Pratama, M. A. (2020). STRUKTUR DATA ARRAY DUA DIMENSI PADA PEMROGRAMAN C++.
