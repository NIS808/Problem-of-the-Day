#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "Enter the number of row(in odd number) that you want for pattern to print :" << endl;
    cin >> row;
    int x = (row + 1) / 2;
    if (row % 2 != 0)
    {
        for (int i = 1; i <= row; i++)
        {
            if (i <= (row + 1) / 2)
            {
                for (int k = 1; k <= ((row + 1) / 2) - x; k++)
                {
                    cout << " ";
                }
                for (int j = 1; j <= x; j++)
                {
                    cout << "*";
                }
                x--;
            }
            if (i > (row + 1) / 2)
            {
                if (x == 0)
                    x = x + 1;
                x++;
                for (int k = 1; k <= ((row + 1) / 2) - x; k++)
                {
                    cout << " ";
                }
                for (int j = 1; j <= x; j++)
                {
                    cout << "*";
                }
            }
            cout << endl;
        }
    }
    else
        cout << "WARNING!" << endl
             << "This pattern is valid only for odd number of rows." << endl;
    return 0;
}