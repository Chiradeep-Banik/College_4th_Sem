#include <iostream>

using namespace std;

class summation
{
public:
    int sum;
    summation() { sum = 0; }
    summation(int a, int b) { sum = a + b; }
};

int main()
{
    summation s1;
    summation s2(10, 3);
    cout << "Sum of s1 is " << s1.sum << endl;
    cout << "Sum of s2 is " << s2.sum << endl;
    return 0;
}