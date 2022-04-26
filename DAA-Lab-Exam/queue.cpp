#include <iostream>

#define print(x) std::cout << x << std::endl;

using namespace std;

template <class T>
class Queue
{
private:
    T *arr;
    int capacity;
    int front;
    int rear;

public:
    Queue(int cap)
    {
        this->arr = new T[cap];
        this->capacity = cap;
        this->front = -1;
        this->rear = -1;
    }
    bool isEmpty()
    {
        return (rear == -1 && front == -1);
    }
    bool isFull()
    {
        return (front - rear >= capacity - 1);
    }
    T peek()
    {
        if (isEmpty())
        {
            return -1;
        }
        else
        {
            return arr[rear];
        }
    }
    bool enqueue(T val)
    {
        if (isFull())
        {
            return false;
        }
        else
        {
            if (isEmpty())
            {
                rear = 0;
                front = -1;
            }
            arr[++front] = val;
            return true;
        }
    }
    T dequeue()
    {
        if (isEmpty())
        {
            return -1;
        }
        else
        {
            if (front == rear)
            {
                front = rear = -1;
                return arr[0];
            }
            else
            {
                return arr[rear++];
            }
        }
    }
};

int main()
{
    Queue<int> q(3);
    print(q.isEmpty());
    print(q.peek());
    print(q.enqueue(10));
    print(q.peek());
    print(q.enqueue(12));
    print(q.peek());
    print(q.enqueue(123));
    print(q.peek());
    print(q.dequeue());
    print(q.peek());
    print(q.enqueue(123));
    print(q.isFull());
    print(q.enqueue(123345));
}
