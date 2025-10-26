#include <iostream>
using namespace std;

class Stack
{

public:
    int size;
    int top;
    int arr[10];

    Stack(int x)
    {
        this->size = x;
        this->top = -1;
    }

    void push(int x)
    {
        if (top == 10 - 1)
        {
            cout << "Overflow";
        }
        else
        {
            this->arr[++top] = x;
        }
    }

    int pop()
    {

        if (top == -1)
        {
            cout << "Underflow";
        }
        else
        {
            return this->arr[top--];
        }
    }

    int topVal()
    {

        if (top == -1)
        {
            cout << "Underflow";
            return -1;
        }
        else
        {
            return this->arr[top];
        }
    }
};

int main()
{

    Stack *x = new Stack(5);

    x->push(5);
    cout << x->topVal() << endl;
    x->push(3);
    cout << x->topVal() << endl;
    x->pop();
    cout << x->topVal() << endl;
    x->pop();
    cout << x->topVal() << endl;

    return 0;
}