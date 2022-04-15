/**
 * 7.By using array of object find the area of two rectangles.
 */
#include <iostream>
using namespace std;
class rectangle
{
private:
    int length;
    int breadth;

public:
    void getData()
    {
        cout << "Enter length : ";
        cin >> length;
        cout << "Enter breadth : ";
        cin >> breadth;
    }
    int area()
    {
        return length * breadth;
    }
};

int main()
{
    rectangle rectangles[2];

    for (int i = 0; i < 2; i++)
    {
        rectangles[i].getData();
    }
    for (int j = 0; j < 2; j++)
    {
        cout << "Area: " << rectangles[j].area() << endl;
    }

    return 0;
}