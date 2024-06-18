#include <iostream>
using namespace std;

// Code ini berfungsi untuk melakukan hitung mundur
// dari angka yang diinputkan

void countdown(int n) {
    if (n == 0) {
        return; // invalid input
    }

    cout << n << " ";
    countdown(n - 1);
}

int main() {
    int number = 5; // 5 merupakan inputnya

    cout << "Rekursif Langsung: ";
    countdown(number);
    cout << endl;

    return 0;
}

// Khulika Malkan
// 2311110057
