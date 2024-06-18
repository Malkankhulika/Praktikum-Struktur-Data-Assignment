 #include <iostream>
using namespace std;

int main() {
    int data[] = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4};
    int length = sizeof(data)/sizeof(data[0]);
    int searchNum = 4;
    int count = 0;

    cout << "Data: ";
    for(int i=0; i<length; i++)
        { cout << data[i] << " ";
        if(data[i] == searchNum) {
            count++;
        }   
    }
    cout << endl;

    cout << "Jumlah angka " << searchNum << " pada data tersebut adalah: " << count << endl;

    return 0;
}

// Khulika Malkan
// 2311110057 