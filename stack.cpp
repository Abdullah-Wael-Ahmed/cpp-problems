#include <iostream>
using namespace std;

class Stack
{

public:
    int size;
    int top;
    int* arr;

    Stack(int x)
    {
        this->size = x;
        this->top = -1;
        this->arr = new int[x];
    }

    void push(int x)
    {
        if (top == size - 1)
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
            return -1;
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

    Stack x(5);

    x.push(5);
    cout << x.topVal() << endl;
    x.push(3);
    cout << x.topVal() << endl;
    x.pop();
    cout << x.topVal() << endl;
    x.pop();
    cout << x.topVal() << endl;

    return 0;
}