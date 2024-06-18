#include <iostream>
using namespace std;

int factorialHelper(int n, int accumulator) {
    if (n == 0) {
        return accumulator;
    } else {
        return factorialHelper(n - 1, accumulator * n);
    }
}


int factorial(int n) {
    if (n < 0) {
        cout << "Input must be non-negative." << endl;
        return -1; // Error untuk input negatif
    }
    return factorialHelper(n, 1);
}

int main() {
    int number = 5; // 5 masukan inputnya 
    int result = factorial(number);

    if (result != -1) { // untuk mengecek kondiri eror
    cout << "Masukkan bilangan bulat positif : " << number << endl;
    cout << "Faktorial dari 5 adalah: " << result << endl;
    }
    return 0;
}

// Khulika Malkan
// 2311110057

