/**
 * 6.C++ program to create student class, read and print N student's details (Example of array of objects).
 */
#include <iostream>

class student
{
private:
    std::string name;
    int sem;

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
};

int main()
{
    int n;
    std::cout << "Enter number of students : ";
    std::cin >> n;

    student students[n];

    for (int i = 0; i < n; i++)
    {
        students[i].get_details();
    }
    std::cout << "\nStudent Details:\n";
    for (int j = 0; j < n; j++)
    {
        students[j].print_details();
    }
    return 0;
}
