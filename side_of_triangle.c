#include<stdio.h>
int main (){
    // Taking input all the sides
    int a,b,c;
    printf("enter the values of a,b and c:");
    scanf("%d %d %d",&a,&b,&c);

    // checking the formation of sides can be a triangle or not
    if (a+b>c && b+c>a && a+c>b){
        printf("valid traingle ");
    }
    else {
        printf("invalid triangle");
    }
    return 0;
}
