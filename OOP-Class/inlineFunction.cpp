#include <iostream>

using namespace std;

class def
{
public:
    inline void hello()
    {
        cout << "Hello !!!" << endl;
    }
};

int main()
{
    def d;
    d.hello();
    return 0;
}