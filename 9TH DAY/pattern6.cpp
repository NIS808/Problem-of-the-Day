#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "Enter the number of row ( in odd number) that you want for pattern to print :" << endl;
    cin >> row;
    int x = -1;
    for (int i = 1; i <= row; i++)
    {
        if (i <= (row + 1) / 2)
        {
            for (int j = 1; j <= 1; j++)
            {
                cout << "*";
            }
            for (int k = 1; k <= x; k++)
            {
                cout << " ";
            }
            x++;
            if (i != 1)
            {
                for (int l = 1; l <= 1; l++)
                {
                    cout << "*";
                }
            }
        }
        else if ((i > (row + 1) / 2) && (i <= row))
        {
            for (int j = 1; j <= 1; j++)
            {
                cout << "*";
            }
            if (i == ((row + 1) / 2) + 1)
                x--;
            x--;
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