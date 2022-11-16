#include <stdio.h>

int main()
{
    int arr[5] = {2, 3, 1, 4, 5};

    int max_sum = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; ++j)
        {
            if (arr[i] + arr[j] > max_sum)
                max_sum = arr[i] + arr[j];
        }
    }

    printf("The maximum sum is: %d", max_sum);

    return 0;
}