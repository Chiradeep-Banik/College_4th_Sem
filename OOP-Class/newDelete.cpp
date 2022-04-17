#include <iostream>

using namespace std;

class hello
{
public:
    hello() { cout << "hello" << endl; }
    ~hello() { cout << "bye" << endl; }
};

int main()
{
    hello *h = new hello();
    delete h;
    return 0;
}