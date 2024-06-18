#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int KhulikaMalkan_2311110057;
    cout << "Silahkan masukkan jumlah simpul: ";
    cin >> KhulikaMalkan_2311110057;

    vector<string> nodes(KhulikaMalkan_2311110057);
    vector<vector<int>>
distances(KhulikaMalkan_2311110057,
vector<int>(KhulikaMalkan_2311110057));

// Masukkan nama simpul
    cout << "Silakan masukkan nama simpul" << endl;
    for (int i = 0; i < KhulikaMalkan_2311110057;
i++) {
    cout << "Simpul " << i + 1 << " : ";
    cin >> nodes[i];
}

// Masukkan bobot antar simpul
    cout << "Silakan masukkan bobot antar simpul" << endl;
    for (int i = 0; i < KhulikaMalkan_2311110057;
i++) {
    for (int j = 0; j < KhulikaMalkan_2311110057; j++) {
    cout << "" << nodes[i] << " ---> " <<
    nodes[j] << " = ";
    cin >> distances[i][j];
    }
}
    cout << "\t";
    for (int i = 0; i < KhulikaMalkan_2311110057; i++) {
    cout << nodes[i] << "\t";
}
    cout << endl;
    for (int i = 0; i < KhulikaMalkan_2311110057; i++) {
    cout << nodes[i] << "\t";
    for (int j = 0; j < KhulikaMalkan_2311110057; j++) {
    cout << distances[i][j] << "\t";
    }
    cout << endl;
    }
return 0;
}

// Khulika Malkan
// 2311110057