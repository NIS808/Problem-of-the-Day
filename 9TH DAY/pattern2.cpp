#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "Enter the number of row that you want for pattern to print :" << endl;
    cin >> row;
    int x = row;
    int y = 0;
    x = x - 2;
    for (int i = 1; i <= row; i++)
    {
        if (i == 1)
        {
            for (int j = 1; j <= row; j++)
            {
                cout << "*";
            }
        }
        if (i != 1)
        {
            x--;
            y++;
            if (y < row)
            {
                for (int m = 1; m <= y; m++)
                {
                    cout << " ";
                }
            }
            for (int j = 1; j <= 1; j++)
            {
                cout << "*";
            }

            for (int k = 1; k <= x; k++)
            {
                cout << " ";
            }
            if (i != row)
            {
                for (int l = 1; l <= 1; l++)
                {
                    cout << "*";
                }
            }
        }
        cout << endl;
    }
    return 0;
}