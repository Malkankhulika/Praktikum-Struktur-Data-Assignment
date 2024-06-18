#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m, l;
    cout << "Input jumlah matrix: ";
    cin >> n;
    cout << "Input jumlah baris: ";
    cin >> m;
    cout << "Input jumlah kolom: ";
    cin >> l;

    // Membuat vektor tiga dimensi
    vector<vector<vector<int>>> arr(n, vector<vector<int>>(m, vector<int>(l)));

    cout << "Input array tiga dimensi: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            for (int k = 0; k < l; k++) {
                cin >> arr[i][j][k];
            }
        }
    }

    cout << "Matrix: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Matrix " << i + 1 << ":" << endl;
        for (int j = 0; j < m; j++) {
            for (int k = 0; k < l; k++) {
                cout << arr[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}

// Nama : Khulika Malkan
// NIM  : 2311110057