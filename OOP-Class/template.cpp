#include <iostream>
#include <vector>

template <typename T1, typename T2>
void print(T1 a, T2 b)
{
    std::cout << a << " " << b << std::endl;
}

template <typename T>
class node
{
private:
    T data;
    node<T> *next;

public:
    node<T>(T val)
    {
        this->data = val;
        this->next = NULL;
        std::cout << "node created" << std::endl;
    }
    void print()
    {
        std::cout << data << std::endl;
    }
    virtual ~node()
    {
        std::cout << "node deleted" << std::endl;
    }
};
int main()
{
    print<int, std::string>(1, "hello");
    node<int> n1 = node<int>(1);
    node<std::string> n2 = node<std::string>("asd");

    n1.print();
    n2.print();
    return 0;
}