#include <iostream>

using namespace std;

bool binarySearch(int ar[], int target, int first, int last)
{
    if (first > last)
        return false;
    int middle = (first + last) / 2;
    if (ar[middle] == target)
    {
        return true;
    }
    else
    {
        if (ar[middle] < target)
        {
            int temp = middle + 1;
            binarySearch(ar, target, temp, last);
        }
        else
        {
            int temp = middle - 1;
            binarySearch(ar, target, first, temp);
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    cout << "Found : " << binarySearch(arr, 6, 0, 4) << endl;
    cout << "Found : " << binarySearch(arr, 1, 0, 4) << endl;
}
