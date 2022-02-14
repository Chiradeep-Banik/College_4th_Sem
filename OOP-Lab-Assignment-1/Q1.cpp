/**
 * 1.       C++ program to create a simple class and object.
 */
#include <iostream>

class SimpleClass
{
public:
    std::string name = "SimpleClass";
    void printName()
    {
        std::cout << "I am " << name << std::endl;
    }
};

int main()
{
    SimpleClass *simple_class = new SimpleClass();
    simple_class->printName();

    delete simple_class;
    return 0;
}