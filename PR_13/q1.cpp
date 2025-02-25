#include <iostream>
using namespace std;

class Stack
{
public:
    int *arr;
    int index;
    int size;

    Stack(int n)
    {
        this->size = n;
        arr = new int[n];
        index = -1;
    }

    void push(int value)
    {
        if (index == size - 1)
        {
            cout << "stack overflow" << endl;
            return;
        }
        index++;
        arr[index] = value;
    }

    void pop()
    {

        if (index == -1)
        {
            cout << "stack underflow" << endl;
            return;
        }
        index--;
    }

    int top()
    {
        if (index == -1)
        {
            cout << "stack underflow" << endl;
            return -1;
        }
        return arr[index];
    }

    bool empty()
    {
        return index == -1;
    }

    void print()
    {
        for (int i = 0; i < this->size; i++)
        {
            cout << arr[i] << endl;
        }
    }
};

int main()
{
    Stack *stk = new Stack(3);
    stk->push(5);
    stk->push(10);
    stk->push(15);
    stk->pop();
    cout << stk->top();
    cout << stk->empty();
    return 0;
}