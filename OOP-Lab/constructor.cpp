#include <stdio.h>

class test
{

public:
    int value1;
    int value2;
    test(int v1, int v2)
    {
        value1 = v1;
        value2 = v2;
        printf("test constructor with params\n");
    }
    test()
    {
        value1 = 0;
        value2 = 0;
        printf("test constructor without params\n");
    }
    ~test()
    {
        printf("test destructor\n");
    }
};

int main()
{
    test *t1 = new test(1, 2);
    test *t2 = new test();

    printf("%d %d\n", t1->value1, t1->value2);
    printf("%d %d\n", t2->value1, t2->value2);

    delete t1;
    delete t2;
    return 0;
}