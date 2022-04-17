#include <iostream>

using namespace std;

class update
{
public:
    update(int *val) { *val = 1313; }
};

int main()
{
    int a = 13;
    int &b = a;
    cout << "a = " << a << endl;
    update update(&b);
    cout << "a = " << a << endl;
    return 0;
}