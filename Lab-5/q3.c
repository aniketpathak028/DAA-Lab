#include <stdio.h>
void Algo(int B, int A)
{
    static int high, low;
    if (A > B)
    {
        printf("Is the number %d ?\n", B);
        printf("Try a bigger number\n");
        low = B;
        high = B * 2;
        printf("\nC = %d \n\n", high);
        Algo(high, A);
    }
    else if (B > A)
    {
        printf("Is the number %d ?\n", B);
        printf("Try a smaller number\n");
        high = (high + low) / 2;
        // //for negative number
        // if(A<0){
        //     high=-1;
        //     Algo(high,A);
        //     low=high*2;
        //     Algo
        //     }

        // //for positive and 0
        if ((high + low) / 2 >= 0)
            Algo((high + low) / 2, A);
    }
    if (B == A)
    {
        printf("Is the number %d ?\n", B);
        printf("You found it!!\n");
    }
}
void main()
{
    int A, B = 1;
    printf("Enter the number:");
    scanf("%d", &A);
    Algo(B, A);
}
