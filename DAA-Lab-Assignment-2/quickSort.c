#include <stdio.h>

void quickSort(int *ar, int first, int last)
{
    int i, j, pivot, temp;

    if (first < last)
    {
        pivot = first;
        i = first;
        j = last;

        while (i < j)
        {
            while (ar[i] <= ar[pivot] && i < last)
            {
                i++;
            }
            while (ar[j] > ar[pivot])
            {
                j--;
            }
            if (i < j)
            {
                temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }

        temp = ar[pivot];
        ar[pivot] = ar[j];
        ar[j] = temp;
        quickSort(ar, first, j - 1);
        quickSort(ar, j + 1, last);
    }
}

int main()
{
    int arr[] = {3, 1, 4, 5, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, size - 1);

    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
