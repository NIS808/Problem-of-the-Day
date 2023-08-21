#include <iostream>
using namespace std;

int main()
{
    int n, k = 1;
    cout << "Enter a number :" << endl;
    cin >> n;
    int m = n;
    do
    {
        k = k * m;
    } while (--m);

    cout << "The factorial of " << n << " is " << k << endl;
    return 0;
}