#include <iostream>
using namespace std;

int main()
{
    float P, R, T, SI;
    cout << "Enter Principal , Rate , Time respectively : " << endl;
    cin >> P >> R >> T;
    SI = (P * R * T) / 100;
    cout << "Simple Interest = " << SI << endl;
    return 0;
}