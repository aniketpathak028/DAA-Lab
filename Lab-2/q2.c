#include <stdio.h>
int main()
{
    int num, i, j;
    printf("Enter the number of elements in the array : ");
    scanf("%d", &num);
    int arr[num];
    printf("Enter the elements of the array : ");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    int frequency[num];
    int visited = -1;

    for (i = 0; i < num; i++)
    {
        int count = 1;
        for (j = i + 1; j < num; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                frequency[j] = visited;
            }
        }
        if (frequency[i] != visited)
        {
            frequency[i] = count;
        }
    }
    printf("Element Frequencies are: \n");
    int maxi = 0;
    for (i = 0; i < num; i++)
    {
        if (frequency[i] != visited)
        {
            if(frequency[i]>maxi)
                maxi = frequency[i];
            printf("%d \t : %d \n", arr[i], frequency[i]);
        }
    }

    printf("Maximum frequency : %d", maxi);
    return 0;
}