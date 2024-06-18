#include <iostream>
#include <string>
using namespace std;

int main() {
    string kalimat;
    int jumlah_vokal = 0;

    cout << "Masukkan kalimat: "; getline(cin, kalimat);

    for(int KhulikaMalkan_2311110057 = 0; KhulikaMalkan_2311110057 < kalimat.length(); KhulikaMalkan_2311110057++) {
    if(kalimat[KhulikaMalkan_2311110057] == 'a' || kalimat[KhulikaMalkan_2311110057] == 'i' || kalimat[KhulikaMalkan_2311110057] == 'u' || kalimat[KhulikaMalkan_2311110057] == 'e' || kalimat[KhulikaMalkan_2311110057] == 'o' || kalimat[KhulikaMalkan_2311110057] == 'A' || kalimat[KhulikaMalkan_2311110057] == 'I' || kalimat[KhulikaMalkan_2311110057] == 'U' || kalimat[KhulikaMalkan_2311110057] == 'E' || kalimat[KhulikaMalkan_2311110057] == 'O') {
        jumlah_vokal++;
        }
    }

    cout << "Jumlah huruf vokal dalam kalimat tersebut adalah: " << jumlah_vokal;

    return 0;
}

// Khulika Malkan
// 2311110057 
