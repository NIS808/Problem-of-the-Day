#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "Enter the number of row(in odd number) that you want for pattern to print :" << endl;
    cin >> row;
    int x = ((row + 1) / 2);
    if (row % 2 != 0)
    {
        for (int i = 1; i <= ((row + 1) / 2); i++)
        {
            x--;
            for (int j = 1; j <= x; j++)
            {
                cout << " ";
            }
            for (int k = 1; k <= ((((2 * ((row + 1) / 2)) - 1) - (2 * x))); k++)
            {
                cout << "*";
            }
            for (int l = 1; l <= x; l++)
            {
                cout << " ";
            }
            cout << endl;
        }
        int y = ((row + 1) / 2);
        for (int i = 1; i <= ((row + 1) / 2); i++)
        {
            for (int j = 1; j <= (((2 * ((row + 1) / 2)) - ((2 * y) - 2)) - (((row + 1) / 2) - (y - 1))); j++)
            {
                cout << " ";
            }
            for (int k = 1; k <= (2 * (y - 1)) - 1; k++)
            {
                cout << "*";
            }
            for (int l = 1; l <= (((2 * ((row + 1) / 2)) - ((2 * y) - 2)) - (((row + 1) / 2) - (y - 1))); l++)
            {
                cout << " ";
            }
            y--;
            cout << endl;
        }
    }
    else
        cout << "WARNING!" << endl
             << "This pattern is valid only for odd number of rows." << endl;
    return 0;
}