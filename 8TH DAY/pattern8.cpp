#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "Enter the number of row(in odd number) that you want for pattern to print :" << endl;
    cin >> row;
    int y = ((row + 1) / 2);
    if (row % 2 != 0)
    {
        for (int i = 1; i <= row; i++)
        {
            if (i <= (row + 1) / 2)
            {
                for (int j = 1; j <= ((row + 1) / 2) - y; j++)
                {
                    cout << " ";
                }
                for (int k = 1; k <= y; k++)
                {
                    cout << "*";
                    if (k < ((row + 1) / 2))
                    {
                        for (int m = 1; m <= 1; m++)
                        {
                            cout << " ";
                        }
                    }
                }
                for (int l = 1; l <= ((row + 1) / 2) - y; l++)
                {
                    cout << " ";
                }
                y--;
            }
            if (i > (row + 1) / 2)
            {
                if (y == 0)
                    y = y + 1;
                y++;
                for (int j = 1; j <= ((row + 1) / 2) - y; j++)
                {
                    cout << " ";
                }
                for (int k = 1; k <= y; k++)
                {
                    cout << "*";
                    if (k < ((row + 1) / 2))
                        for (int m = 1; m <= 1; m++)
                        {
                            cout << " ";
                        }
                }
                for (int l = 1; l <= ((row + 1) / 2) - y; l++)
                {
                    cout << " ";
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