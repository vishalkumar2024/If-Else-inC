//code for switch operator //
 #include<stdio.h>
int main (){
 // Taking input the days 
    int day;
    printf("enter the days(1-7):");
    scanf("%d",&day);
    switch(day){
        case 1:printf("monday");
        break;
        case 2:printf("tuesday");
        break;
        case 3:printf("wednesday");
        break;
        case 4:printf("thursday");
        break;
        case 5:printf("friday");
        break;
        case 6:printf("saturday");
        break;
        case 7:printf("sunday");
        break;
        default:printf("not valid day");
    }
    return 0;
}
