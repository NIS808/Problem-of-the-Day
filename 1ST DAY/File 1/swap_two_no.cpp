#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int a, b;
    cout << "Enter two integers : " << endl;
    cin >> a >> b;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << a << endl;
    cout << b << endl;
    return 0;
}