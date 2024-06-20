# <h1 align="center">Laporan Praktikum Modul Priority Queue dan Heaps</h1>
<p align="center">Khulika Malkan</p>
<p align="center">2311110057</p>

## Dasar Teori
Antrean prioritas adalah jenis antrian khusus yang setiap elemennya dikaitkan dengan nilai prioritas . Dan, elemen dilayani berdasarkan prioritasnya. Artinya, elemen dengan prioritas lebih tinggi dilayani terlebih dahulu. Namun, jika elemen dengan prioritas yang sama muncul, maka elemen tersebut akan dilayani sesuai urutannya dalam antrian.
Menetapkan Nilai Prioritas Umumnya, nilai elemen itu sendiri dipertimbangkan untuk menetapkan prioritas. Misalnya, Elemen dengan nilai tertinggi dianggap sebagai elemen dengan prioritas tertinggi. Namun, dalam kasus lain, kita dapat mengasumsikan elemen dengan nilai terendah sebagai elemen dengan prioritas tertinggi [1].

Priority Queue adalah struktur data khusus yang memungkinkan kita menyimpan elemen-elemen dengan nilai prioritas tertentu. Konsep dasar Priority Queue mirip dengan antrian biasa, namun perbedaannya adalah setiap elemen dalam Priority Queue memiliki nilai prioritas yang menentukan urutan elemen saat diambil. Elemen dengan nilai prioritas tertinggi akan diambil terlebih dahulu, bukan elemen yang paling lama berada dalam antrian [2].

### Priority Queue
![image](https://github.com/Malkankhulika/Modul-8/assets/149793653/aed386bd-67f4-456e-b64e-221023af7e1b)

Gambar diatas menunjukkan pohon biner dengan kunci terendah dan kunci tertinggi [3].
- Kunci terendah adalah kunci yang paling dekat dengan bagian bawah pohon.
- Kunci tertinggi adalah kunci yang paling dekat dengan bagian atas pohon.
- Kunci bawah adalah kunci yang paling dekat dengan tengah pohon.
- Kunci tengah adalah kunci yang paling dekat dengan bagian bawah pohon.
- Kunci tertinggi adalah kunci yang paling dekat dengan bagian atas pohon.


Pohon tersebut adalah heap biner, yang merupakan jenis struktur data heap yang memiliki sifat-sifat berikut:
- Setiap node memiliki paling banyak dua node anak.
- Nilai setiap node lebih besar dari atau sama dengan nilai node anaknya (untuk heap maks) atau lebih kecil dari atau sama dengan nilai node anaknya (untuk heap min).
- Sifat heap dipertahankan untuk semua node di pohon.


Pohon dalam gambar adalah heap maks, yang berarti bahwa nilai setiap node lebih besar dari atau sama dengan nilai node anaknya. Kunci terendah dalam pohon adalah 2, dan kunci tertinggi adalah 15.
Pohon tersebut juga merupakan pohon biner penuh, yang berarti bahwa setiap level pohon terisi penuh, kecuali mungkin level terakhir. Level terakhir mungkin memiliki beberapa node yang hilang di sisi kanan.

Pohon tersebut dapat direpresentasikan dalam array sebagai berikut:
H = [2, 3, 15, 6, 10, 12, 8, 10, 7]
Indeks setiap node dalam array sesuai dengan levelnya di pohon. Node root berada pada indeks 0, anak kirinya berada pada indeks 1, anak kanannya berada pada indeks 2, dan seterusnya.

Sifat heap dapat dipertahankan dengan menggunakan operasi berikut:
- Memasukkan: Memasukkan elemen baru ke dalam heap.
- Mengambil Maksimum: Menghapus elemen dengan nilai maksimum dari heap.
- Ubah Prioritas: Mengubah prioritas elemen dalam heap.


Algoritma berikut dapat digunakan untuk mengimplementasikan operasi ini:
- Heapify: Mengubah pohon biner arbitrer menjadi heap.
- Masukan Naik: Memasukkan elemen baru ke dalam heap.
- Turunkan: Memulihkan properti heap setelah elemen dimasukkan atau prioritasnya diubah.
- Mengambil Maksimum: Menghapus elemen dengan nilai maksimum dari heap.
- Naikkan: Memulihkan properti heap setelah elemen dihapus.

### Heaps
![image](https://github.com/Malkankhulika/Modul-8/assets/149793653/71a8d705-7e95-464a-baf0-0bc0f0643da9)
Heap Biner:
Jenis struktur data heap yang menggunakan pohon biner untuk menyimpan elemen.
Memenuhi properti heap:
Node induk memiliki nilai yang lebih besar dari atau sama dengan nilai anak-anaknya (untuk heap maks) atau nilai yang lebih kecil dari atau sama dengan nilai anak-anaknya (untuk heap min).

Operasi Heap Biner:
- Memasukkan: Menambahkan elemen baru ke heap.
- Menghapus: Menghapus elemen dengan prioritas tertinggi dari heap.
- Mengubah Prioritas: Memperbarui prioritas elemen yang sudah ada di heap.
- Melihat Maksimum: Mengambil nilai elemen dengan prioritas tertinggi tanpa menghapusnya.
Implementasi Heap Biner:

Dapat diimplementasikan menggunakan array atau pohon biner.
- Array: Mudah diimplementasikan, tetapi tidak efisien untuk operasi seperti Mengubah Prioritas dan Melihat Maksimum.
- Pohon Biner: Lebih efisien untuk operasi Mengubah Prioritas dan Melihat Maksimum, tetapi lebih kompleks untuk diimplementasikan.


Heap Maks vs Heap Min [4]:
- Heap Maks: Elemen dengan nilai tertinggi diprioritaskan.
- Heap Min: Elemen dengan nilai terendah diprioritaskan.

## Guided
### 1. Guided modul 9 Priority & Heaps
#### Kode Program
```C++
#include <iostream>
#include <algorithm>

int H[50];
int heapSize = -1;

int parent(int i) {
	return (i - 1) / 2;
}

int leftChild(int i) {
	return ((2 * i) + 1);
}

int rightChild(int i) {
	return ((2 * i) + 2);
}

void shiftUp(int i) {
	while (i > 0 && H[parent(i)] < H[i]) {
		std::swap(H[parent(i)], H[i]);
		i = parent(i);
	}
}

void shiftDown(int i) {
	int maxIndex = i;
	int l = leftChild(i);
	if (l <= heapSize && H[l] > H[maxIndex]) {
		maxIndex = l;
	}
	int r = rightChild(i);
	if (r <= heapSize && H[r] > H[maxIndex]) {
		maxIndex = r;
	}
	if (i != maxIndex) {
		std::swap(H[i], H[maxIndex]);
		shiftDown(maxIndex);
	}
}

void insert(int p) {
	heapSize = heapSize + 1;
	H[heapSize] = p;
	shiftUp(heapSize);
}

int extractMax() {
	int result = H[0];
	H[0] = H[heapSize];
	heapSize = heapSize - 1;
	shiftDown(0);
	return result;
}

void changePriority(int i, int p) {
	int oldp = H[i];
	H[i] = p;
	if (p > oldp) {
		shiftUp(i);
	} else {
		shiftDown(i);
	}
}

int getMax() {
	return H[0];
}

void remove(int i) {
	H[i] = getMax() + 1;
	shiftUp(i);
	extractMax();
}

int main() {
	insert(45);
	insert(20);
	insert(14);
	insert(12);
	insert(31);
	insert(7);
	insert(11);
	insert(13);
	insert(7);

	std::cout << "Priority Queue : ";
	for (int i = 0; i <= heapSize; ++i) {
		std::cout << H[i] << " ";
	}

	std::cout << "\n";

	std::cout << "Node with maximum priority : " << extractMax() << "\n";
	
	std::cout << "Priority queue after extracting maximum : ";

	for (int i = 0; i <= heapSize; ++i) {
		std::cout << H[i] << " ";
	}
	std::cout << "\n";

	changePriority(2, 49);
	std::cout << "Priority queue after priority change : ";
	for (int i = 0; i <= heapSize; ++i) {
		std::cout << H[i] << " ";
	}
	std::cout << "\n";

	remove(3);
	std::cout << "Priority queue after removing the element : ";
	for (int i = 0; i <= heapSize; ++i) {
		std::cout << H[i] << " ";
	}
	
	return 0;
}

//Khulika Malkan
//2311110057
```
#### Full Code Screenshot
![image](https://github.com/Malkankhulika/Modul-8/assets/149793653/a86eb3a7-41e7-4056-bc9c-17944a7d8576)


#### Output
![image](https://github.com/Malkankhulika/Modul-8/assets/149793653/9ce4ed5c-1e4f-4992-9390-5e8dc4209c68)


#### Penjelasan
##### Struktur Data:
- H: Array integer dengan ukuran 50 untuk menyimpan elemen antrian prioritas. Array ini menampung nilai-nilai yang ada dalam antrian.
- heapSize: Variabel integer yang melacak jumlah elemen yang saat ini ada di antrian. Variabel ini mencatat berapa banyak elemen yang terisi dalam array H.
  
##### Fungsi:
- parent(i): Menghitung indeks node induk dari node pada indeks i di heap. Fungsi ini menghitung indeks induk dari node yang diberikan pada indeks i.
- leftChild(i): Menghitung indeks node anak kiri dari node pada indeks i di heap. Fungsi ini menghitung indeks anak kiri dari node yang diberikan pada indeks i.
- rightChild(i): Menghitung indeks node anak kanan dari node pada indeks i di heap. Fungsi ini menghitung indeks anak kanan dari node yang diberikan pada indeks i.
- shiftUp(i): Mempertahankan properti heap max dengan menukar node pada indeks i dengan induknya jika node memiliki prioritas lebih tinggi (nilai lebih besar) daripada induknya. Proses ini berlanjut hingga node mencapai posisinya yang benar di heap. Fungsi ini menukar node dengan prioritas lebih tinggi dengan induknya agar struktur heap max terjaga.
- shiftDown(i): Mempertahankan properti heap max dengan menukar node pada indeks i dengan anaknya yang lebih besar (jika ada) jika node memiliki prioritas lebih rendah daripada anaknya. Proses ini berlanjut hingga node mencapai posisinya yang benar di heap. Fungsi ini menukar node dengan prioritas lebih rendah dengan anaknya yang lebih besar agar struktur heap max terjaga.
- insert(p): Memasukkan elemen dengan nilai p ke dalam antrian prioritas. Pertama, ia meningkatkan heapSize dan menempatkan elemen di akhir array. Kemudian, ia memanggil shiftUp untuk memastikan properti heap max dipertahankan. Fungsi ini memasukkan elemen baru ke dalam antrian dan kemudian menaikkannya ke posisinya yang benar dalam heap menggunakan shiftUp.
- **extractMax(): Menghapus dan mengembalikan elemen dengan prioritas tertinggi (nilai terbesar) dari antrian. Ia menukar elemen pertama (dengan prioritas tertinggi) dengan elemen terakhir dan kemudian mengurangi heapSize. Terakhir, ia memanggil shiftDown pada node root (sekarang berisi elemen terakhir yang sebelumnya) untuk mempertahankan properti heap max. Fungsi ini mengeluarkan elemen dengan prioritas tertinggi dari antrian dan kemudian menurunkan elemen yang tersisa agar struktur heap max terjaga.
- changePriority(i, p): Mengubah prioritas (nilai) elemen pada indeks i dalam antrian menjadi p. Ia memeriksa apakah prioritas baru lebih tinggi atau lebih rendah dari yang lama. Jika lebih tinggi, ia memanggil shiftUp untuk memindahkan elemen ke atas di heap. Jika tidak, ia memanggil shiftDown untuk memindahkan elemen ke bawah. Fungsi ini mengubah prioritas elemen yang sudah ada dalam antrian.
- `getMax(): Mengembalikan elemen dengan prioritas tertinggi (nilai terbesar) dalam antrian tanpa menghapusnya. Fungsi ini mengembalikan elemen dengan prioritas tertinggi tanpa mengeluarkannya dari antrian.
- remove(i): Menghapus elemen pada indeks i dari antrian prioritas. Ia mengganti nilai pada indeks i dengan nilai yang lebih tinggi daripada elemen lain di antrian (dicapai dengan menambahkan 1 ke maksimum saat ini). Kemudian, ia memanggil shiftUp untuk memindahkan elemen ini dengan prioritas tinggi secara artifisial ke atas di heap. Terakhir, ia memanggil extractMax untuk secara efektif menghapus elemen pada indeks i yang didorong ke atas. Fungsi ini menghapus elemen dari antrian dengan indeks yang diberikan.
  
##### Fungsi Utama:
- Fungsi main mendemonstrasikan penggunaan berbagai fungsi.
- Ini memasukkan beberapa elemen ke dalam antrian.
- Ini mencetak keadaan awal antrian.
- Ini mengekstrak elemen maksimum dan mencetak antrian yang dimodifikasi.
- Ini mengubah prioritas elemen dan mencetak antrian yang diperbarui.
- Ini menghapus elemen menggunakan indeksnya dan mencetak antrian yang dihasilkan.
Fungsi main menunjukkan bagaimana menggunakan fungsi-fungsi yang telah didefinisikan untuk mengoperasikan antrian prioritas, seperti :
C++
	insert(45);
	insert(20);
	insert(14);
	insert(12);
	insert(31);
	insert(7);
	insert(11);
	insert(13);
	insert(7);



## Unguided 
### 1. Modifikasi guided diatas yang mana heap dikonstruksi secara manual berdasarkan user

#### Kode Program
```C++
#include <iostream>
#include <algorithm>
#include <vector>

std::vector<int> H;
int heapSize = -1;

int parent(int i) {
    return (i - 1) / 2;
}

int leftChild(int i) {
    return (2 * i) + 1;
}

int rightChild(int i) {
    return (2 * i) + 2;
}

void shiftUp(int i) {
    while (i > 0 && H[parent(i)] < H[i]) {
        std::swap(H[parent(i)], H[i]);
        i = parent(i);
    }
}

void shiftDown(int i) {
    int maxIndex = i;
    int l = leftChild(i);
    if (l <= heapSize && H[l] > H[maxIndex]) {
        maxIndex = l;
    }

    int r = rightChild(i);
    if (r <= heapSize && H[r] > H[maxIndex]) {
        maxIndex = r;
    }
    if (i != maxIndex) {
        std::swap(H[i], H[maxIndex]);
        shiftDown(maxIndex);
    }
}

void insert(int p) {
    if (static_cast<size_t>(heapSize + 1) >= H.size()) {
        H.push_back(p); 
    } else {
        H[heapSize + 1] = p;
    }
    heapSize++;
    shiftUp(heapSize);
}

int extractMax() {
    int result = H[0];
    H[0] = H[heapSize];
    heapSize--;
    shiftDown(0);
    return result;
}

void changePriority(int i, int p) {
    int oldp = H[i];
    H[i] = p;
    if (p > oldp) {
        shiftUp(i);
    } else {
        shiftDown(i);
    }
}

int getMax() {
    return H[0];
}

void remove(int i) {
    H[i] = getMax() + 1;
    shiftUp(i);
    extractMax();
}

int main() {
    int numElements, element;
    std::cout << "Masukkan jumlah elemen: ";
    std::cin >> numElements;
    std::cout << "Masukkan elemen-elemen heap: ";
    for (int i = 0; i < numElements; ++i) {
        std::cin >> element;
        insert(element);
    }

    std::cout << "Priority Queue: ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    std::cout << "\n";

    std::cout << "Node with maximum priority: " << extractMax() << "\n";
    std::cout << "Priority queue after extracting maximum: ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    std::cout << "\n";

    int indexToChange, newPriority;
    std::cout << "Enter index to change priority and new priority: ";
    std::cin >> indexToChange >> newPriority;
    changePriority(indexToChange, newPriority);
    std::cout << "Priority queue after priority change: ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    std::cout << "\n";

    int indexToRemove;
    std::cout << "Enter index to remove: ";
    std::cin >> indexToRemove;
    remove(indexToRemove);
    std::cout << "Priority queue after removing the element: ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    std::cout << "\n";

    return 0;
}

//Khulika Malkan
//2311110057
```
#### Full Code Screenshot
![image](https://github.com/Malkankhulika/Modul-8/assets/149793653/c63fd870-e28a-471c-ae8d-40b59eb62a62)


#### Output:
![image](https://github.com/Malkankhulika/Modul-8/assets/149793653/087d0bc2-3c3f-4476-aa8d-684c4b58429c)


#### Penjelasan:
##### Struktur Data:
- H: vector<int> yang menyimpan elemen-elemen dalam antrian prioritas. Vector adalah sebuah array yang ukurannya dapat bertambah secara dinamis.
- heapSize: Variabel integer yang melacak jumlah elemen yang saat ini ada di antrian. Variabel ini mencatat berapa banyak elemen yang terisi dalam vector H.
##### Fungsi:
- parent(i): Menghitung indeks node induk dari node pada indeks i di heap. Fungsi ini menghitung indeks induk dari node yang diberikan pada indeks i.
- leftChild(i): Menghitung indeks node anak kiri dari node pada indeks i di heap. Fungsi ini menghitung indeks anak kiri dari node yang diberikan pada indeks i.
- rightChild(i): Menghitung indeks node anak kanan dari node pada indeks i di heap. Fungsi ini menghitung indeks anak kanan dari node yang diberikan pada indeks i.
- shiftUp(i): Mempertahankan properti heap max dengan menukar node pada indeks i dengan induknya jika node memiliki prioritas lebih tinggi (nilai lebih besar) daripada induknya. Proses ini berlanjut hingga node mencapai posisinya yang benar di heap. Fungsi ini menukar node dengan prioritas lebih tinggi dengan induknya agar struktur heap max terjaga.
- shiftDown(i): Mempertahankan properti heap max dengan menukar node pada indeks i dengan anaknya yang lebih besar (jika ada) jika node memiliki prioritas lebih rendah daripada anaknya. Proses ini berlanjut hingga node mencapai posisinya yang benar di heap. Fungsi ini menukar node dengan prioritas lebih rendah dengan anaknya yang lebih besar agar struktur heap max terjaga.
- insert(p): Memasukkan elemen dengan nilai p ke dalam antrian prioritas. Fungsi ini pertama memeriksa apakah ukuran vector H cukup untuk menampung elemen baru. Jika tidak cukup, ukuran vector ditambah secara dinamis. Kemudian, elemen baru ditempatkan di akhir vector dan fungsi shiftUp dipanggil untuk memastikan properti heap max dipertahankan. Fungsi ini memasukkan elemen baru ke dalam antrian dan kemudian menaikkannya ke posisinya yang benar dalam heap menggunakan shiftUp.
- **extractMax(): Menghapus dan mengembalikan elemen dengan prioritas tertinggi (nilai terbesar) dari antrian. Ia menukar elemen pertama (dengan prioritas tertinggi) dengan elemen terakhir dan kemudian mengurangi heapSize. Terakhir, ia memanggil shiftDown pada node root (sekarang berisi elemen terakhir yang sebelumnya) untuk mempertahankan properti heap max. Fungsi ini mengeluarkan elemen dengan prioritas tertinggi dari antrian dan kemudian menurunkan elemen yang tersisa agar struktur heap max terjaga.
- changePriority(i, p): Mengubah prioritas (nilai) elemen pada indeks i dalam antrian menjadi p. Ia memeriksa apakah prioritas baru lebih tinggi atau lebih rendah dari yang lama. Jika lebih tinggi, ia memanggil shiftUp untuk memindahkan elemen ke atas di heap. Jika tidak, ia memanggil shiftDown untuk memindahkan elemen ke bawah. Fungsi ini mengubah prioritas elemen yang sudah ada dalam antrian.
- `getMax(): Mengembalikan elemen dengan prioritas tertinggi (nilai terbesar) dalam antrian tanpa menghapusnya. Fungsi ini mengembalikan elemen dengan prioritas tertinggi tanpa mengeluarkannya dari antrian.
- remove(i): Menghapus elemen pada indeks i dari antrian prioritas. Ia mengganti nilai pada indeks i dengan nilai yang lebih tinggi daripada elemen lain di antrian (dicapai dengan menambahkan 1 ke maksimum saat ini). Kemudian, ia memanggil shiftUp untuk memindahkan elemen ini dengan prioritas tinggi secara artifisial ke atas di heap. Terakhir, ia memanggil extractMax untuk secara efektif menghapus elemen pada indeks i yang didorong ke atas. Fungsi ini menghapus elemen dari antrian dengan indeks yang diberikan.
##### Fungsi Utama:
- Fungsi main mendemonstrasikan penggunaan berbagai fungsi.
- Ini meminta pengguna untuk memasukkan jumlah elemen yang diinginkan untuk antrian.
- Kemudian meminta pengguna untuk memasukkan elemen-elemen tersebut satu per satu.
- Ini mencetak keadaan awal antrian.
- Ini mengekstrak elemen maksimum dan mencetak antrian yang dimodifikasi.
- Ini meminta pengguna untuk memasukkan indeks dan prioritas baru untuk mengubah prioritas elemen di antrian.
- Ini mencetak antrian yang diperbarui setelah perubahan prioritas.
- Ini meminta pengguna untuk memasukkan indeks elemen yang ingin dihapus.
- Ini menghapus elemen dan mencetak antrian yang dihasilkan.

##### Analisis Perbedaan dengan Kode Sebelumnya:
- Kode ini menggunakan vector sebagai struktur data internal untuk menyimpan elemen heap, bukan array statis. Hal ini memungkinkan heap untuk tumbuh dan menyusut secara dinamis, tanpa batasan ukuran yang kaku.
- Kode ini menggunakan fungsi std::swap dari STL (Standard Template Library) untuk menukar elemen dengan mudah.
- Kode ini menggunakan operator ++ dan -- untuk memanipulasi nilai heapSize dengan lebih ringkas.
- Kode ini menggunakan loop while dengan kondisi i >= 0 untuk shiftDown dan shiftUp, memastikan properti heap terjaga dari semua elemen.
- Kode ini menggunakan komentar yang lebih jelas untuk menjelaskan fungsionalitas setiap fungsi.


## Kesimpulan
Antrian prioritas adalah struktur data yang memungkinkan elemen disusun berdasarkan prioritasnya. Elemen dengan prioritas tertinggi dihapus terlebih dahulu. Antrian prioritas banyak digunakan dalam berbagai aplikasi, seperti algoritma pencarian (Dijkstra, A*), simulasi antrian (antrian kasir), dan manajemen memori (alokasi memori dinamis).

Heap adalah jenis struktur data heap yang menggunakan pohon biner untuk menyimpan elemen. Heap memiliki sifat-sifat berikut:
- Setiap node memiliki paling banyak dua node anak.
- Nilai setiap node lebih besar dari atau sama dengan nilai node anaknya (untuk heap maks) atau lebih kecil dari atau sama dengan nilai node anaknya (untuk heap min).
- Sifat heap dipertahankan untuk semua node di pohon.


Heap biner memiliki beberapa keuntungan dibandingkan dengan struktur data antrian prioritas lainnya, seperti array:
- Efisiensi: Operasi dasar pada heap biner, seperti Memasukkan, Menghapus, dan Melihat Maksimum, dapat dilakukan dalam waktu O(log n), di mana n adalah jumlah elemen dalam heap.
- Fleksibilitas: Heap biner dapat digunakan untuk mengimplementasikan antrian prioritas maks dan antrian prioritas min.
- Kemudahan implementasi: Heap biner dapat diimplementasikan dengan relatif mudah menggunakan pohon biner.
Berikut adalah beberapa poin penting lainnya tentang antrian prioritas dan heap:

## Referensi
[1]	 https://www.programiz.com/dsa/priority-queue

[2]	Riczky Pratama, “Priority Queue: Konsep dan Penggunaan dalam Algoritma”, 2023.

[3]	https://www.techiedelight.com/introduction-priority-queues-using-binary-heaps/

[4]	Goodrich, Tamassia, Mount. Data Structure and Algorithms in C++, Wiley, 2004.
