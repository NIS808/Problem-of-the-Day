#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter 3 numbers : " << endl;
    cin >> a >> b >> c;
    if (a >= b && a >= c)
        cout << a << " is largest among 3 given numbers." << endl;
    else if (b >= a && b >= c)
        cout << b << " is largest among 3 given numbers." << endl;
    else
        cout << c << " is largest among 3 given numbers." << endl;
    return 0;
}