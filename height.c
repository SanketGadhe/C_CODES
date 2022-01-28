 /*Write a C program to accept the height of a person in 
 centimeter and categorize the person according to their 
 height*/
#include<stdio.h>
int main()
{
    int height;
    printf("enter the height of person");
    scanf("%d",&height);
    if(height<150){
        printf("person height is short  ");     
    }
    else if (height>=150&&height<165){
printf("person height is average ");
    }
     else if (height>=165&&height<195){
printf("person height is taller ");
    }
    else{
        printf("person is very tall");
    }
    return 0;
}