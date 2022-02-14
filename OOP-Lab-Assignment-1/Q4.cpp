/**
 * 4.Write a program that uses a structure to store the three parts of a phone number separately.
 */
#include <iostream>

struct phoneNum
{
    int part1;
    int part2;
    int part3;
};

int main()
{
    phoneNum *phone = new phoneNum();

    std::cout << "Enter phone number: ";
    std::cin >> phone->part1 >> phone->part2 >> phone->part3;
    std::cout << "Phone number: " << phone->part1 << "-" << phone->part2 << "-" << phone->part3 << std::endl;

    delete phone;

    return 0;
}
