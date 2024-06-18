#include <iostream> //untuk input/output

using namespace std; //untuk menghindari penulisan std::

int main() //fungsi utama di main program
{
  // Deklarasi variabel
  int bilangan;

  // Meminta input bilangan dari user
  cout << "Masukkan bilangan: ";
  cin >> bilangan;

  // Menentukan bilangan ganjil atau genap
  if (bilangan % 2 == 0) {
    cout << bilangan << " adalah bilangan genap." << endl;
  } else {
    cout << bilangan << " adalah bilangan ganjil." << endl;
  }

  return 0;
}