#include <iostream>
#include <math.h>

using namespace std;

class prime
{
public:
    int num;
    prime()
    {
        cout << "Enter a number: ";
        cin >> num;
    }
    bool isPrime()
    {
        if (num == 1)
        {
            return false;
        }
        for (int i = 2; i <= sqrt(num); i++)
        {
            if (num % i == 0)
            {
                return false;
            }
        }
        return true;
    }
};

int main()
{
    prime p = prime();
    p.isPrime() ? cout << "It is a Prime Number\n" : cout << "It is not a Prime Number\n";

    return 0;
}