#include <iostream>
using namespace std;
void descending(float arr[], int n)
{
  int k283, tmp;
  for(int i = 0; i < n-1; i++)
  {
    k283 = i;
    for(int j=i+1; j < n; j++)
    {
      if(arr[j] > arr[k283])
      {
        k283=j;
      }
    }
    if(k283 != i)
    {
      tmp = arr[i];
      arr[i] = arr[k283];
      arr[k283] = tmp;
      }
    }
}
void printArray(float arr[], int n)
{
  for(int i = 0; i < n; i++)
  {
    cout << arr[i] << "\t";
  }
}
int main()
{
  int jumlahData = 5;
  float ip[jumlahData] = {3.8, 2.9, 3.3, 4.0, 2.4};
  descending(ip, jumlahData);
  cout << "Urutan IPS dari terbesar keterkecil\n"<<endl;
  printArray(ip, jumlahData);
  cout << endl;
return 0;
}

// Khulika Malkan
// 2311110057 