#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0) {
        return 1; 
    } else {
        return n * factorial(n - 1); 
    }
}

int main() {
    int number = 5; 
    int result = factorial(number);

    cout << "Masukkan bilangan bulat positif : " << number << endl;
    cout << "Faktorial dari 5 adalah: " << result << endl;

    return 0;
}

//Khulika Malkan
//2311110057