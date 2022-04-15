#include <iostream>

using namespace std;

#define MAX_SIZE 100

#undef MAX_SIZE

#ifndef MAX_SIZE
#define MAX_SIZE 1
#endif

#define msg(x) cout << #x << ": " << x << endl;

class student
{
private:
    string name;
    int age;

public:
    student(string nam, int ag)
    {
        name = nam;
        age = ag;
    }
    student(student &stu2)
    {
        name = stu2.name;
        age = stu2.age;
    }
    void print()
    {
        msg(name);
        msg(age);
    }
    virtual void doWork() = 0;
};

class engineer : public student
{
private:
    string branch;

public:
    static int counter;
    engineer(string name, int age, string branch) : student(name, age)
    {
        branch = branch;
        cout << "Counter (inside engineer): " << counter << endl;
    }
    void doWork()
    {
        cout << "Engineer is working" << endl;
        counter++;
    }
};

class scientist : public student
{
private:
    string field;

public:
    scientist(string name, int age, string field) : student(name, age)
    {
        field = field;
    }
    void doWork()
    {
        cout << "Scientist is working" << endl;
    }
};

class worker : public scientist, public engineer
{
private:
    string area;

public:
    worker(string name, int age, string branch, string field, string area) : scientist(name, age, field), engineer(name, age, branch)
    {
        area = area;
    }
    void doWork()
    {
        cout << "Worker is working" << endl;
    }
};

int engineer::counter = 13;

int main()
{
    engineer e = engineer("Raj", 20, "CSE");
    scientist s = scientist("Raju", 20, "Physics");
    worker w = worker("Raj", 20, "CSE", "Physics", "Earth");

    e.doWork();
    s.doWork();
    w.doWork();

    engineer e2 = engineer("asd", 22, "CSE4");
    e2.doWork();
    cout << e2.counter << endl;
    cout << e.counter << endl;

    cout << MAX_SIZE << endl;
}