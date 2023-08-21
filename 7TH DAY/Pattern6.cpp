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
        for (int j = 1; j <= (((2 * row) - (2 * x)) - (row - x)); j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= (2 * x) - 1; k++)
        {
            cout << "*";
        }
        for (int l = 1; l <= (((2 * row) - (2 * x)) - (row - x)); l++)
        {
            cout << " ";
        }
        x--;
        cout << endl;
    }
    return 0;
}