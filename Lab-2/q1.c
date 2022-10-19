#include<stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void segregateEvenOdd(int arr[], int n)
{
    int left = 0, right = n - 1;
    while (left < right)
    {
        while ((arr[left] % 2 == 0) && (left < right))
        {
            left++;
        }

        while ((arr[right] % 2 == 1) && (left < right))
        {
            right--;
        }
        if (left < right)
        {
            swap(&arr[left], &arr[right]);
            left++;
            right--;
        }
    }
}

int main()
{
    int size;
    
    printf("Enter the size of the array \n");

    scanf("%d", &size);

    int arr[size];

    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    int i = 0;

    segregateEvenOdd(arr, size);

    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}