#include <stdio.h>

int *selectionSort(int *ar, int len)
{
    for (int i = 0; i < len; i++)
    {
        int lowestIndex = i;
        int lowestTerm = ar[i];
        for (int j = i + 1; j < len; j++)
        {
            if (ar[j] < lowestTerm)
            {
                lowestTerm = ar[j];
                lowestIndex = j;
            }
        }
        if (lowestIndex != i)
        {
            int temp = ar[i];
            ar[i] = ar[lowestIndex];
            ar[lowestIndex] = temp;
        }
    }
    return ar;
}

void main()
{
    int array[] = {2, 4, 5, 1, 3};
    int *sortedArray = selectionSort(array, 5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", sortedArray[i]);
    }
    printf("\n");
}