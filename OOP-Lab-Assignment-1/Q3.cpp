/**
 * 3.C++ program to create class to get and print details of a student
 */
#include <iostream>
using namespace std;
class student
{
public:
    void getDetails()
    {
        cout << "Enter name : ";
        cin >> name;
        cout << "Enter semester : ";
        cin >> sem;
    }
    void printDetails()
    {
        cout << "\nName: " << name << endl;
        cout << "Semester: " << sem << endl;
    }

private:
    string name;
    int sem;
};

int main()
{
    student *stu = new student();
    stu->getDetails();
    stu->printDetails();

    delete stu;

    return 0;
}