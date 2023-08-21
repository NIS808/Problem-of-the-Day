#include <iostream>
using namespace std;

int main()
{
    int n, k, i;
    cout << "Enter the number : " << endl;
    cin >> n;
    for (i = 1; i <= 10; i++)
    {
        k = n * i;
        cout << n << "*" << i << "=" << k << endl;
    }
    return 0;
}