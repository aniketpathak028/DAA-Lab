#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void acronym(char str[], int l)
{
    char *a;
    a = str;
    printf("The acronym= %c", *a);
    for (int i = 0; i < 20; i++)
    {
        if (*(a + i - 1) == ' ')
        {
            printf("%c", *(a + i));
        }
    }
}
void main()
{
    char str[100];
    fgets(str, sizeof(str), stdin);
    int l = strlen(str);
    printf("%s\n", str);
    acronym(str, l);
}