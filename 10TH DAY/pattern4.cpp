#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "Enter the number of row that you want for pattern to print :" << endl;
    cin >> row;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= 1; j++)
        {
            cout << "*";
        }
        if (i == 1 || i == row)
        {
            for (int k = 1; k <= row - 2; k++)
            {
                cout << "*";
            }
        }
        else
        {
            for (int l = 1; l <= row - 2; l++)
            {
                cout << " ";
            }
        }
        for (int m = 1; m <= 1; m++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}