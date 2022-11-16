#include <stdio.h>

int MCM(int arr[], int n)
{
    int dp[n][n];
    for (int i = 1; i < n; i++)
        dp[i][i] = 0;

    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = i + 1; j < n; ++j) // j must be ahead of i
        {
            int mini = 999999;

            // iterate for all partitions
            for (int k = i; k < j; ++k)
            {
                // total_cost= cost(multiplying the two partitions) + cost(each partition separately)
                int step_count = arr[i - 1] * arr[k] * arr[j] + dp[i][k] + dp[k + 1][j];
                if(step_count<mini)
                    mini = step_count;
            }

            dp[i][j] = mini;
        }
    }

    return dp[1][n - 1];
}

int main()
{
    int arr[] = {10, 20, 30, 40 ,50};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("MCM is %d ", MCM(arr, size));
    return 0;
}