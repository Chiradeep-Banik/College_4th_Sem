#include <iostream>

using namespace std;

class armstrong
{
public:
    int num;
    armstrong()
    {
        cout << "Enter a number: ";
        cin >> num;
    }
    bool isArmstrong()
    {
        int original = num;
        int sum = 0;
        while (num > 0)
        {
            int digit = num % 10;
            sum += digit * digit * digit;
            num /= 10;
        }
        return sum == original;
    }
};

int main()
{
    armstrong a = armstrong();
    a.isArmstrong() ? cout << "It is an Armstrong Number\n" : cout << "It is not an Armstrong Number\n";

    return 0;
}