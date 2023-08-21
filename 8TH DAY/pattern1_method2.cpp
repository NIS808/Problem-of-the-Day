#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "Enter the number of row(in odd number) that you want for pattern to print :" << endl;
    cin >> row;
    int x = ((row + 1) / 2);
    int y = ((row + 1) / 2);
    if (row % 2 != 0)
    {
        for (int i = 1; i <= row; i++)
        {
            if (i <= (row + 1) / 2)
            {
                x--;
                for (int j = 1; j <= x; j++)
                {
                    cout << " ";
                }
                for (int k = 1; k <= (((((row + 1) / 2) * 2) - y) - x); k++)
                {
                    cout << "*";
                }
                y--;
                for (int l = 1; l <= x; l++)
                {
                    cout << " ";
                }
            }
            if (i > (row + 1) / 2)
            {
                if (y == 0)
                    y = y + 1;
                x++;
                y++;
                for (int j = 1; j <= x; j++)
                {
                    cout << " ";
                }
                for (int k = 1; k <= (((((row + 1) / 2) * 2) - y) - x); k++)
                {
                    cout << "*";
                }
                for (int l = 1; l <= x; l++)
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