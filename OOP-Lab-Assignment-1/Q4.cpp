/**
 * 4.Write a program that uses a structure to store the three parts of a phone number separately.
 */
#include <iostream>
using namespace std;
struct phoneNum
{
    int part1, part2, part3;
};

int main()
{
    phoneNum *phone = new phoneNum();

    cout << "Enter phone number: ";
    cin >> phone->part1 >> phone->part2 >> phone->part3;
    cout << "Phone number: " << phone->part1 << "-" << phone->part2 << "-" << phone->part3 << endl;

    delete phone;

    return 0;
}
