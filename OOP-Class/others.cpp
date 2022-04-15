#include <iostream>

#define msg(x) std::cout << x << std::endl;

namespace space1
{
    int a = 100;
} // namespace space1

#ifndef MAX_SIZE
#define MAX_SIZE 1
#endif

namespace space2
{
    int a = 200;
} // namespace space2

using namespace space2;

int main()
{
    msg("Hello World!");
    msg(a);
}