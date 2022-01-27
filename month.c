/*Write a C program to input month number and print 
number of days in that month.*/

#include<stdio.h>
int main()
{
    int month;
    printf("enter the month no:");
    scanf("%d",&month);
    if(month==1||month==3||month==5||month==7||month==8||month==10||month==12){
        printf("entered month is having 31 days");
    }
    else if(month==4||month==6||month==9||month==11){
        printf("entered month is having 30 days");
    }
    else{
        printf("entered month is having 28 days");
    }
    return 0;
}