//Write a C program to check whether a number is even or odd.
#include<stdio.h>
int main()
{
    int num;
    printf("enter the number");
    scanf("%d",&num);
    if(num%2==0){
        printf("number is even number");
    }
    else if(num%2!=0){
        printf("number is odd number");
    }
    else {
        printf("wrong input");
    }
    return 0;
}