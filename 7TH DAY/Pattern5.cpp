#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "Enter the number of row that you want for pattern to print :" << endl;
    cin >> row;
    int x = row;
    for (int i = 1; i <= row; i++)
    {
        x--;
        for (int j = 1; j <= x; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= ((((2 * row) - 1) - (2 * x))); k++)
        {
            cout << "*";
        }
        for (int l = 1; l <= x; l++)
        {
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}