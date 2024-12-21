// 41
// 41 42
// 41 42 43
// 41 42 43 44
// 41 42 43 44 45

#include <iostream>
using namespace std;

void loop(int s, int e)
{
    for (int i = s; i <= e; i++)
    {
        for (int j = s; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n1, n2;
    cout << "Enter starting and ending value : " << endl;
    cin >> n1 >> n2;
    cout << endl;
    loop(n1, n2);
    return 0;
}
