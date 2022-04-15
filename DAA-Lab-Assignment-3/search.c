#include <stdio.h>

int linearSearch(int *ar, int len, int target)
{
    for (int i = 0; i < len; i++)
    {
        if (ar[i] == target)
        {
            return 1;
        }
    }
    return 0;
}

int binarySearch(int *ar, int left, int right, int target)
{
    if (left > right)
    {
        return 0;
    }
    else
    {
        int mid = (left + right) / 2;
        if (ar[mid] == target)
        {
            return 1;
        }
        else
        {
            if (ar[mid] > target)
            {
                binarySearch(ar, left, mid - 1, target);
            }
            else
            {
                binarySearch(ar, mid + 1, right, target);
            }
        }
    }
}

void main()
{
    int array[] = {1, 2, 3, 4, 5};
    if (linearSearch(array, 5, 5))
    {
        printf("Found using linear search.\n");
    }
    else
    {
        printf("Not found using linear search.\n");
    }

    if (binarySearch(array, 0, 4, 1))
    {
        printf("Found using binary search.\n");
    }
    else
    {
        printf("Not found using binary search.\n");
    }
}