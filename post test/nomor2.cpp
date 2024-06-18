 #include <iostream>
using namespace std;

// mendeklarasikan struct node
struct Node {
    string KhulikaMalkan_2311110057;
    int usia;
    Node* next;
};

// deklarasi head node
Node* head = NULL;

// fungsi untuk menambahkan node di awal
void tambahDiAwal(string KhulikaMalkan_2311110057, int usia) {
    Node* newNode = new Node;
    newNode->KhulikaMalkan_2311110057 = KhulikaMalkan_2311110057;
    newNode->usia = usia;
    newNode->next = head;
    head = newNode;
}

// fungsi untuk menambahkan node di akhir
void tambahDiAkhir(string KhulikaMalkan_2311110057, int usia) {
    Node* newNode = new Node;
    newNode->KhulikaMalkan_2311110057 = KhulikaMalkan_2311110057;
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
void tambahDiTengah(string KhulikaMalkan_2311110057, int usia, int pos) {
    Node* newNode = new Node;
    newNode->KhulikaMalkan_2311110057 = KhulikaMalkan_2311110057;
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

// fungsi untuk menghapus node dengan variabel nama(KhulikaMalkan_2311110057) tertentu
void hapus(string KhulikaMalkan_2311110057) {
    Node* curr = head;
    Node* prev = NULL;

    while (curr != NULL && curr->KhulikaMalkan_2311110057 != KhulikaMalkan_2311110057) {
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

// fungsi untuk mengubah data node dengan nama(KhulikaMalkan_2311110057) tertentu
void ubah(string KhulikaMalkan_2311110057, string newKhulikaMalkan_2311110057, int newUsia) {
    Node* curr = head;

    while (curr != NULL && curr->KhulikaMalkan_2311110057 != KhulikaMalkan_2311110057) {
        curr = curr->next;
    }

    if (curr == NULL) {
        cout << "Data tidak ditemukan" << endl;
        return;
    }

    curr->KhulikaMalkan_2311110057 = newKhulikaMalkan_2311110057;
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
        cout << curr->KhulikaMalkan_2311110057 << " " << curr->usia << endl;
        curr = curr->next;
    }
}

int main() {
    // memasukkan data pertama (nama(KhulikaMalkan_2311110057) dan usia anda)
    string KhulikaMalkan_2311110057Anda;
    int usiaAnda;
    cout << "Masukkan nama anda: ";
    cin >> KhulikaMalkan_2311110057Anda;
    cout << "Masukkan usia anda: ";
    cin >> usiaAnda;
    tambahDiAwal(KhulikaMalkan_2311110057Anda, usiaAnda);
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
cout << endl << "Menghapus data Akechi: " << endl;
tampilkan();

// menambahkan data Futaba di antara Carol dan Ann
tambahDiTengah("Futaba", 18, 3);
cout << endl << "Setelah menambahkan Futaba di antara John dan Jane: " << endl;
tampilkan();

// menambahkan data Igor di awal
tambahDiAwal("Igor", 20);
cout << endl << "Setelah menambahkan Igor di awal: " << endl;
tampilkan();

// menambahkan data Hinata
tambahDiTengah("Hinata", 23, 9);
cout << endl << "menambahkan data Hinata: " << endl;
tampilkan();

// menghapus data Yusuke
hapus("Yusuke");
cout << endl << "menghapus data Yusuke: " << endl;
tampilkan();

// menampilkan semua data setelah perubahan
cout << endl << "Menampilkan seluruh data setelah perubahan:" << endl;
tampilkan();

return 0;
}

// Khulika Malkan
// 2311110057