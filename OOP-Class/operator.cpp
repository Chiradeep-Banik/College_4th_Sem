#include <iostream>

using namespace std;

class vec
{
public:
    int x, y;
    vec(int a, int b)
    {
        x = a;
        y = b;
    }
    void print()
    {
        cout << "(" << x << "," << y << ")" << endl;
    }
    vec operator+(vec other)
    {
        return vec(x + other.x, y + other.y);
    }
};

int main()
{
    vec v1(1, 2);
    v1.print();
    vec v2(3, 4);
    v2.print();
    vec v3 = v1 + v2;
    v3.print();
    return 0;
}