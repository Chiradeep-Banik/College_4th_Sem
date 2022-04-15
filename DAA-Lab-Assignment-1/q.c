//20UCS176 -- Chiradeep Banik

//Question---Find out the time consumed by a Bubble Sort program.

#include <stdio.h>
#include <time.h>

void swap(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void printArray(int *arr, int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int *bubbleSort(int *ar, int len)
{
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len - i; j++)
        {
            if (ar[j] > ar[j + 1])
            {
                swap(&ar[j], &ar[j + 1]);
            }
        }
    }
    return ar;
}

void main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int length = sizeof(arr) / sizeof(arr[0]);

    time_t startTick, endTick;

    startTick = clock();
    int *p = bubbleSort(arr, length);
    endTick = clock();
    printArray(p, length);
    time_t ticksTaken = endTick - startTick;
    double timeTaken = (double)ticksTaken / (double)CLOCKS_PER_SEC;

    printf("Time taken: %lf s \n", timeTaken);
}