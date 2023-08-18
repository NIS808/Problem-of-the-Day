#include <iostream>
using namespace std;

int main()
{
    float A, P, R;
    cout << "Enter radius : " << endl;
    cin >> R;
    A = 3.14 * R * R;
    P = 2 * 3.14 * R;
    cout << "Area = " << A << endl;
    cout << "Perimeter = " << P << endl;
    return 0;
}