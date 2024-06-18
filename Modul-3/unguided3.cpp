#include <iostream>
using namespace std;
void prosedur_isi_array(char a[],int n283)
{
  for(int i = 0; i < n283; i++)
  {
    cout << " Karakter ke-" << i+1 << " :"; cin >>a[i];
  }
  cout << endl;
}
void ascending(char a[], int n283)
{
  int x, y;
  char tmp;
  for(x = 1; x < n283; x++)
  {
    y = x;
  while(y > 0 && a[y - 1] > a[y])
  {
    tmp = a[y];
    a[y] = a[y - 1];
    a[y - 1] = tmp;
    y--;
    }
  }
}
void descending(char a[], int n283){
  int x, y;
  char tmp;
  for(x = 1; x < n283; x++)
  {
    y = x;
    while(y > 0 && a[y - 1] < a[y])
    {
      tmp = a[y];
      a[y] = a[y - 1];
      a[y - 1] = tmp;
      y--;
    }
  }
}
void print(char a[], int n283)
{
  for(int x = 0; x < n283; x++)
  {
    cout << a[x] << " ";
  }
}

int main()
{
  int jmlData;
  cout << " Input (n) : "; cin >> jmlData;
  char karakter[jmlData];
  prosedur_isi_array(karakter,jmlData);
  
  cout << "Karakter sebelum sorting :"<<endl;
  print(karakter, jmlData);
  cout<<endl;
  
  cout << "Karakter setelah ascending sort :"<<endl;
  ascending(karakter, jmlData);
  print(karakter, jmlData);
  cout<<endl;
  cout << "Karakter setelah descending sort :"<<endl;
  descending(karakter, jmlData);
  print(karakter, jmlData);
  cout<<endl;
return 0;
}

// Khulika Malkan
// 2311110057 