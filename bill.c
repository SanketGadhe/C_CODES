/*Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill*/
#include<stdio.h>
int main()
{
    int unit;
    float bill,servicechrg,total;
    printf("Enter your electric unit");
    scanf("%d",&unit);
    if(unit<=50){
        bill=0.50*(unit);
        }
        else if(unit<=150){
            bill=25+(unit-50)*0.75;
        }
        else if (unit<=250){
            bill=100+(unit-150)*1.20;
        }
        else{
            bill=220+(unit-250)*1.50;
        }
        printf("your bill amount : %.2f\n",bill);
        servicechrg=bill*(0.2);
        printf("you are paying service charge : %.2f\n",servicechrg);
        total=bill+servicechrg;
        printf("you are bound to pay an total amount : %.2f\n",total);
        return 0;



}