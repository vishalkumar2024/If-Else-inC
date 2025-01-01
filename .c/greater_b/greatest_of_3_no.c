#include <stdio.h>
int main()
{
    // input three numbers//
    int a;
    printf("Enter the value of a:");
    scanf("%d", &a);

    int b;
    printf("Enter the value of b:");
    scanf("%d", &b);
    
    int c;
    printf("Enter the value of c:");
    scanf("%d", &c); // compare of three numbers//
    if (a > b && a > c)
    {
        printf("a is greatest");
    }
    else if (b > c)
    {
        printf("b is greatest");
    }
    else
    {
        printf("c is greatest ");
    }
    return 0;
}