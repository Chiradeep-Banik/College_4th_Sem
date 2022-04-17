#include <iostream>

using namespace std;

class def
{
public:
    static int value;
    static void print()
    {
        cout << "Static member : " << value << endl;
    }
    def() { value++; }
};

int def::value = 13;

int main()
{
    def d;
    def::print();
    return 0;
}