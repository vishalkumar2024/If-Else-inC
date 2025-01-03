// This is the code checking input character is upperCase or lowerCase
#include <stdio.h>
int main (){
 // Taking input the character 
    char ch;
    printf("enter the character :");
    scanf("%c",&ch);
 // Checking....
if(ch>='a' && ch<='z'){
    printf("lower case ");
}
else if(ch>='A' && ch<='Z' ){
    printf("upper case ");
}
else {
    printf("not defined");
}
return 0;
}
