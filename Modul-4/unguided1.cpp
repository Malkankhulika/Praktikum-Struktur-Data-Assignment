#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int binarySearch(string kalimat, char target) {
  int left = 0;
  int right = kalimat.length() - 1;

  while (left <= right) {
    int mid = left + (right - left) / 2;
    char midChar = kalimat[mid];

    if (midChar == target) {
      return mid;
    } else if (midChar < target) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }

  return -1;
}

int main() {
  string kalimat;
  char target;

  cout << "Masukkan kalimat: ";
  getline(cin, kalimat);

  // Urutkan kalimat sebelum melakukan pencarian
  sort(kalimat.begin(), kalimat.end());

  cout << "Masukkan huruf yang ingin dicari: ";
  cin >> target;

  int position = binarySearch(kalimat, target);

  if (position == -1) {
    cout << "Huruf '" << target << "' tidak ditemukan dalam kalimat." << endl;
  } else {
    cout << "Huruf '" << target << "' ditemukan pada posisi ke-" << position + 1 << "." << endl;
  }

  return 0;
}

// Khulika Malkan
// 2311110057 