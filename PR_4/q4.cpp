// Sum of elements in row and column of 2D array

#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    int arr[n1][n2];
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cout << "arr[" << i << "][" << j << "] :";
            cin >> arr[i][j];
        }
    }
    int sum = 0;
    int row;
    cout << "Enter row number : ";
    cin >> row;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (i == row)
            {
                sum += arr[i][j];
            }
        }
    }
    cout << "Sum of row " << row << " : " << sum << endl;
    return 0;
}