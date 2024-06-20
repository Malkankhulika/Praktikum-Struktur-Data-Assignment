# <h1 align="center">Laporan Praktikum Modul Graph & Tree
<p align="center">Khulika Malkan</p>
<p align="center">2311110057</p>

## Tujuan Praktikum
<pre>
a. Mahasiswa diharapkan mampu memahami graph dan tree
b. Mahasiswa diharapkan mampu mengimplementasikan graph dan tree pada pemrograman
</pre>

## Dasar Teori
### Graph
Dalam pemrograman C++, teori graf adalah studi tentang struktur data yang disebut "graf" yang terdiri dari simpul-simpul (nodes) yang terhubung oleh sisi-sisi (edges). Graf digunakan untuk merepresentasikan hubungan antara objek atau entitas yang berbeda.
Ada dua jenis graf yang umum digunakan:
- Graf berarah (directed graph): Graf berarah adalah graf di mana sisi-sisi memiliki arah tertentu. Dalam graf ini, sisi dari simpul A ke simpul B berbeda dengan sisi dari simpul B ke simpul A. Misalnya, jika Anda mewakili jaringan sosial, di mana simpul simpul mewakili pengguna dan sisi-sisi mewakili ikatan pertemanan, maka jika A berteman dengan B, itu tidak berarti bahwa B juga berteman dengan A.
- Graf tak berarah (undirected graph): Graf tak berarah adalah graf di mana sisi-sisi tidak memiliki arah tertentu. Dalam graf ini, sisi dari simpul A ke simpul B sama dengan sisi dari simpul B ke simpul A. Misalnya, jika Anda mewakili jalan-jalan di sebuah kota, dengan simpul-simpul mewakili persimpangan dan sisi-sisi mewakili jalan-jalan, maka jika ada jalan langsung dari A ke B, maka akan ada jalan langsung dari B ke A.
<pre>
Struktur Data Graph :
o Graph : struktur data yang berbentuk network/jaringan, hubungan antar elemen adalah many-to-many
o Struktur Data Linear = keterhubungan sekuensial antara entitas data
o Struktur Data Tree = keterhubungan hirarkis
o Struktur Data Graph = keterhubungan tak terbatas antara entitas data [1].
</pre>

![image](https://github.com/Malkankhulika/Modul-10/assets/149793653/cce77eb4-7fe9-47dd-a410-25065061f71a)
</p>
<pre>
jenis jenis graph:
a. Graph berarah (directed graph): Urutan simpul mempunyai arti. Misal busur AB adalah e1 sedangkan busur BA adalah e8.
b. Graph tak berarah (undirected graph): Urutan simpul dalam sebuah busur tidak diperhatikan. Misal busur e1 dapat disebut busur AB atau BA.
c. Weight Graph : Graph yang mempunyai nilai pada tiap edgenya.
</pre>

![image](https://github.com/Malkankhulika/Modul-10/assets/149793653/751d111c-8a74-42b4-9b61-2cc6a7c197da)

Di atas kita dapat melihat grafik dan matriks biaya yang lengkap yang mencakup jarak antara masing-masing desa. Kita dapat mengamati bahwa matriks biaya adalah simetris yang berarti jarak antara desa 2 hingga 3 sama dengan jarak antara desa 3 hingga 2. Masalah di sini adalah penjual keliling ingin mengetahui turnya dengan biaya minimum. Katakanlah T (1, {2,3,4}), artinya, awalnya dia di desa 1 dan kemudian dia bisa pergi ke salah satu dari {2,3,4}. Dari sana untuk mencapai simpul yang tidak dikunjungi (desa) menjadi masalah baru. Di sini kita dapat mengamati bahwa masalah utama meluas menjadi sub-masalah, ini adalah milik pemrograman dinamis [2].

### Tree
Dalam pemrograman C++, pohon atau tree adalah struktur data hierarkis yang terdiri dari simpul-simpul (nodes) yang saling terhubung. Pada pohon, satu simpul khusus disebut "akar" (root), dan setiap simpul lainnya terhubung ke simpul di atasnya melalui sisi yang disebut "tali" (edge). Setiap simpul dapat memiliki anak-anak (child) yang terhubung langsung ke simpul tersebut, dan simpul yang sama dapat memiliki beberapa anak.

Pohon sering digunakan untuk merepresentasikan hierarki data. Misalnya, pohon keluarga dapat digunakan untuk merepresentasikan struktur keluarga, dengan akar sebagai leluhur tertinggi dan anak-anak sebagai anggota keluarga. Pohon juga digunakan dalam implementasi struktur data seperti pohon biner pencarian (binary search tree) atau pohon merah-hitam (red-black tree) untuk operasi pencarian dan pengurutan efisien.

Dalam C++, pohon biasanya direpresentasikan dengan menggunakan struktur data yang terdiri dari simpul-simpul dan tali-tali yang menghubungkannya. Setiap simpul pohon dapat memiliki data terkait dan pointer ke anak-anaknya. 

Tree merupakan salah satu struktur data yang paling penting, karena banyak aplikasi menggunakan informasi dan data yang secara alami memiliki struktur hirarkis berguna dalam membantu memecahkan banyak masalah algoritmis. Pembentukan Binary Tree berdasarkan Preorder, Inorder atau Postorder Untuk membentuk suatu binary tree berdasarkan preorder, inorder atau postorder dapat dilakukan dengan syarat menggunakan 2 dari tiga penelusuran tersebut dan salah satunya harus inorder [1].

![image](https://github.com/Malkankhulika/Modul-10/assets/149793653/038d0403-d10f-4e0f-99d4-4019c9af67ef)

</p>
Operasi pada Tree:

- Create: digunakan untuk membentuk binary tree baru yang masih kosong.
- Clear: digunakan untuk mengosongkan binary tree yang sudah ada atau menghapus semua node pada binary tree.
- isEmpty: digunakan untuk memeriksa apakah binary tree masih kosong atau tidak.
- Insert: digunakan untuk memasukkan sebuah node kedalam tree.
- Find: digunakan untuk mencari root, parent, left child, atau right child dari suatu node dengan syarat tree tidak boleh kosong.
- Update: digunakan untuk mengubah isi dari node yang ditunjuk oleh pointer current dengan syarat tree tidak boleh kosong.
- Retrive: digunakan untuk mengetahui isi dari node yang ditunjuk pointer current dengan syarat tree tidak boleh kosong.
- Delete Sub: digunakan untuk menghapus sebuah subtree (node beserta seluruh descendant-nya) yang ditunjuk pointer current dengan syarat tree tidak boleh kosong.
- Characteristic: digunakan untuk mengetahui karakteristik dari suatu tree. Yakni size, height, serta average lenght-nya.
- Traverse: digunakan untuk mengunjungi seluruh node-node pada tree dengan cara traversal. Terdapat 3 metode traversal yang dibahas dalam modul ini yakni Pre-Order, In-Order, dan Post-Order [3].
	- Pre-Order
![image](https://github.com/Malkankhulika/Modul-10/assets/149793653/ac763470-41c7-42e2-ac65-7347733ebb2b)

Algoritma untuk Inorder Traversal: Dalam urutan (pohon)
- Lintasi subpohon kiri, yaitu panggil Inorder(kiri->subpohon) Kunjungi akarnya.
- Lintasi subpohon kanan, yaitu panggil Inorder(kanan->subpohon)

Kegunaan Inorder Traversal: Dalam kasus pohon pencarian biner (BST), traversal Inorder memberikan node dalam urutan yang tidak menurun. Untuk mendapatkan node BST dalam urutan tidak meningkat, dapat digunakan variasi traversal Inorder di mana traversal Inorder dibalik. Traversal inorder dapat digunakan untuk menikmati ekspresi aritmatika yang disimpan dalam pohon ekspresi.
 
	- In-Order
![image](https://github.com/Malkankhulika/Modul-10/assets/149793653/1ff9a753-3d53-4d1a-80a6-2afe0fb2e296)

Algoritma untuk Traversal Preorder: Praorder(pohon)
- Kunjungi akarnya.
- Lintasi subpohon kiri, yaitu panggil Praorder(kiri->subpohon)
- Lintasi subpohon kanan, yaitu panggilan Preorder(kanan->subpohon)

Preorder Traversal Kegunaan: Traversal praorder digunakan untuk membuat salinan pohon. Traversal praorder juga digunakan untuk mendapatkan ekspresi awalan pada pohon ekspresi. 

	- Post-Order
![image](https://github.com/Malkankhulika/Modul-10/assets/149793653/68931988-063b-4e60-8eb7-eb749778622d)

Algoritma untuk Traversal Postorder: Algoritma Postorder (pohon)
- Lintasi subpohon kiri, yaitu panggil Postorder(kiri->subpohon)
- Lintasi subpohon kanan, yaitu panggilan Postorder(kanan->subpohon)
- Kunjungi akarnya

Kegunaan Traversal Postorder: Traversal postorder digunakan untuk menghapus pohon. Lihat pertanyaan untuk menghapus pohon untuk detailnya. Traversal postorder juga berguna untuk mendapatkan ekspresi postfix dari pohon ekspresi. Traversal postorder dapat membantu algoritma pengumpulan sampah, khususnya dalam sistem yang menggunakan manajemen memori manual.

## Guided
### 1. Program Graph
#### Sourcecode
```C++
#include <iostream>
#include <iomanip>
using namespace std;

string simpul[7] = {"Ciamis", "Bandung", "Bekasi", "Tasikmalaya", "Cianjur", "Purwokerto", "Yogyakarta"};

int busur[7][7] = {
	{0, 7, 8, 0, 0, 0, 0},
	{0, 0, 5, 0, 9, 15, 0},
	{0, 5, 0, 9, 5, 0, 0},
	{0, 0, 0, 2, 4, 0, 8},
	{3, 0, 0, 1, 0, 0, 0},
	{0, 0, 7, 0, 0, 9, 4},
	{0, 0, 0, 0, 8, 0, 0}
};

void tampilGraph() {
	for (int baris = 0; baris < 7; baris++) {
		cout << simpul[baris] << ": ";
		for (int kolom = 0; kolom < 7; kolom++) {
			if (busur[baris][kolom] != 0)
				cout << " -> " << simpul[kolom] << "(" << busur[baris][kolom] << ")";
		}
		cout << endl;
	}
}

int main() {
	tampilGraph();
	return 0;
}

//Khulika Malkan
//2311110057
```
#### Full Code Screenshot
![image](https://github.com/Malkankhulika/Modul-10/assets/149793653/8c9ff158-c630-4a3d-885d-01dc695bcdbb)


#### Output
![image](https://github.com/Malkankhulika/Modul-10/assets/149793653/73318b7e-01c1-44bc-8bd1-012f587457a2)


#### Penjelasan
a. Menyertakan Header File:
- #include <iostream>: Header file ini menyediakan fungsi dasar untuk input dan output data, seperti cin dan cout.
- #include <iomanip>: Header file ini menyediakan fungsi untuk memformat output teks, seperti setw() dan setprecision(). using namespace std;: Baris ini mendeklarasikan penggunaan namespace std sehingga nama-nama fungsi dan variabel dari library standar C++ dapat digunakan tanpa perlu menyertakan std:: di depannya.

b. Deklarasi Variabel:
- string simpul[7]: Array string yang menyimpan nama 7 kota: "Ciamis", "Bandung", "Bekasi", "Tasikmalaya", "Cianjur", "Purwokerto", "Yogyakarta".
- int busur[7][7]: Array dua dimensi berukuran 7x7 yang menyimpan jarak antar kota. Nilai elemen busur[i][j] menunjukkan jarak dari kota pada indeks ke-i ke kota pada indeks ke-j.

c. Fungsi tampilGraph():
- Fungsi ini menampilkan representasi graf terarah antar kota.
- Looping for pertama (baris 10-15) iterasi melalui setiap baris dalam array simpul.
- Di dalam loop for pertama, nama kota (diperoleh dari simpul[baris]) dicetak.
- Looping for kedua (baris 11-14) iterasi melalui setiap kolom dalam baris array busur yang sesuai dengan baris loop for pertama.
- Di dalam loop for kedua, jika elemen busur[baris][kolom] bukan 0 (artinya ada koneksi antara kota pada indeks ke-i dan ke-j), maka nama kota tujuan (diperoleh dari simpul[kolom]) dan jaraknya (diperoleh dari busur[baris][kolom]) dicetak.
- Baris 16 mencetak baris baru untuk memisahkan representasi setiap kota.

d. Fungsi main():
- Fungsi main() adalah titik awal program.
- Fungsi ini memanggil fungsi tampilGraph() untuk menampilkan representasi graf terarah.
- Fungsi main() kemudian mengembalikan nilai 0, yang menunjukkan bahwa program telah berhasil dijalankan.
  
### 2. Program Tree
#### Sourcecode
```C++
#include<iostream>
#include<iomanip> // Menambahkan library iomanip untuk format output
using namespace std;

struct pohon {
    pohon * kanan;
    char data;
    pohon * kiri;
};

//Deklarasi variabel global
pohon * simpul;
pohon * root;
pohon * saatIni;
pohon * helperA;
pohon * helperB;
pohon * alamat[256];

// Fungsi Inisiasi
void inisialisasi(){
    root = NULL;
    saatIni = NULL;
    helperA = NULL;
    helperB = NULL;
}

// Fungsi membuat simpul baru
void simpulBaru(char dataMasukkan){
    simpul = new pohon;
    simpul->data = dataMasukkan;
    simpul->kanan = NULL;
    simpul->kiri = NULL;
}

//Fungsi membuat simpul akar
void simpulAkar(){
    if (root == NULL) {
        char dataAnda;
        cout << "Masukkan data akar: ";
        cin >> dataAnda;
        simpulBaru(dataAnda);
        root = simpul;
        cout << "Simpul akar berhasil dibuat...\n";
    } else {
        cout << "Simpul akar sudah ada...\n";
    }
}

//Fungsi menambah simpul
void tambahSimpul() {
    if (root != NULL) {
        int i = 1, j = 1, penanda = 0;
        char dataUser;
        alamat[i] = root;

        while (penanda == 0 && j < 25) {
            cout << "Masukkan data kiri : ";
            cin >> dataUser;
            if (dataUser != '0') {
                simpulBaru(dataUser);
                saatIni = alamat[i];
                saatIni->kiri = simpul;
                j++;
                alamat[j] = simpul;
            } else {
                penanda = 1;
                j++;
                alamat[j] = NULL;
            }
            if (penanda == 0) {
                cout << "Masukkan data kanan : ";
                cin >> dataUser;
                if (dataUser != '0') {
                    simpulBaru(dataUser);
                    saatIni = alamat[i];
                    saatIni->kanan = simpul;
                    j++;
                    alamat[j] = simpul;
                } else {
                    penanda = 1;
                    j++;
                    alamat[j] = NULL;
                }
            }
            i++;
        }
    }
}

//Fungsi membaca pohon
void bacaPohon(){
    if (root != NULL) {
        int i = 1, n = 1, pencacah = 0;
        cout << endl;
        while (alamat[i] != NULL){
            saatIni = alamat[i];
            if (saatIni->data < 10) {
                cout << " " << saatIni->data << " "; // Menambahkan spasi untuk memformat output agar rapi
            } else {
                cout << saatIni->data << " ";
            }
            pencacah++;
            if (pencacah == n){
                cout << endl;
                n = n * 2;
                pencacah = 0;
            }
            i++;
        }
    }
}

int main(){
    inisialisasi();
    simpulAkar();
    tambahSimpul();
    bacaPohon();
    return 0;
}

//Khulika Malkan
//2311110057
```
#### Full Code Screenshot
![image](https://github.com/Malkankhulika/Modul-10/assets/149793653/194a7a56-913e-419a-a568-0865bb4c7293)


#### Output
![image](https://github.com/Malkankhulika/Modul-10/assets/149793653/67eb8cff-9c99-4054-8c8c-e6b5da3012cc)


#### Penjelasan
a. Inisialisasi: Fungsi inisialisasi() menetapkan nilai awal untuk variabel global yang terkait dengan pohon biner:
- root: Menunjuk ke simpul akar pohon.
- saatIni: Menunjuk ke simpul yang sedang diproses.
- helperA: Digunakan untuk operasi bantu dalam algoritma pohon.
- helperB: Digunakan untuk operasi bantu dalam algoritma pohon.
- alamat: Array yang menyimpan alamat simpul pohon.

b. Membuat Simpul Baru: 
- Fungsi simpulBaru(char dataMasukkan) mengalokasikan memori untuk simpul baru, mengisi data yang diberikan ke dalam simpul, dan menyetel tautan kiri dan kanan ke NULL.
  
c. Membuat Simpul Akar:
- Fungsi simpulAkar() meminta pengguna untuk memasukkan data akar, membuat simpul baru dengan data tersebut, dan menetapkan simpul tersebut ke variabel root.

d. Menambah Simpul: Fungsi tambahSimpul() menambahkan simpul baru ke pohon biner secara interaktif:
- Memeriksa apakah terdapat simpul akar.
- Melakukan loop untuk memungkinkan pengguna memasukkan data simpul kiri dan kanan secara berulang.
- Membuat simpul baru untuk setiap data yang dimasukkan.
- Memperbarui tautan kiri dan kanan simpul yang sesuai.
- Menambahkan alamat simpul baru ke array alamat.
  
e. Membaca Pohon: Fungsi bacaPohon() melakukan traversal level order pada pohon biner dan mencetak data setiap simpul.
- Melakukan loop while untuk iterasi melalui level pohon.
- Di dalam loop, iterasi melalui simpul-simpul pada level saat ini dan mencetak datanya.
- Menambahkan spasi untuk memformat output agar rapi.

f. Fungsi Utama (main()):
- Memanggil fungsi inisialisasi() untuk menginisialisasi variabel global.
- Memanggil fungsi simpulAkar() untuk membuat simpul akar.
- Memanggil fungsi tambahSimpul() untuk memungkinkan pengguna menambahkan simpul baru ke pohon.
- Memanggil fungsi bacaPohon() untuk mencetak representasi pohon biner.
- Mengembalikan nilai 0 untuk menunjukkan eksekusi program yang berhasil.

## Unguided 
### 1. Buatlah program graph dengan menggunakan inputan user untuk menghitung jarak dari sebuah kota ke kota lainnya.
![image](https://github.com/Malkankhulika/Modul-10/assets/149793653/87e1a42e-f8ad-44b4-9971-d0fc2d8dab4c)

#### Kode Program
```C++
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int KhulikaMalkan_2311110057;
    cout << "Silahkan masukkan jumlah simpul: ";
    cin >> KhulikaMalkan_2311110057;

    vector<string> nodes(KhulikaMalkan_2311110057);
    vector<vector<int>>
distances(KhulikaMalkan_2311110057,
vector<int>(KhulikaMalkan_2311110057));

// Masukkan nama simpul
    cout << "Silakan masukkan nama simpul" << endl;
    for (int i = 0; i < KhulikaMalkan_2311110057;
i++) {
    cout << "Simpul " << i + 1 << " : ";
    cin >> nodes[i];
}

// Masukkan bobot antar simpul
    cout << "Silakan masukkan bobot antar simpul" << endl;
    for (int i = 0; i < KhulikaMalkan_2311110057;
i++) {
    for (int j = 0; j < KhulikaMalkan_2311110057; j++) {
    cout << "" << nodes[i] << " ---> " <<
    nodes[j] << " = ";
    cin >> distances[i][j];
    }
}
    cout << "\t";
    for (int i = 0; i < KhulikaMalkan_2311110057; i++) {
    cout << nodes[i] << "\t";
}
    cout << endl;
    for (int i = 0; i < KhulikaMalkan_2311110057; i++) {
    cout << nodes[i] << "\t";
    for (int j = 0; j < KhulikaMalkan_2311110057; j++) {
    cout << distances[i][j] << "\t";
    }
    cout << endl;
    }
return 0;
}

// Khulika Malkan
// 2311110057
```
#### Full Code Screenshot
![image](https://github.com/Malkankhulika/Modul-10/assets/149793653/f8cc70d8-a15b-4993-b347-67a32c28604b)


#### Output:
![image](https://github.com/Malkankhulika/Modul-10/assets/149793653/013f4f0c-5a8f-4f84-b5d5-0d4e489f087e)


#### Penjelasan:
Fungsi main() merupakan entry point dari program yang akan dieksekusi terlebih dahulu. Pada fungsi main(), terdapat beberapa langkah seperti berikut:
- Mendeklarasikan variabel muhammadrizkisafero_2211102152 sebagai integer. Variabel ini akan digunakan untuk menyimpan jumlah simpul yang akan dimasukkan.
- Menampilkan pesan "Silahkan masukkan jumlah simpul: " menggunakan cout dan mendapatkan input jumlah simpul dari pengguna menggunakan cin.
- Membuat vector nodes dengan ukuran muhammadrizkisafero_2211102152 yang bertipe string. Vector ini akan digunakan untuk menyimpan nama-nama simpul.
- Membuat vector distances dengan ukuran muhammadrizkisafero_2211102152xmuhammadrizkisafero_2211102152 yang bertipe integer. Vector ini akan digunakan untuk menyimpan bobot antar simpul.
- Menampilkan pesan "Silakan masukkan nama simpul" menggunakan cout.
- Melakukan loop sebanyak muhammadrizkisafero_2211102152 kali untuk menginputkan nama-nama simpul dari pengguna.

### 2. Modifikasi guided tree diatas dengan program menu menggunakan input data tree dari user dan tampilkan pada pre-order, inorder, dan post order!
#### Kode Program
```C++
#include<iostream>
#include<iomanip> // Menambahkan library iomanip untuk format output
using namespace std;

struct pohon {
    pohon * kanan;
    char data;
    pohon * kiri;
};

// Deklarasi variabel global
pohon * simpul;
pohon * root;
pohon * saatIni;
pohon * helperA;
pohon * helperB;
pohon * alamat[256];

// Fungsi Inisiasi
void inisialisasi(){
    root = NULL;
    saatIni = NULL;
    helperA = NULL;
    helperB = NULL;
}

// Fungsi membuat simpul baru
void simpulBaru(char dataMasukkan){
    simpul = new pohon;
    simpul->data = dataMasukkan;
    simpul->kanan = NULL;
    simpul->kiri = NULL;
}

// Fungsi membuat simpul akar
void simpulAkar(){
    if (root == NULL) {
        char dataAnda;
        cout << "Silahkan masukkan data : ";
        cin >> dataAnda;
        simpulBaru(dataAnda);
        root = simpul;
        cout << "Root terbentuk...\n";
    } else {
        cout << "Root sudah ada...\n";
    }
}

// Fungsi menambah simpul
void tambahSimpul() {
    if (root != NULL) {
        int i = 1, j = 1, penanda = 0;
        char dataUser;
        alamat[i] = root;

        while (penanda == 0 && j < 25) {
            cout << "Masukkan data kiri : ";
            cin >> dataUser;
            if (dataUser != '0') {
                simpulBaru(dataUser);
                saatIni = alamat[i];
                saatIni->kiri = simpul;
                j++;
                alamat[j] = simpul;
            } else {
                penanda = 1;
                j++;
                alamat[j] = NULL;
            }
            if (penanda == 0) {
                cout << "Masukkan data kanan : ";
                cin >> dataUser;
                if (dataUser != '0') {
                    simpulBaru(dataUser);
                    saatIni = alamat[i];
                    saatIni->kanan = simpul;
                    j++;
                    alamat[j] = simpul;
                } else {
                    penanda = 1;
                    j++;
                    alamat[j] = NULL;
                }
            }
            i++;
        }
    }
}

// Fungsi membaca pohon
void bacaPohon(){
    if (root != NULL) {
        int i = 1, n = 1, pencacah = 0;
        cout << endl;
        while (alamat[i] != NULL){
            saatIni = alamat[i];
            if (saatIni->data < 10) {
                cout << " " << saatIni->data << " "; // Menambahkan spasi untuk memformat output agar rapi
            } else {
                cout << saatIni->data << " ";
            }
            pencacah++;
            if (pencacah == n){
                cout << endl;
                n = n * 2;
                pencacah = 0;
            }
            i++;
        }
    }
}

// Fungsi untuk menampilkan menu
void tampilkanMenu() {
    cout << endl << "Khulika Malkan (2311110057):\n";
    cout << endl << "Menu:\n";
    cout << "1. Pre-order\n";
    cout << "2. In-order\n";
    cout << "3. Post-order\n";
    cout << "4. Keluar dari program\n"; // Menambahkan opsi keluar dari program
    cout << "Pilih menu (1-4): ";
}

// Fungsi Pre-order
void preOrder(pohon* node) {
    if (node != NULL) {
        cout << node->data << " ";
        preOrder(node->kiri);
        preOrder(node->kanan);
    }
}

// Fungsi In-order
void inOrder(pohon* node) {
    if (node != NULL) {
        inOrder(node->kiri);
        cout << node->data << " ";
        inOrder(node->kanan);
    }
}

// Fungsi Post-order
void postOrder(pohon* node) {
    if (node != NULL) {
        postOrder(node->kiri);
        postOrder(node->kanan);
        cout << node->data << " ";
    }
}

int main(){         // 2311110057
    inisialisasi();
    simpulAkar();
    tambahSimpul();
    bacaPohon();

    int pilihan = 0;
    while (pilihan != 4) {
        tampilkanMenu();
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Pre-order traversal: ";
                preOrder(root);
                break;
            case 2:
                cout << "In-order traversal: ";
                inOrder(root);
                break;
            case 3:
                cout << "Post-order traversal: ";
                postOrder(root);
                break;
            case 4:
                cout << "Selesai. Terima kasih!";
                break;
            default:
                cout << "Pilihan tidak valid.";
        }
    }

    return 0;
}

//Khulika Malkan
//2311110057
```
#### Full Code Screenshot
![image](https://github.com/Malkankhulika/Modul-10/assets/149793653/79e16dd0-37de-4093-b225-8c7e08167d7b)


#### Output:
![image](https://github.com/Malkankhulika/Modul-10/assets/149793653/56581956-0301-4d99-9cab-a4a8f2fb1b2b)


![image](https://github.com/Malkankhulika/Modul-10/assets/149793653/e39b0a15-945b-4339-a120-75661458cdce)


#### Penjelasan:
a. Struktur Data Pohon Biner: Struktur pohon didefinisikan untuk mewakili simpul dalam pohon biner:
- kanan: Pointer ke simpul anak kanan.
- data: Menyimpan data (karakter) pada simpul.
- kiri: Pointer ke simpul anak kiri.
  
b. Variabel Global: Variabel global berikut digunakan untuk melacak status pohon:
- root: Pointer ke simpul akar pohon.
- saatIni: Pointer ke simpul yang sedang diproses.
- helperA: Digunakan untuk operasi bantu dalam algoritma pohon.
- helperB: Digunakan untuk operasi bantu dalam algoritma pohon.
- alamat: Array yang menyimpan alamat simpul pohon.

c. Fungsi-fungsi:
- inisialisasi(): Menginisialisasi variabel global dengan nilai awal.
- simpulBaru(char dataMasukkan): Membuat simpul baru dengan data yang diberikan dan menetapkan tautan kiri dan kanan ke NULL.
- simpulAkar(): Meminta pengguna untuk memasukkan data akar, membuat simpul baru, dan menetapkannya sebagai simpul akar.
- tambahSimpul(): Menambahkan simpul baru ke pohon secara interaktif.
- bacaPohon(): Melakukan traversal level order pada pohon dan mencetak data setiap simpul.
- tampilkanMenu(): Menampilkan menu pilihan traversal.
- preOrder(pohon* node): Melakukan traversal pre-order pada pohon biner.
- inOrder(pohon* node): Melakukan traversal in-order pada pohon biner.
- postOrder(pohon* node): Melakukan traversal post-order pada pohon biner.

d. Fungsi Utama (main()):
- Memanggil fungsi inisialisasi() untuk menginisialisasi variabel global.
- Memanggil fungsi simpulAkar() untuk membuat simpul akar.
- Memanggil fungsi tambahSimpul() untuk memungkinkan pengguna menambahkan simpul baru ke pohon.
- Memanggil fungsi bacaPohon() untuk mencetak representasi pohon biner.
- Memasuki loop while untuk menampilkan menu dan memproses pilihan pengguna:
  	- Menampilkan menu menggunakan fungsi tampilkanMenu().
  	- Membaca pilihan pengguna menggunakan cin.
  	- Menggunakan switch untuk menjalankan fungsi traversal yang sesuai berdasarkan pilihan pengguna.
  	- Memproses pilihan 4 untuk keluar dari program.
- Mengembalikan nilai 0 untuk menunjukkan eksekusi program yang berhasil.

e. Modifikasi:
- Menambahkan menu untuk memilih jenis traversal yang diinginkan.
- Menambahkan fungsi tampilkanMenu(), preOrder(), inOrder(), dan postOrder() untuk implementasi traversal pre-order, in-order, dan post-order.
- Memperbarui fungsi main() untuk mengintegrasikan menu dan pemrosesan pilihan.


## Kesimpulan
- Penggunaan teori graf dalam pemrograman sangat luas, dan dapat ditemukan dalam berbagai aplikasi seperti jaringan komputer, optimisasi rute, kecerdasan buatan, pemrosesan citra, dan banyak lagi.
- Implementasi pohon dalam C++ dapat bervariasi tergantung pada jenis pohon yang digunakan dan operasi yang ingin dilakukan. Pohon juga dapat dikombinasikan dengan konsep lain seperti pohon AVL atau pohon B untuk memperoleh kinerja yang lebih baik dalam operasi tertentu.
- Pohon sering digunakan untuk merepresentasikan hierarki data. Misalnya, pohon keluarga dapat digunakan untuk merepresentasikan struktur keluarga, dengan akar sebagai leluhur tertinggi dan anak-anak sebagai anggota keluarga. Pohon juga digunakan dalam implementasi struktur data seperti pohon biner pencarian (binary search tree) atau pohon merah-hitam (red-black tree) untuk operasi pencarian dan pengurutan efisien.


## Referensi
[1]	Anita Sindar, R. M. S. (2019). Struktur Data Dan Algoritma Dengan C++ (Vol. 1). CV. AA. RIZKY.

[2]	Suryawan, F., Thamrin, H., Anggoro, D. A., Supriyanti, W., & Ardiyanto, Y. (2020). Modul Praktikum Algoritma & Struktur Data Versi 4.3. Muhammadiyah University Press.

[3] 	https://www.geeksforgeeks.org/tree-traversals-inorder-preorder-and-postorder/
