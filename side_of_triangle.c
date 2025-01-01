#include<stdio.h>
int main (){
    int a,b,c;
    printf("enter the values of a,b and c:");
    scanf("%d %d %d",&a,&b,&c);
    if (a+b>c && b+c>a && a+c>b){
        printf("valid traingle ");
    }
    else {
        printf("invalid triangle");
    }
    return 0;
}