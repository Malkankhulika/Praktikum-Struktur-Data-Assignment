#include <iostream>
#include <string>
using namespace std;

int main() {
    string KhulikaMalkan_2311110057;
    int jumlah_vokal = 0;

    cout << "Masukkan kalimat: "; getline(cin, KhulikaMalkan_2311110057);

    for(int i = 0; i < KhulikaMalkan_2311110057.length(); i++) {
    if(KhulikaMalkan_2311110057[i] == 'a' || KhulikaMalkan_2311110057[i] == 'i' || KhulikaMalkan_2311110057[i] == 'u' || KhulikaMalkan_2311110057[i] == 'e' || KhulikaMalkan_2311110057[i] == 'o' || KhulikaMalkan_2311110057[i] == 'A' || KhulikaMalkan_2311110057[i] == 'I' || KhulikaMalkan_2311110057[i] == 'U' || KhulikaMalkan_2311110057[i] == 'E' || KhulikaMalkan_2311110057[i] == 'O') {
        jumlah_vokal++;
        }
    }

    cout << "Jumlah huruf vokal dalam kalimat tersebut adalah: " << jumlah_vokal;

    return 0;
}

// Khulika Malkan
// 2311110057 
