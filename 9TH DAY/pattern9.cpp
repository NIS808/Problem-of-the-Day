#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "Enter the number of row that you want for pattern to print :" << endl;
    cin >> row;
    int x = 0;
    for (int i = 1; i <= row; i++)
    {

        for (int j = 1; j <= x; j++)
        {
            cout << " ";
        }
        x++;
        if (i == 1)
        {
            for (int k = 1; k <= row; k++)
            {
                cout << "*";
            }
        }
        if (i != 1 && i != row)
        {
            for (int l = 1; l <= 1; l++)
            {
                cout << "*";
            }
            for (int m = 1; m <= (row - 2); m++)
            {
                cout << " ";
            }
            for (int n = 1; n <= 1; n++)
            {
                cout << "*";
            }
        }
        if (i == row)
        {
            for (int k = 1; k <= row; k++)
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}