// Quick Sort

#include <iostream>
using namespace std;
// Swap two elements - Utility function
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
// partition the array using last element as pivot
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++)
    {
        // if current element is smaller than pivot, increment the low element
        // swap elements at i and j
        if (arr[j] <= pivot)
        {
            i++; // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

// quicksort algorithm
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        // partition the array
        int pivot = partition(arr, low, high);
        // sort the sub arrays independently
        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }
}
int main()
{
    int arr[] = {2, 4, 1, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);
    cout << "Sorted list of elements is : ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}