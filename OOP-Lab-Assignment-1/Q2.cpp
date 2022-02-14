/**
 * 2. Write a program to implement a Class.
 */
#include <iostream>

class Class
{
public:
    void hello()
    {
        std::cout << "Hello" << std::endl;
    }
};

int main()
{
    Class *_class = new Class();
    _class->hello();

    delete _class;
    return 0;
}