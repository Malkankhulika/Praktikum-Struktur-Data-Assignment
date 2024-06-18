#include <iostream>
#include <map>
#include <string>
#include <cctype> // Include cctype for toupper function

using namespace std;

// Mendefinisikan fungsi to_upper di luar fungsi main
string to_upper(string text) {
  for (char &c : text) { // Menggunakan referensi untuk mengubah karakter
    c = toupper(c);
  }
  return text;
}

int main() {
  // Membuat map untuk menyimpan nama-nama buah dan warnanya
  map<string, string> fruits;
  fruits["semangka"] = "Merah";
  fruits["lemon"] = "Kuning";
  fruits["pepaya"] = "Oranye";

  // Mencetak nama-nama buah dalam huruf kapital dan warnanya
  for (const auto &fruit : fruits) {
    cout << to_upper(fruit.first) << " : " << fruit.second << endl;
  }

  return 0;
}