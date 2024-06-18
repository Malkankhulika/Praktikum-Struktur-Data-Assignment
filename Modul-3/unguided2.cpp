#include <iostream>
using namespace std;
void buble_sort(string arr[], int length)
{
    bool notsort = true;
    int j283 = 0; string tmp; while(notsort)
    {
        notsort = false;
        j283++;
        for(int i = 0; i < length - j283; i++)
        {
            if(arr[i] > arr[i+1])
            {
                tmp = arr[i]; arr[i] = arr[i+1]; arr[i+1] = tmp;
                notsort = true;
            }
        }
    }
}

void print(string a0[], int length){
    for(int i = 0; i < length; i++)
    {
        cout << a0[i] << ", ";
    }
}
int main()
{
    int length = 10;
    string list_nama[]
    
={"siti","situ","sana","ana","ani","caca","cici","dida",
"dodo","dadi"};
    buble_sort(list_nama, length);
    print(list_nama, length);
    cout << endl;
    return 0;
}

// Khulika Malkan
// 2311110057 