#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "Enter the number of row ( in odd number) that you want for pattern to print :" << endl;
    cin >> row;
    int x = (row + 1) / 2;
    int y = (row + 1) / 2;
    int z = 0;
    for (int i = 1; i <= row; i++)
    {
        if (i <= x)
        {
            y--;
            for (int j = 1; j <= y; j++)
            {
                cout << " ";
            }
            for (int k = 1; k <= 1; k++)
            {
                cout << "*";
            }
            for (int l = 1; l <= z; l++)
            {
                cout << " ";
            }
            if (i == 1)
                z++;
            if (i != 1)
                z = z + 2;
            if (i != 1)
            {
                for (int k = 1; k <= 1; k++)
                {
                    cout << "*";
                }
            }
            for (int j = 1; j <= y; j++)
            {
                cout << " ";
            }
        }
        else
        {
            y++;
            for (int j = 1; j <= y; j++)
            {
                cout << " ";
            }
            for (int k = 1; k <= 1; k++)
            {
                cout << "*";
            }
            if (i == ((row + 1) / 2) + 1)
                z = z - 2;
            z = z - 2;
            for (int l = 1; l <= z; l++)
            {
                cout << " ";
            }
            if (i != row)
            {
                for (int k = 1; k <= 1; k++)
                {
                    cout << "*";
                }
            }
            for (int j = 1; j <= y; j++)
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}