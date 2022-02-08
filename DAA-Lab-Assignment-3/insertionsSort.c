#include <stdio.h>

int *insertionSort(int *ar, int len)
{
    for (int i = 1; i < len; i++)
    {
        int temp = ar[i];
        for (int j = i - 1; j >= 0; j--)
        {
            if (ar[j] > temp)
            {
                ar[j + 1] = ar[j];
                ar[j] = temp;
            }
        }
    }

    return ar;
}

void main()
{
    int array[] = {2, 4, 5, 1, 3};
    int *sortedArray = insertionSort(array, 5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", sortedArray[i]);
    }
    printf("\n");
}