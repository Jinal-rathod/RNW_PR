// largest elements of 2D array

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n1, n2;
    cout << "Enter row and column size : ";
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
    int max = 0;
    return 0;
}