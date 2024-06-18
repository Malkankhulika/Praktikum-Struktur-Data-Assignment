#include <iostream>
using namespace std;
int main(){
    int maks, a, lokasi;
    cout<< "Masukan panjang array: ";
    cin >> a;

    if (a <= 0){
        cout << "Panjang array harus lebih besar dari 0." << endl;
        return 1; // Return 1 untuk identi error
    }
    int array [a];

    cout << "Masukan" << a << "angka\n";

    for (int i = 0; i < a; i++){
        cout << "Array" << (i + 1)<< ":";
        cin >> array [i];
    }
    maks = array [0];
    lokasi = 0;

    for (int i = 1; i < a; i++){
        if (array [i] > maks){
            maks = array [i];
            lokasi = i;
        }
    }
    cout << "Nilai maksimum adalah "<< maks << " berada di Array ke " << (lokasi + 1) << endl;

    return 0;
}

// Khulika Malkan
// 2311110057