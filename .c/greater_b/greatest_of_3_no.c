#include <stdio.h>
int main()
{
    // Takng input first number//
    int a;
    printf("Enter the value of a:");
    scanf("%d", &a);

    // Takng input Second number//
    int b;
    printf("Enter the value of b:");
    scanf("%d", &b);

    
    // Takng input third number//
    int c;
    printf("Enter the value of c:");
    scanf("%d", &c); 
    
    // compare of three numbers//
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
