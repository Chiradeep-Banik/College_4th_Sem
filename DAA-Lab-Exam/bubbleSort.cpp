#include <iostream>

using namespace std;

int *bubbleSort(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << endl;
    }
    return arr;
}

int main()
{
    int ar[] = {4, 2, 1, 3, 5};
    int *sorted = bubbleSort(ar, size(ar));
    for (int i = 0; i < size(ar); i++)
    {
        cout << sorted[i] << " ";
    }
    cout << endl;
}