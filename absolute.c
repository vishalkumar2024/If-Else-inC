#include<stdio.h>
int main (){
    
    // taking input the number
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    
    // converting the no. into absolute no.
    if (n<0){
        n=n*(-1);
    }
    printf("the absolute value  is %d",n);
    return 0;
}
