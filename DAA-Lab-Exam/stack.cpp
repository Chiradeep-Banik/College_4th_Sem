#include <iostream>

using namespace std;

template <class T>
class stack
{
private:
    T *arr;
    int top;
    int capacity;

public:
    stack(int capacity)
    {
        this->arr = new T[capacity];
        this->capacity = capacity;
        this->top = -1;
    }
    bool isFull()
    {
        return (top >= capacity - 1) ? true : false;
    }
    bool isEmpty()
    {
        return (top <= -1);
    }
    T peek()
    {
        if (isEmpty())
        {
            return -1;
        }
        else
        {
            return arr[top];
        }
    }
    bool push(T val)
    {
        if (isFull())
        {
            return false;
        }
        arr[++top] = val;
        return true;
    }
    T pop()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty" << endl;
            return -1;
        }
        return arr[top--];
    }
    ~stack()
    {
        delete[] arr;
    }
};

int main()
{
    stack<int> s(3);
    s.push(1);
    cout << "Is full : " << s.isFull() << endl;
    s.push(2);
    cout << "Is full : " << s.isFull() << endl;
    s.push(3);
    cout << s.peek() << endl;
    cout << "Is full : " << s.isFull() << endl;
    s.push(4);
    cout << s.peek() << endl;
    cout << "Is full: " << s.isFull() << endl;
}