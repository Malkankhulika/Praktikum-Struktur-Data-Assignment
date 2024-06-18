#include <iostream>
using namespace std;


int main()
{
    char op;
    float num1, num2;

    cout << "Input the operator: ";
    cin >> op;

    cout << "Masukkan nomor pertama: "; // Pesan untuk memasukkan num1
    cin >> num1;

    cout << "Masukkan nomor kedua: "; // Pesan untuk memasukkan num2
    cin >> num2;

    switch(op)
    {
    case '+':
        cout << "The result: " << num1 + num2;
        break;
    case '-':
        cout << num1 - num2;
        break;
    case '*':
        cout << num1 * num2;
        break;
    case '/':
        if (num2 != 0)
            cout << num1 / num2;
        else
            cout << "Error! Division by zero!";
        break;
    default:
        cout << "Operator tidak ditemukan. Silakan coba lagi!";
    }

    return 0;
}
