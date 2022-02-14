/**
 * 5.Program to illustrate the working of objects and class in C++ Programming.
 */
#include <iostream>

class workingClass
{
private:
    std::string name = "workingClass";

public:
    void printName()
    {
        std::cout << "I am a " << name << std::endl;
    }
};

int main()
{
    workingClass *working_class = new workingClass();
    working_class->printName();

    delete working_class;
    return 0;
}