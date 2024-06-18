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