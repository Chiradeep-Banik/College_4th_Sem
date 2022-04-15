// 20UCS176_ChiradeepBanik

#include <iostream>

class circle
{
public:
    circle()
    {
        int r;
        std::cout << "Enter radius : ";
        std::cin >> r;
        double area = 3.14 * r * r;
        std::cout << "Area : " << area << std::endl;
    }
};

int main()
{
    circle *c = new circle();
    delete c;

    return 0;
}