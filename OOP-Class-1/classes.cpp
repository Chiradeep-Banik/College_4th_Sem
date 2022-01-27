#include <iostream>

class Circle
{
public:
    void circle();
};

void Circle::circle()
{
    std::cout << "Circle constructor" << std::endl;
}

int main()
{
    std::cout << "Hello, World!" << std::endl;
    Circle a;
    a.circle();

    return 0;
}