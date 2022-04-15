// 20UCS176_ChiradeepBanik

#include <iostream>

using namespace std;

class circle
{
public:
    int r;
    circle()
    {
        cout << "Enter radius : ";
        cin >> r;
    }
    void area()
    {
        cout << "Area of circle : " << (22 * r * r) / 7 << endl;
    }
};

int main()
{
    circle *c = new circle();
    c->area();
    delete c;

    return 0;
}