/*Write a C program to check whether a number is divisible by 5 
and 11 or not.*/
#include<stdio.h>
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    if(num%5==0&&num%11==0){
        printf("number is devisible by 5 and 11");
    }
    else if(num%5==0){
        printf("number is devisible by 5");
    }
    else if(num%11==0){
        printf("number is devisible by 11");
    }
    else{
        printf("number is not devisible by 5 & 11");
    }
return 0;
}