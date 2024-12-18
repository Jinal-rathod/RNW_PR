// Ternary Operator.

#include <iostream>
using namespace std;

int main()
{
    int marks;
    cin >> marks;
    string grade = (marks >= 90) ? "Grand A" : (marks >= 80) ? "Grand B"
                                           : (marks >= 70)   ? "Grand C"
                                           : (marks >= 60)   ? "Grand D"
                                           : (marks >= 50)   ? "Grand E"
                                                             : "Grand F";
    cout << grade << endl;
}