/*Write a C program to input any alphabet and check whether it is
 vowel or consonant.*/
#include<stdio.h>
int main()
{
    char ch;
    printf("enter the character");
    scanf("%c",&ch);
    if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')){
        printf("it is an vowel");
    }
    else if (ch){
        printf("it is a constant");
    }
    else{
        printf("it is not character");
    }
    return 0;
}