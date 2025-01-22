// Calculator

#include <iostream>
using namespace std;

int main()
{
    cout << "Press 1 for +" << endl
         << "Press 2 for -" << endl
         << "Press 3 for *" << endl
         << "Press 4 for /" << endl
         << "Press 5 for %" << endl
         << "Press 0 for the exit : " << " ";
    int num, n1, n2;
    cin >> num;
    cout << "Enter the frist number : ";
    cin >> n1;
    cout << "Enter the second number : ";
    cin >> n2;
    switch (num)
    {
    case 1:
        cout << "Add of two number : " << n1 + n2;
        break;
    case 2:
        cout << "Sub of two number : " << n1 - n2;
        break;
    case 3:
        cout << "Mul of two number : " << n1 * n2;
        break;
    case 4:
        cout << "Div of two number : " << n1 / n2;
        break;
    case 5:
        cout << "Mod of two number : " << n1 % n2;
        break;
    default:
        break;
    }
    return 0;
}