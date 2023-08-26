#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "Enter the number of row ( in even number ) that you want for pattern to print :" << endl;
    cin >> row;
    int x = row / 2;
    int y = 0;
    for (int i = 1; i <= row; i++)
    {
        if (i <= row / 2)
        {
            for (int j = 1; j <= x; j++)
            {
                cout << "*";
            }
            for (int k = 1; k <= y; k++)
            {
                cout << " ";
            }
            y = y + 2;
            for (int l = 1; l <= x; l++)
            {
                cout << "*";
            }
            x--;
        }
        else
        {
            x++;
            for (int j = 1; j <= x; j++)
            {
                cout << "*";
            }
            y = y - 2;
            for (int k = 1; k <= y; k++)
            {
                cout << " ";
            }
            for (int l = 1; l <= x; l++)
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}