# <h1 align="center">Laporan Praktikum Modul Sorting</h1>
<p align="center">Khulika Malkan</p>
<p align="center">2311110057</p>

## Dasar Teori
Pengurutan merupakan hal yang tidak bisa dipisahkan dari dunia komputer. Adanya kebutuhan terhadap proses pengurutan memunculkan bermacam-macam metode pengurutan yang bertujuan untuk memperoleh metode pengurutan yang optimal. Dengan menggunakan algoritma yang baik dapat menghasilkan program yang efisien dari segi waktu dan hasil yang dicapai. Data terkadang berada dalam bentuk yang tidak berpola ataupun dengan pola tertentu yang diinginkan. Secara umum ada dua jenis pengurutan data yaitu model urut naik (ascending) yang mengurutkan data dari yang mempunyai nilai terkecil sampai terbesar dan model urut turun (descending) yang mengurutkan data dari yang mempunyai nilai terbesar sampai terkecil. Perbandingan pengurutan data (sorting) dalam sebuah array (L) menggunakan dua algoritma dengan prinsip kerja yang berbeda. Pada algoritma metode selection sort menggunakan prinsip pertukaran elemen dalam proses sorting, dan metode insertion sort menggunakan prinsip geser dan sisip elemen dalam proses sorting. Tidak ada algoritma terbaik untuk semua keadaan, kadang kala sebuah algoritma sangat efisien ketika jumlah datanya sedikit, namun kinerjanya menjadi berkurang ketika jumlah data ditambahkan atau meningkat [1].

Sorting didefinisikan sebagai pengurutan sejumlah data berdasarkan nilai kunci tertentu. Pengurutan dapat dilakukan dari nilai terkecil ke nilai terbesar (ascending) atau sebaliknya (descending), algoritma Sorting termasuk salah satu contoh yang
kaya akan solusi tiga algoritma tersebut adalah :
### 1. Insertion Sort
Cara kerja insertion sort sebagaimana namanya. Pertama-tama, dilakukan iterasi, dimana di setiap iterasi insertion sort memindahkan nilai elemen, kemudian menyisipkannya berulang-ulang sampai ke tempat yang tepat. Begitu seterusnya dilakukan. Dari proses iterasi, seperti biasa, terbentuklah bagian yang telah di-sorting dan bagian yang belum [2].
### 2. Buble Sort
Bubble Sort merupakan cara pengurutan yang sederhana. Konsep dari ide dasarnya adalah seperti “gelembung air” untuk elemen struktur data yang semestinya berada pada posisi awal. Cara kerjanya adalah dengan berulang-ulang melakukan traversal (proses looping) terhadap elemen-elemen struktur data yang belum diurutkan. Di dalam traversal tersebut,nilai dari dua elemen struktur data dibandingkan. Jika ternyata urutannya tidak sesuai dengan “pesanan”, maka dilakukan pertukaran (swap). Algoritma sorting ini disebut juga dengan comparison sort dikarenakan hanya mengandalkan perbandingan nilai elemen untuk mengoperasikan elemennya. [2].
### 3. Selection Sort
Algoritma sorting sederhana yang lain adalah Selection Sort. Ide dasarnya adalah melakukan beberapa kali pass untuk melakukan penyeleksian elemen struktur data. Untuk sorting ascending (menaik), elemen yang paling kecil di antara elemenelemen yang belum urut, disimpan indeksnya, kemudian dilakukan pertukaran nilai elemen dengan indeks yang disimpan tersebut dengan elemen yang paling depan yang belum urut. Sebaliknya, untuk sorting descending (menurun), elemen yang paling besar yang disimpan indeksnya kemudian ditukar [2].

## Guided 
### 1. Mengurutkan secara ascending untuk data numerik bertipe double menggunakan Algoritma Bubble Sort
#### kode program :
```C++
#include <iostream>
using namespace std;

void bubble_sort(double arr[], int length) {
	bool not_sorted = true;
 	int j=0;
 	double tmp;

 	while (not_sorted) {
 		not_sorted = false;
 		j++;
 		for (int i = 0; i < length - j; i++) {
 			if (arr[i] > arr[i + 1]) {
 				tmp = arr[i];
 				arr[i] = arr[i + 1];
 				arr[i + 1] = tmp;
 				not_sorted = true;
 			} //end of if
 		} //end of for loop
 	} //end of while loop
} //end of bubble_sort

void print_array(double a[], int length) {
	for(int i=0; i<length; i++) {
		cout << a[i] << "\t";
	}
	cout << endl;
}

int main() {
	int length = 6;
 	double a[] = {22.1, 15.3, 8.2, 33.21, 99.99, 99.99};
 
 	cout << "Urutan bilangan sebelum sorting: " << endl;
 	print_array(a, length);
 
 	bubble_sort(a, length);
 	cout << "\nUrutan bilangan setelah sorting: " << endl;
 
 	print_array(a, length);

 	return 0;
}

// Khulika Malkan
// 2311110057 
```

#### Full Code Screenshot :
![image](https://github.com/Malkankhulika/Modul-3/assets/149793653/d52fac22-c7de-48cf-b7ba-a889c1663ecf)

#### output :
![image](https://github.com/Malkankhulika/Modul-3/assets/149793653/b667f877-71dc-4139-815d-ac40b80e5413)

#### kesimpulan :
Dalam kode program Bubble Sort diatas, terdapat dua fungsi utama: bubble_sort dan print_array. Fungsi bubble_sort bertanggung jawab untuk mengurutkan elemen-elemen dalam array dengan metode Bubble Sort. Langkah-langkahnya melibatkan perbandingan dan pertukaran posisi elemen-elemen hingga tidak ada lagi perubahan dalam satu iterasi. Fungsi print_array digunakan untuk mencetak elemen-elemen dalam array. Selain itu, fungsi main adalah titik masuk program, di mana array awal diinisialisasi, urutan sebelum pengurutan dicetak, dan fungsi bubble_sort dipanggil untuk mengurutkan array. Hasil eksekusi program menampilkan urutan bilangan sebelum dan setelah pengurutan. 

Singkatnya program diatas dibuat untuk mengurutkan bilangan dengan metode Bubble Sort. Kemudian user diminta untuk menginputkan data berupa nomor secara acak yang nanti nya akan diurutkan dengan bubble sort. Perbedaan antara insertion dan bubble sort yaitu apabila pada insertion sort menggunakan statement for dan while sedangkan pada bubble sort menggunakan statement while, for, if.

### 2. Mengurutkan karakter secara descending (dari terbesar hingga terkecil) menggunakan Algoritma Insertion Sort
#### Kode Program :
```C++
#include <iostream>
using namespace std;

void insertion_sort(char arr[], int length) {
	int i, j;
 	char tmp;

 	for (i = 1; i < length; i++) {
 		j = i;

 		while (j > 0 && arr[j - 1] < arr[j]) {
 			tmp = arr[j];
 			arr[j] = arr[j - 1];
 			arr[j - 1] = tmp;
 			j--;
 		} //end of while loop
 	} //end of for loop
}

void print_array(char a[], int length) {
	for(int i=0; i<length; i++) {
		cout << a[i] << "\t";
	}
	cout << endl;
}

int main() {
	int length = 6;
 	char a[length] = {'c', 'f', 'a', 'z', 'd', 'p'};
 	
 	cout << "Urutan karakter sebelum sorting: " << endl;
 	print_array(a, length);
 	
 	insertion_sort(a, length);
 	cout << "\nUrutan karakter setelah sorting secara descending: " << endl;
 	
 	print_array(a, length);

 	return 0;

}

// Khulika Malkan
// 2311110057 
```
#### Full Code Screenshot :
![image](https://github.com/Malkankhulika/Modul-3/assets/149793653/f7c46c7a-bfc9-4cda-9821-0389c6d7518c)

#### output :
![image](https://github.com/Malkankhulika/Modul-3/assets/149793653/966897b1-9c36-4756-ad2f-c97070b2d455)

#### kesimpulan :
Dalam kode program Insertion Sort diatas terdapat dua fungsi utama: insertion_sort dan print_array. Fungsi insertion_sort bertanggung jawab untuk mengurutkan elemen-elemen dalam array dengan metode Insertion Sort. Langkah-langkahnya melibatkan perbandingan dan pertukaran posisi elemen-elemen hingga tidak ada lagi perubahan dalam satu iterasi. Fungsi print_array digunakan untuk mencetak elemen-elemen dalam array. Selain itu, fungsi main adalah titik masuk program, di mana array awal diinisialisasi, urutan sebelum pengurutan dicetak, dan fungsi insertion_sort dipanggil untuk mengurutkan array.

Pada program diatas dibuat untuk mengrutkan data dengan metode selection sort. Dimana user diminta untuk memasukkan data berupa bilangan secara acak yang kemudian nantinya akan diurutkan dengan selection sort. Pada selection sort ,statement yang digunakan yaitu for, for, dan if .

## tugas (Unguided) 

### 1. Kelas S1 IF 2016 G memiliki 5 mahasiswa. Pada akhir semester mereka menerima lembar Indeks Prestasi Semester (IPS), masing-masing mahasiswa tersebut memiliki IPS sebagai berikut: {3.8, 2.9, 3.3, 4.0, 2.4}. Buatlah program untuk mengurutkan IPS mahasiswa tersebut dari yang terbesar hingga terkecil dengan menggunakan algoritma Selection Sort! (Score: 30)
#### Kode Program :
```C++
#include <iostream>
using namespace std;
void descending(float arr[], int n)
{
  int k283, tmp;
  for(int i = 0; i < n-1; i++)
  {
    k283 = i;
    for(int j=i+1; j < n; j++)
    {
      if(arr[j] > arr[k283])
      {
        k283=j;
      }
    }
    if(k283 != i)
    {
      tmp = arr[i];
      arr[i] = arr[k283];
      arr[k283] = tmp;
      }
    }
}
void printArray(float arr[], int n)
{
  for(int i = 0; i < n; i++)
  {
    cout << arr[i] << "\t";
  }
}
int main()
{
  int jumlahData = 5;
  float ip[jumlahData] = {3.8, 2.9, 3.3, 4.0, 2.4};
  descending(ip, jumlahData);
  cout << "Urutan IPS dari terbesar keterkecil\n"<<endl;
  printArray(ip, jumlahData);
  cout << endl;
return 0;
}

// Khulika Malkan
// 2311110057 
```
#### Full Code Screenshot:
![image](https://github.com/Malkankhulika/Modul-3/assets/149793653/7c45cbe0-3287-4896-85f4-0455480f26ba)

#### Output:
![image](https://github.com/Malkankhulika/Modul-3/assets/149793653/e3ac464c-aff8-411e-918d-d329e54706fb)

#### Kesimpulan:
Dalam kode program diatas terdapat dua fungsi utama yaitu descending dan printArray. Fungsi descending bertanggung jawab untuk mengurutkan elemen-elemen dalam array bilangan desimal secara menurun. Algoritma ini mencari elemen terbesar dalam array dan menukarnya dengan elemen pertama, kemudian melanjutkan dengan mencari elemen terbesar kedua, dan seterusnya. Fungsi printArray digunakan untuk mencetak elemen-elemen dalam array. Selain itu, fungsi main sebagai titik masuk program menginisialisasi array IP (Indeks Prestasi) dengan nilai-nilai yang diberikan.

Singkatnya program diatas dibuat untuk mengurutkan nilai IPS Mahasiswa dengan metode selection sort. Statement yang digunakan dalam program ini yaitu for, for, dan if. Cara kerja selection sort yaitu menganggap bahwa sorted dan unsorted. Tipe data yang digunakan dalam program diatas yaitu float.

### 2. Pak RT memiliki 10 warga dengan nama: siti, situ, sana, ana, ani, caca, cici, dida, dodo, dan dadi. Supaya mudah dalam melakukan pencarian, Pak RT akan mengurutkan nama nama tersebut sesuai dengan alfabet. Buatlah program untuk membantu Pak RT dengan menggunakan algoritma Bubble Sort! (Score: 30)
#### Code Program
```C++
#include <iostream>
using namespace std;
void buble_sort(string arr[], int length)
{
    bool notsort = true;
    int j283 = 0; string tmp; while(notsort)
    {
        notsort = false;
        j283++;
        for(int i = 0; i < length - j283; i++)
        {
            if(arr[i] > arr[i+1])
            {
                tmp = arr[i]; arr[i] = arr[i+1]; arr[i+1] = tmp;
                notsort = true;
            }
        }
    }
}

void print(string a0[], int length){
    for(int i = 0; i < length; i++)
    {
        cout << a0[i] << ", ";
    }
}
int main()
{
    int length = 10;
    string list_nama[]
    
={"siti","situ","sana","ana","ani","caca","cici","dida",
"dodo","dadi"};
    buble_sort(list_nama, length);
    print(list_nama, length);
    cout << endl;
    return 0;
}

// Khulika Malkan
// 2311110057 
```
#### Full code Screenshot:
![image](https://github.com/Malkankhulika/Modul-3/assets/149793653/b93f7081-330c-4337-ac83-a4798865e4e6)

#### Output:
![image](https://github.com/Malkankhulika/Modul-3/assets/149793653/cbdc32d9-d83d-47b7-b8b3-422320e2caa5)

#### Kesimpulan:
Dalam kode program Bubble Sort yang ditulis diatas terdapat dua fungsi utama: bubble_sort dan printArray. Fungsi bubble_sort bertanggung jawab untuk mengurutkan elemen-elemen dalam array string menggunakan algoritma Bubble Sort. Algoritma ini membandingkan dua elemen sekaligus dan menukar posisi jika urutannya salah. Selanjutnya, fungsi printArray digunakan untuk mencetak elemen-elemen dalam array. Fungsi main sebagai titik masuk program menginisialisasi array dengan nama-nama yang diberikan, mengurutkannya menggunakan algoritma Bubble Sort, dan menampilkan urutan nama secara menurun.

Singkatnya kode program diatas dibuat untuk mengurutkan data nama warga berdasarkan alfabet dengan metode bubble sort. Tipe data yang digunakan dalam program diatas yaitu string dan menggunakan parameter yang berisi rumus dan juga menggunakan void untuk menampilkan ke layar.

### 3. Buatlah program yang meminta user menginputkan suatu bilangan n dan meminta user untuk menginputkan sejumlah n karakter. Kemudian program akan melakukan sorting secara menaik (ascending) dan menurun (descending)! (Score: 40)
![image](https://github.com/Malkankhulika/Modul-3/assets/149793653/71383293-dc50-46ba-bd5a-fb013c9e0e4b)

#### Kode Program :
```C++
#include <iostream>
using namespace std;
void prosedur_isi_array(char a[],int n283)
{
  for(int i = 0; i < n283; i++)
  {
    cout << " Karakter ke-" << i+1 << " :"; cin >>a[i];
  }
  cout << endl;
}
void ascending(char a[], int n283)
{
  int x, y;
  char tmp;
  for(x = 1; x < n283; x++)
  {
    y = x;
  while(y > 0 && a[y - 1] > a[y])
  {
    tmp = a[y];
    a[y] = a[y - 1];
    a[y - 1] = tmp;
    y--;
    }
  }
}
void descending(char a[], int n283){
  int x, y;
  char tmp;
  for(x = 1; x < n283; x++)
  {
    y = x;
    while(y > 0 && a[y - 1] < a[y])
    {
      tmp = a[y];
      a[y] = a[y - 1];
      a[y - 1] = tmp;
      y--;
    }
  }
}
void print(char a[], int n283)
{
  for(int x = 0; x < n283; x++)
  {
    cout << a[x] << " ";
  }
}

int main()
{
  int jmlData;
  cout << " Input (n) : "; cin >> jmlData;
  char karakter[jmlData];
  prosedur_isi_array(karakter,jmlData);
  
  cout << "Karakter sebelum sorting :"<<endl;
  print(karakter, jmlData);
  cout<<endl;
  
  cout << "Karakter setelah ascending sort :"<<endl;
  ascending(karakter, jmlData);
  print(karakter, jmlData);
  cout<<endl;
  cout << "Karakter setelah descending sort :"<<endl;
  descending(karakter, jmlData);
  print(karakter, jmlData);
  cout<<endl;
return 0;
}

// Khulika Malkan
// 2311110057 
```

#### Full code Screenshot:
![image](https://github.com/Malkankhulika/Modul-3/assets/149793653/ba5d7c3f-1a97-439b-a786-57c408dcb52a)

#### Output:
![image](https://github.com/Malkankhulika/Modul-3/assets/149793653/3187a837-d84f-43a8-9ffb-fbd8326b6d5c)


#### Kesimpulan :
Dalam kode program Bubble Sort yang ditulis dalam bahasa C++, terdapat dua fungsi utama: ascending dan descending. Fungsi ascending mengurutkan array karakter secara menaik menggunakan algoritma Insertion Sort, sementara fungsi descending mengurutkan array secara menurun. Algoritma Insertion Sort bekerja dengan membandingkan dua elemen sekaligus dan menukar posisi jika urutannya salah. Fungsi print digunakan untuk mencetak elemen-elemen dalam array. Pada fungsi main, pengguna diminta memasukkan jumlah data dan array karakter diinisialisasi dengan karakter-karakter yang dimasukkan.

Singkatnya pada kode program diatas, user diminta untuk menginputkan data berupa huruf secara acak yang nantinya akan diurutkan dengan ascending dan decending. Void ascending digunakan untuk mengurutkan data dari a-e, sedangankan decending digunakan untuk mengurutkan data dari e-a.

## Kesimpulan
Algoritma yang mudah dalam hal implementasi adalah Bubble Sort, Selection Sort, dan Insertion Sort. Ketiganya memiliki kompleksitas O(n2). Di antara algoritma ini, yang paling effisien adalah Insertion Sort namun tidak ada algoritma terbaik untuk semua keadaan, kadang kala sebuah algoritma sangat efisien ketika jumlah datanya sedikit, namun kinerjanya menjadi berkurang ketika jumlah data ditambahkan atau meningkat. Berdasarkan percobaan yang saya coba metode insertion sort lebih unggul pada jumlah data yang sedikit, sedangkan metode selection sort lebih unggul pada jumlah data yang lebih banyak.
 
## Referensi
[1] Retnoningsih, E. (2018). Algoritma Pengurutan Data (Sorting) Dengan Metode Insertion Sort dan Selection Sort. Information Management For Educators And Professionals: Journal of Information Management, 3(1), 95-106.

[2] Wisudawan, W. F. (2007). Kompleksitas Algoritma Sorting yang Populer Dipakai. Bandung: Teknik Informatika, Institut Teknologi Bandung.
