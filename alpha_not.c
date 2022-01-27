/*Write a C program to check whether a character is alphabet
 or not.*/
#include<stdio.h>
int main()
{
    char ch;
    printf("enter the character");
    scanf("%c",&ch);
    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')){
        printf("its an alphabet");
    }
    else{
        printf("its not an alphabet");
}

return 0;
}