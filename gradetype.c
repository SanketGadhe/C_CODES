 /*Write a program in C to accept a grade and declare the
  equivalent description : Go to the editor
Grade	Description
E=Excellent
V=Very Good
G=Good
A=Average
F=Fail*/
#include<stdio.h>
int main()
{
    char ch;
    printf("enter the grade");
    scanf("%c",&ch);
    if(ch=='E'){
        printf("EXCELLENT");
    }
    else if(ch=='V'){
        printf("VERY GOOD");
    }
    else if(ch=='G'){
        printf(" GOOD");
    }
    else if(ch=='A'){
        printf("AVERAGE");
    }
    else if(ch=='F'){
        printf("FAIL");
    }
    else{
        printf("WRONG INPUT");
    }
    return 0;

}