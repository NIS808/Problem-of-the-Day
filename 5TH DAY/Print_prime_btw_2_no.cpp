#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter the two numbers between which we want to display prime numbers :" << endl;
    cin >> a >> b;
    cout << "The prime numbers between " << a << " and " << b << " are :" << endl;
    for (int j = a + 1; j < b; j++)
    {
        int k = 0;
        if (j == 2)
        {
            cout << j << "  ";
            k++;
        }
        for (int i = 2; i <= j - 1; i++)
        {
            int m = j;
            if (m % i == 0)
            {
                k++;
                break;
            }
        }
        if (k == 0)
            cout << j << "  ";
    }
    return 0;
}