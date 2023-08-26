#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "Enter the number of row that you want for pattern to print :" << endl;
    cin >> row;
    int x = row;
    int y = 1;
    for (int i = 1; i <= row; i++)
    {
        if (i != row)
        {
            x--;
            for (int j = 1; j <= x; j++)
            {
                cout << " ";
            }
            for (int k = 1; k <= 1; k++)
            {
                cout << "*";
            }
            if (i != 1)
            {
                for (int n = 1; n <= y; n++)
                {
                    cout << " ";
                }
                y = y + 2;
                for (int l = 1; l <= 1; l++)
                {
                    cout << "*";
                }
            }
            for (int m = 1; m <= x; m++)
            {
                cout << " ";
            }
        }
        if (i == row)
        {
            for (int p = 1; p <= (2 * row) - 1; p++)
                cout << "*";
        }
        cout << endl;
    }
    return 0;
}