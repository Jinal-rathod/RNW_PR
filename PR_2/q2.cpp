// Digit Counter

#include <iostream>
using namespace std;

int main()
{
    int num, count = 0;
    cout << "Enter any number : ";
    cin >> num;

    while (num != 0)
    {
        num /= 10;
        count++;
    }
    cout << count;
    return 0;
}