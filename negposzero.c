/*Write a C program to check whether a number is negative, 
positive or zero.*/
#include<stdio.h>
int main()
{
    int a;
    printf("enter the value of a");
    scanf("%d",&a);
    if(a>0){
        printf("a is positive");
    }
    else if(a<0){
        printf("a is negative");
    }
    else{
        printf("a is zero");
    }
    return 0;
}