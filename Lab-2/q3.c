#include <stdio.h>

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int main()
{
    int a, b;
    printf("Enter two numbers: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    int GCD = gcd(a, b);
    printf("The GCD of the two numbers are: %d", GCD);
    return 0;
}
