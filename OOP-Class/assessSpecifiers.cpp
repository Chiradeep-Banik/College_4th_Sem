#include <iostream>
#include <string>

using string = std::string;

class Circle
{
public:
    Circle()
    {
        std::cout << "Circle constructor" << std::endl;
    }
    void privateCall()
    {
        std::cout << "Call from inside a circle public function -- ";
        printPrivate();
    }
    void protectedCall()
    {
        std::cout << "Call from inside a circle public function -- ";
        printProtected();
    }
    ~Circle()
    {
        std::cout << "Circle destructor" << std::endl;
    }

private:
    void printPrivate()
    {
        std::cout << "private function" << std::endl;
    }

protected:
    void printProtected()
    {
        std::cout << "protected function" << std::endl;
    }
};

class Box : public Circle
{
private:
    string name = "Box";

public:
    Box()
    {
        std::cout << "Box constructor" << std::endl;
    }
    void protectedCircleCall()
    {
        std::cout << "Call from box public function to the circle protected -- ";
        printProtected();
    }
    void printName(Box b)
    {
        std::cout << b.name << std::endl;
    }
    ~Box()
    {
        std::cout << "Box destructor" << std::endl;
    }
};

int main()
{
    Circle *c = new Circle();
    c->privateCall();
    c->protectedCall();
    delete c;

    Box *b = new Box();
    b->protectedCircleCall();
    b->printName(*b);
    delete b;

    return 0;
}