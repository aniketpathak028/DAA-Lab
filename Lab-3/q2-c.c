#include <stdio.h>

int main()
{
    int array1[10][10], i, j, m, n, sum = 0;

    printf("Enter no. of rows :: ");
    scanf("%d", &m);
    printf("\nEnter no. of cols :: ");
    scanf("%d", &n);
    printf("\nEnter values to the matrix :: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("\nEnter a[%d][%d] value :: ", i, j);
            scanf("%d", &array1[i][j]);
        }
    }

    int prod = 1;

    printf("\nThe product of the diagonal elements is :: \n\n");

    for (int i = 0; i < m; ++i){
        for (int j = 0; j < n; ++j){
            if(i==j)
                prod = prod * array1[i][j];
        }
    }

    printf("%d", prod);

    return 0;
}