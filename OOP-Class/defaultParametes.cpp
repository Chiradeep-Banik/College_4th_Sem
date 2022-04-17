#include <iostream>

using namespace std;

class def
{
public:
    void print(int a = 13)
    {
        cout << "a = " << a << endl;
    }
};

int main()
{
    def d;
    d.print();
    d.print(5);
    return 0;
}