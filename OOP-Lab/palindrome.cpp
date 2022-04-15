#include <iostream>

using namespace std;

class palindrome
{
public:
    string s;
    palindrome()
    {
        cout << "Enter a string: ";
        cin >> s;
    }
    bool isPalindrome()
    {
        if (s.length() == 0)
            return true;
        for (int i = 0; i < s.length() / 2; i++)
        {
            if (s[i] != s[s.length() - 1 - i])
                return false;
        }
        return true;
    }
};

int main()
{
    palindrome p = palindrome();
    p.isPalindrome() ? cout << "It is a palindrome\n" : cout << "It is not a palindrome\n";

    return 0;
}