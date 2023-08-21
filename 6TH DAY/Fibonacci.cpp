#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the term upto which you want fibonacci series :" << endl;
    cin >> n;
    cout << "Fibonacci series upto " << n << "th term is :" << endl;
    if (n >= 1)
        cout << 0 << "  ";
    if (n >= 2)
        cout << 1 << "  ";
    int a = 0, b = 1, c;
    for (int i = 3; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
        cout << c << "  ";
    }

    return 0;
}