#include <stdio.h>
#include <stdlib.h>

void productArray(int arr[], int n)
{
    int new_arr[n];

    for (int i = 0; i < n; ++i){
        int prod = 1;
        for (int j = 0; j < n; ++j){
            if(j!=i)
                prod = prod * arr[j];
        }
        new_arr[i] = prod;
    }

    for (int i = 0; i < n; ++i){
        printf("%d ", new_arr[i]);
    }
}

int main()
{
    int arr[] = {10, 3, 5, 6, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("The product array is: \n");
    productArray(arr, n);
    getchar();
}