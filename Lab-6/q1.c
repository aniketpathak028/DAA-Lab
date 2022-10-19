#include <stdio.h>

void display(int arr[], int size);
void heapSort(int arr[], int size);
void minHeap(int arr[], int size);

int main()
{
    int arr[] = {-1, 40, 60, 10, 20, 50, 30};

    int n = sizeof(arr) / sizeof(arr[0]);

    display(arr, n);

    heapSort(arr, n);

    display(arr, n);

    return 0;
}

void display(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void heapSort(int arr[], int size)
{
    int i, j, tmp, sorted[size];
    sorted[0] = -1;

    for (i = size, j = 1; i >= 1; i--, j++)
    {
        minHeap(arr, i);
        sorted[j] = arr[1];
        arr[1] = arr[i - 1];
    }

    for (i = 0; i < size; i++)
    {
        arr[i] = sorted[i];
    }
}

void minHeap(int arr[], int size)
{
    int i, left, right, tmp, val;

    for (i = size / 2; i >= 1; i--)
    {
        tmp = i;
        left = (2 * i);
        right = (2 * i) + 1;

        if (left < size && arr[left] < arr[tmp])
        {
            tmp = left;
        }

        if (right < size && arr[right] < arr[tmp])
        {
            tmp = right;
        }

        if (tmp != i)
        {
            val = arr[i];
            arr[i] = arr[tmp];
            arr[tmp] = val;
            minHeap(arr, size);
        }
    }
}