#include <stdio.h>

int main()
{
    int arr[] = {2, 4, 6, 8, 10};
    int x = 8;

    int arrLen = sizeof arr / sizeof arr[0];
    int index = -1;

    for (int i = 0; i < arrLen; i++)
    {
        if (arr[i] == x)
        {
            index = i;
            break;
        }
    }

    if (index > -1)
    {
        printf("Index : %d\n", index);
    }
    else
    {
        printf("%d is not present in this array.\n", x);
    }

    return 0;
}