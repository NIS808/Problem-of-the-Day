#include <iostream>
using namespace std;

int main()
{
    char c;
    cout << "Enter any alphabet :" << endl;
    cin >> c;
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        cout << c << " is vowel." << endl;
    else
        cout << c << " is consonant." << endl;
    return 0;
}