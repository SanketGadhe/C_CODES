//Write a C program to check whether a year is leap year or not.
#include<stdio.h>
int main()
{
    int year;
    printf("enter the year");
    scanf("%d",&year);
    if(year%4==0&&year%100!=0||year%400==0){
        printf("entered year is leap year");
    }
    else{
        printf("enterd year is a non leap year");
    }
    return 0;

}