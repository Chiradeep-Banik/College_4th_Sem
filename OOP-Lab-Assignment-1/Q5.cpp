/**
 * 5.Program to illustrate the working of objects and class in C++ Programming.
 */
#include <iostream>
using namespace std;
class workingClass
{
private:
    string name = "workingClass";

public:
    void printName()
    {
        cout << "I am a " << name << endl;
    }
};

int main()
{
    workingClass *working_class = new workingClass();
    working_class->printName();

    delete working_class;
    return 0;
}