/* Write a C program to input basic salary of an employee and
 calculate its Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95% */
#include<stdio.h>
int main()
{
   int salary;
   float HRA,DA;
   printf("Enter your salary");
   scanf("%d",&salary);
   if(salary<=10000){
       HRA=0.2*(salary);
       DA=0.8*(salary);
       printf("Your HRA allowance is %.2f",HRA);
       printf("Your DA allowance is %.2f",DA);
   }
   else if(salary<=20000){
       HRA=0.25*(salary);
       DA=0.90*(salary);
       printf("Your HRA allowance is %.2f",HRA);
       printf("Your DA allowance is %.2f",DA);
   }
   else{
       HRA=0.30*(salary);
       DA=0.95*(salary);
       printf("Your HRA allowance is %.2f",HRA);
       printf("Your DA allowance is %.2f",DA);

   }
   return 0;
}