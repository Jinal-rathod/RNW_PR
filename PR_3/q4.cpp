//         5
//       4 5 4
//     3 4 5 4 3
//   2 3 4 5 4 3 2
// 1 2 3 4 5 4 3 2 1

#include <iostream>
using namespace std;

void f_loop(int s, int e)
{
    for (int i = e; i >= s; i--)
    {
        for (int k = 1; k < i; k++)
        {
            cout << "  ";
        }
        for (int j = i; j <= 5; j++)
        {
            cout << j << " ";
        }
        for (int j = 4; j >= i; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n1, n2;
    cout << "Enter starting and ending value : ";
    cin >> n1 >> n2;
    f_loop(n1, n2);
    return 0;
}