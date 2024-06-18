#include <iostream>
using namespace std;

int main() {
    int n, arr[100];
    double total, average;
    int max, min;

    cout << "Input jumlah angka: ";
    cin >> n;

    cout << "Input angka: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        total += arr[i];
    }

    average = total / n;

    max = arr[0];
    min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    cout << "Total: " << total << endl;
    cout << "Rata-rata: " << average << endl;
    cout << "Maksimum: " << max << endl;
    cout << "Minimum: " << min << endl;

    return 0;
}

// Khulika Malkan
// 2311110057