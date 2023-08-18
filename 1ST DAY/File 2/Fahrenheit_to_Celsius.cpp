#include <iostream>
using namespace std;

int main()
{
    float F, C;
    cout << "Enter temperature in celsius : " << endl;
    cin >> C;
    F = ((C * 9) / 5) + 32;
    cout << "Fahrenheit = " << F << endl;
    return 0;
}