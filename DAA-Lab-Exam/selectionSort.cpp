// Selevtion Sort

#include <iostream>
using namespace std;

int findSmallest(int myarray[], int i)
{
    int ele_small, position, j;
    ele_small = myarray[i];
    position = i;
    for (j = i + 1; j < 5; j++)
    {
        if (myarray[j] < ele_small)
        {
            ele_small = myarray[j];
            position = j;
        }
    }
    return position;
}
int main()
{
    int myarray[5] = {4, 1, 3, 2, 5};
    int pos, temp;
    for (int i = 0; i < 5; i++)
    {
        pos = findSmallest(myarray, i);
        temp = myarray[i];
        myarray[i] = myarray[pos];
        myarray[pos] = temp;
    }
    cout << "Sorted list of elements is : ";
    for (int i = 0; i < 5; i++)
    {
        cout << myarray[i] << " ";
    }
    cout << endl;
    return 0;
}
