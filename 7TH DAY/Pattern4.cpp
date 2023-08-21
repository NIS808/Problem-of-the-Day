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
        for (int j = 1; j <= (row - x); j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= x; k++)
        {
            cout << "*";
        }
        x--;
        cout << endl;
    }
    return 0;
}