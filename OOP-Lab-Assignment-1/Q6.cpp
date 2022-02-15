/**
 * 6.C++ program to create student class, read and print N student's details (Example of array of objects).
 */
#include <iostream>
using namespace std;
class student
{
private:
    string name;
    int sem;

public:
    void get_details()
    {
        cout << "Enter name : ";
        cin >> name;
        cout << "Enter semester : ";
        cin >> sem;
    }
    void print_details()
    {
        cout << "\nName: " << name << endl;
        cout << "Semester: " << sem << endl;
    }
};

int main()
{
    int n;
    cout << "Enter number of students : ";
    cin >> n;

    student students[n];

    for (int i = 0; i < n; i++)
    {
        students[i].get_details();
    }
    cout << "\nStudent Details:\n";
    for (int j = 0; j < n; j++)
    {
        students[j].print_details();
    }
    return 0;
}
