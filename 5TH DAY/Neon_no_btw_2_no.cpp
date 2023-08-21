#include <iostream>
using namespace std;

int main()
{
    int a, b, p, q = 0, k, j;
    cout << "Enter the two numbers between which we want to display neon numbers :" << endl;
    cin >> a >> b;
    cout << "The neon numbers between " << a << " and " << b << " are :" << endl;
    for (j = a + 1; j < b; j++)
    {
        k = j * j;
        int r = q;
        while (k)
        {
            p = k % 10;
            r = r + p;
            k = k / 10;
        }
        if (r == j)
            cout << j << "  ";
    }
    return 0;
}