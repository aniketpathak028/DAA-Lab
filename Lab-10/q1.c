#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int max(int x, int y)
{
    if (x > y)
        return x;
    return y;
}

int main()
{
    char s1[] = "abbcca", s2[] = "abccca";
    int dp[strlen(s1) + 1][strlen(s2) + 1];
    int n = strlen(s1), m = strlen(s2);
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
            // base-case
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else
            {
                if (s1[i - 1] == s2[j - 1])
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                else
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
    }
    printf("%d\n", dp[n][m]);
    return 0;
}