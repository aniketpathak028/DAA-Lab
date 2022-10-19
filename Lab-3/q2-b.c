#include <stdio.h>

int main()
{
    int i, j, m, n, d1 = 0, a[5][5];
    printf("How many rows and columns:");
    scanf("%d%d", &m, &n);
    printf("Enter matrix elements:\n");
    for (i = 0; i < m; ++i)
        for (j = 0; j < n; ++j)
        {
            scanf("%d", &a[i][j]);
            if (j > i)
                d1 += a[i][j];
        }
    printf("Sum of elements above the diagonal=%d\n", d1);
    return 0;
}