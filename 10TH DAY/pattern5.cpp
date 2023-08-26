#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "Enter the number of row ( in odd number) that you want for pattern to print :" << endl;
    cin >> row;
    int y = row;
    int x = 0;
    for (int i = 1; i <= row; i++)
    {
        if (i == 1 || i == row)
        {
            for (int j = 1; j <= (row + 1) / 2; j++)
            {
                cout << "*";
                if (j != (row + 1) / 2)
                {
                    for (int k = 1; k <= 1; k++)
                    {
                        cout << " ";
                    }
                }
            }
        }
        else
        {
            if (i <= (row + 1) / 2)
            {
                x++;
                for (int k = 1; k <= x; k++)
                {
                    cout << " ";
                }
                for (int l = 1; l <= 1; l++)
                {
                    cout << "*";
                }
                if (i == 2)
                    y = y - 2;
                y = y - 2;
                for (int m = 1; m <= y; m++)
                {
                    cout << " ";
                }
                if (i != (row + 1) / 2)
                {
                    for (int n = 1; n <= 1; n++)
                    {
                        cout << "*";
                    }
                }
            }
            else
            {
                x--;
                for (int k = 1; k <= x; k++)
                {
                    cout << " ";
                }
                for (int l = 1; l <= 1; l++)
                {
                    cout << "*";
                }
                y = y + 2;
                for (int m = 1; m <= y; m++)
                {
                    cout << " ";
                }
                if (i != row)
                {
                    for (int n = 1; n <= 1; n++)
                    {
                        cout << "*";
                    }
                }
            }
        }
        cout << endl;
    }
    return 0;
}