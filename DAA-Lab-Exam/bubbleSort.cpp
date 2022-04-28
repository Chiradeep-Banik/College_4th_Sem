// Bubble sort

#include <iostream>
using namespace std;
int main()
{
    int i, j, temp;
    int a[5] = {4, 1, 3, 2, 5};
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (a[j] < a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout << "Sorted Element List : ";
    for (i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}