#include <stdio.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void sort(int arr[], int n)
{
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
        swap(&arr[min_idx], &arr[i]);
    }
}

void intersection(int a[], int b[], int n, int m)
{
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (a[i] > b[j])
        {
            j++;
        }
        else if (b[j] > a[i])
        {
            i++;
        }
        else
        {
            printf("%d ", a[i]);
            i++;
            j++;
        }
    }
}

int main()
{
    int a[] = {1, 3, 2, 3, 3, 4, 5, 5, 6};
    int b[] = {3, 3, 5};

    int n = sizeof(a) / sizeof(a[0]);
    int m = sizeof(b) / sizeof(b[0]);

    sort(a, n);
    sort(b, m);

    intersection(a, b, n, m);
}
