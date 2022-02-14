/**
 * 3.C++ program to create class to get and print details of a student
 */
#include <iostream>

class student
{
public:
    void get_details()
    {
        std::cout << "Enter name : ";
        std::cin >> name;
        std::cout << "Enter semester : ";
        std::cin >> sem;
    }
    void print_details()
    {
        std::cout << "\nName: " << name << std::endl;
        std::cout << "Semester: " << sem << std::endl;
    }

private:
    std::string name;
    int sem;
};

int main()
{
    student *stu = new student();
    stu->get_details();
    stu->print_details();

    delete stu;

    return 0;
}