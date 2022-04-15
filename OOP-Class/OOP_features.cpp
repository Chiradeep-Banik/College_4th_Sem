#include <iostream>

using namespace std;

class student {
    private:
        string name;
        int age;
        int id;
    public:
        student(string name, int age, int id) {
            name = name;
            age = age;
            id = id;
            cout << "Student created" << endl;
        }
        student(student *s){
            name = s->name;
            age = s->age;
            id = s->id;
            cout << "Copy constructor called" << endl;
        }
        void print() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "ID: " << id << endl;
        }
};

int main (){
    enum color { RED=10, GREEN, BLUE };

    student s1 = student("John", 20, 1);
    student s2 = student("Jane", 21, 2);

    student s3 = student(&s1);
    // if(s1 == s3) {
    //     cout << "s1 and s3 are the same" << endl;
    // } else {
    //     cout << "s1 and s3 are different" << endl;
    // }
    s3.print();
}