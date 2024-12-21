// 1 0 1 0 1
//   1 0 1 0
//     1 0 1
//       1 0
//         1

#include <iostream>
using namespace std;

void loop(int s, int e)
{
    for (int i = s; i >= e; i--)
    {
        for (int k = s; k > i; k--)
        {
            cout << " ";
        }
        for (int j = s; j <= i; j++)
        {
            cout << j % 2;
        }
        cout << endl;
    }
}

int main()
{
    int n1, n2;
    cout << "Enter startind and ending value : " << endl;
    cin >> n1 >> n2;
    cout << endl;
    loop(n1, n2);
    return 0;
}