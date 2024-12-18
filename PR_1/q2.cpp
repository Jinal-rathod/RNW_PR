// Switch case.

#include <iostream>
using namespace std;

int main()
{
    int marks, n;
    cout << "Enter your score : ";
    cin >> marks;

    switch (marks / 10)
    {
    case 10:
    case 9:
        cout << "Your grade is A." << endl << "Excellent work!";
        break;
    case 8:
        cout << "Your grade is B." << endl << "Well done!";
        break;
    case 7:
        cout << "Your grade is c." << endl << "Good Job!";
        break;
    case 6:
        cout << "Your grade is D." << endl << "Good, but you could do better!";
        break;
    case 5:
        cout << "Your grade is E." << endl << "You are passed, but you could do better";
        break;
    default:
        cout << "Your grade is F." << endl << "Sorry, you failed";
        break;
    }
    return 0;
}