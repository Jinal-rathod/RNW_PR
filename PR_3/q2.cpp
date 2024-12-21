// 11
// 12 13
// 14 15 16
// 17 18 19 20

#include <iostream>
using namespace std;

void loop()
{
    int count = 10;
    for (int i = 11; i <= 14; i++)
    {
        for (int j = 11; j <= i; j++)
        {
            count++;
            cout << count << " ";
        }
        cout << endl;
    }
}
int main()
{
    loop();
    return 0;
}