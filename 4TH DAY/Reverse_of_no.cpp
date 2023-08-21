#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // This code is only for those number in which 0 lies between other numbers E.g. 12047303,1020304,etc.
    int n, k = -1;
    cout << "Enter the number :" << endl;
    cin >> n;
    int m = n;
    while (m)
    {
        m = m / 10;
        k++;
    }
    int l = n, a, r = 0;
    while (l)
    {
        a = l % 10;
        l = l / 10;
        r = r + (a * (pow(10, k)));
        k--;
    }
    cout << "Reverse of " << n << " is " << r << endl;
    return 0;
}