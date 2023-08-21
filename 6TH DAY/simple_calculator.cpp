#include <iostream>
using namespace std;

int main()
{
    int t;
    cout << "Enter the count of numbers that you want to operate :" << endl;
    cin >> t;
    t = t - 1;
    cout << "Now start calculation....." << endl;
    float a;
    cin >> a;
    float k;
    while (t--)
    {
        char ch;
        cin >> ch;
        float x;
        cin >> x;
        if (ch == '+')
        {
            k = a + x;
            cout << "   = " << k;
        }
        else if (ch == '-')
        {
            k = a - x;
            cout << "   = " << k;
        }
        else if (ch == '*')
        {
            k = a * x;
            cout << "   = " << k;
        }
        else if (ch == '/')
        {
            k = a / x;
            cout << "   = " << k;
        }
        a = k;
    }
    cout << endl
         << "Thank You." << endl;
    return 0;
}