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