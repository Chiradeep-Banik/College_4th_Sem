/**
 * 2. Write a program to implement a Class.
 */
#include <iostream>

using namespace std;

class Class
{
public:
    void hello()
    {
        cout << "Hello" << endl;
    }
};

int main()
{
    Class *_class = new Class();
    _class->hello();

    delete _class;
    return 0;
}