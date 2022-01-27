/* Write a C program to input any character and check 
 is alphabet, digit or special character.*/
#include<stdio.h>
int main()
{
    char ch;
    printf("enter the character");
    scanf("%c",&ch);
     if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')){
        printf("its an alphabet");
    }
    else if(ch>='0'&&ch<='9'){
        printf("it is an digit");
    }
    else{
        printf("it is an special character ");
    }
    return 0;
}