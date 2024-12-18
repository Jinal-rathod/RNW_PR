// Digit Addition

#include <iostream>
using namespace std;

int main()
{
    int num, sum;
    cin >> num;

    int f_digit = num, l_digit = num % 10;
    while (f_digit >= 10)
    {
        f_digit /= 10;
    }
    sum = f_digit + l_digit;
    cout<<sum;
    return 0;
}