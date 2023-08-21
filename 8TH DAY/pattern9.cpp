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
        if (i < row)
        {
            for (int j = 1; j == 1; j++)
            {
                cout << "*";
            }
            if (i > 2 && i < row)
            {
                x++;
                for (int k = 1; k <= x; k++)
                {
                    cout << " ";
                }
            }
            if (i > 1 && i < row)
            {
                for (int l = 1; l == 1; l++)
                {
                    cout << "*";
                }
            }
        }
        else
        {
            for (int m = 1; m <= row; m++)
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}