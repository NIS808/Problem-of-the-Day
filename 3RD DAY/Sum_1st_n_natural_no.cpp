#include <iostream>
using namespace std;

int main()
{
    int n, k = 0;
    cout << "Enter the number :" << endl;
    cin >> n;
    int m = n;
    do
    {
        k = k + m;
    } while (m--);

    cout << "Sum of first " << n << " natural numbers is " << k << endl;
    return 0;
}