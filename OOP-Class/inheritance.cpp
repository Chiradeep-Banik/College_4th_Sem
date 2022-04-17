#include <iostream>

using namespace std;

class vehicle
{
public:
    vehicle() { cout << "vehical" << endl; }
};
class car : public vehicle
{
public:
    car() { cout << "car" << endl; }
};
class bike : public vehicle
{
public:
    bike() { cout << "bike" << endl; }
};

int main()
{
    car c;
    bike b;
    return 0;
}