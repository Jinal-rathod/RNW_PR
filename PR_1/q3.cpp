// If-else statment.

#include <iostream>
using namespace std;

int main()
{
    int marks, n;
    cout << "Enter your score : ";
    cin >> marks;

    if(marks>=90){
        cout << "Your grade is A." << endl << "Excellent work!" << endl << "You are eligible for next level";
    }else if(marks>=80){
        cout << "Your grade is B." << endl << "Well done! "<< endl << "You are eligible for next level";
    }else if(marks>=70){
        cout << "Your grade is c." << endl << "Good Job!" << endl << "You are eligible for next level";
    }else if(marks>=60){
        cout << "Your grade is D." << endl << "Good, but you could do better!" << endl << "You are eligible for next level";
    }else if(marks>=50){
        cout << "Your grade is E." << endl << "You are passed, but you could do better" << endl << "You are eligible for next level";
    }else{
        cout << "Your grade is F." << endl << "Sorry, you failed" << endl << "Please try again next time";
    }
    return 0;
}