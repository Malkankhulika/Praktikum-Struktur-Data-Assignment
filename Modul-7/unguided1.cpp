#include <iostream>
#include <stack>
#include <string>
using namespace std;
bool isPalindrome(string sentence)
{
    stack<char> s;
    int len = sentence.length();
    int mid = len / 2;

    for (int i = 0; i < mid; i++)
    {
        s.push(sentence[i]);
    }
    if (len % 2 != 0)
    {
        mid++;
    }
    for (int i = mid; i < len; i++)
    {
        if (s.empty())
        {
            return false;
        }
    if (sentence[i] != s.top())
    {
        return false;
    }
    s.pop();
}
    return true;
}

int main()
{
    string sentence;
    cout << "Masukan Kalimat: ";
    getline(cin, sentence);

    if (isPalindrome(sentence))
    {
    cout << "Kalimat ini adalah Polindrom." << endl;
    }
    else
    {
    cout << "Kalimat ini bukan Polindrom." << endl;
    }
    return 0;
}

