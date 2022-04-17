#include <iostream>

using namespace std;

class def
{
public:
    void print()
    {
        cout << "No parameters" << endl;
    }
    void print(int a)
    {
        cout << "One parameter : " << a << endl;
    }
};

int main()
{
    def d;
    d.print();
    d.print(13);
    return 0;
}