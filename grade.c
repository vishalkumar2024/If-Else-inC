#include<stdio.h>
int main(){
    int mark;
    printf("enter the mark:");
    scanf("%d",&mark);
    if(mark>=0 && mark<30){
        printf("c");
    }
    else if (mark>=30 && mark<70){
        printf("B");
    }
    else if(mark>=70 && mark<90){
        printf("A");
    }
    else if(mark>=90 && mark<=100){
        printf("A+");
    }
    else {
        printf("not valid number");
    }
    
   return 0; 
}