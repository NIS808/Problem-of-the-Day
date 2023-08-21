#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the natural number :" << endl;
    cin >> n;
    int k = 0;
    if (n == 1)
    {
        cout << n << " is neither prime nor composite." << endl;
        k++;
    }
    else if (n == 2)
    {
        cout << n << " is a prime number." << endl;
        k++;
    }
    for (int i = 2; i <= n - 1; i++)
    {
        int m = n;
        if (m % i == 0)
        {
            cout << n << " is not a prime number." << endl;
            k++;
            break;
        }
    }
    if (k == 0)
        cout << n << " is a prime number." << endl;
    return 0;
}