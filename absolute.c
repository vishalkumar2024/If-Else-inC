#include<stdio.h>
int main (){
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    if (n<0){
        n=n*(-1);
    }
    printf("the absolute value  is %d",n);
    return 0;
}