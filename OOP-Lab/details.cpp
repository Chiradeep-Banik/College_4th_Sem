#include <iostream>

using namespace std;

class me
{
public:
    string name;
    string enrollnum;
    string email;

    me()
    {
        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter your enrollment number: ";
        cin >> enrollnum;
        cout << "Enter your email: ";
        cin >> email;
    }
    void displayDetails()
    {
        cout << "\nName: " << name << endl;
        cout << "Enrollment number: " << enrollnum << endl;
        cout << "Email: " << email << endl;
    }
};

int main()
{
    me m = me();
    m.displayDetails();

    return 0;
}