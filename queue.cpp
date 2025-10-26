#include <iostream>
using namespace std;

class Queue
{

public:
    int head;
    int tail;
    int size;
    int *arr;

    Queue(int size)
    {

        this->size = size;
        this->head = -1;
        this->tail = -1;
        this->arr = new int[size];
    }

    void enqueue(int x)
    {
        if (isFull())
        {
            cout << "Overflow";
        }
        else if (tail == size - 1)
        {
            tail = 0;
            arr[tail] = x;
        }
        else
        {
            arr[++tail] = x;
        }
    }

    int dequeue()
    {
        if (isEmpty())
        {
            cout << "Underflow";
        }
        else if (head == size - 1)
        {
            head = 0;
            return arr[head];
        }
        else {
            return arr[++head];
        }
    }

    bool isFull()
    {
        if (tail == size - 1 && head == 0)
        {
            return true;
        }
        else if (tail + 1 == head)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool isEmpty()
    {
        if (tail == head)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

};