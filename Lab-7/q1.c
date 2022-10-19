#include<stdio.h>
int main()
{
    printf("Enter the number of activities: ");
    int n;
    scanf("%d", &n);
    int start[n];
    int finish[n];
    printf("Enter the start and finish time of each activity: ");
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &start[i]);
        scanf("%d", &finish[i]);
    }
    int i, j;
    printf("Following activities are selected: ");
    i = 0;
    printf("%d ", i);
    for (j = 1; j < n; j++)
    {
        if (start[j] >= finish[i])
        {
            printf("%d ", j);
            i = j;
        }
    }
    return 0;
}