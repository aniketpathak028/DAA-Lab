#include<stdio.h>

int countNumberOfNonZero(int n, int arr[][n]){
    int count = 0;
    for (int i= 0; i < n;++i){
        for (int j = 0; j < n; ++j){
            if(arr[i][j])
                count++;
        }
    }
    return count;
}

int main(){
    printf("Enter the value of n: \n");
    int n;
    scanf("%d", &n);

    int arr[n][n];

    printf("Enter the matrix: \n");
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j){
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The number of non zero elements in the matrix is: \n");

    printf("%d", countNumberOfNonZero(n, arr));

    return 0;
}