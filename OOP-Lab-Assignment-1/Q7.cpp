/**
 * 7.By using array of object find the area of two rectangles.
 */
#include <iostream>

class rectangle
{
private:
    int length;
    int breadth;

public:
    void getData()
    {
        std::cout << "Enter length : ";
        std::cin >> length;
        std::cout << "Enter breadth : ";
        std::cin >> breadth;
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
    for (int i = 0; i < 2; i++)
    {
        std::cout << "Area: " << rectangles[i].area() << std::endl;
    }

    return 0;
}