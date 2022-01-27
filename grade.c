/* Write a C program to input marks of five subjects Physics, 
Chemistry, Biology, Mathematics and Computer. Calculate
 percentage and grade according to following:
Percentage >= 90% : Grade A
Percentage >= 80% : Grade B
Percentage >= 70% : Grade C
Percentage >= 60% : Grade D
Percentage >= 40% : Grade E
Percentage < 40% : Grade F */
#include<stdio.h>
int main()
{
    int phy,chm,mat,com,bio;
    float total,outoff,percent;
    printf("enter your physics marks");
    scanf("%d",&phy);
     printf("enter your chemistry marks");
    scanf("%d",&chm);
     printf("enter your maths marks");
    scanf("%d",&mat);
     printf("enter your computer marks");
    scanf("%d",&com);
     printf("enter your biology marks");
    scanf("%d",&bio);
     printf("enter your total marks of examination");
    scanf("%f",&outoff);
    total=phy+chm+mat+com+bio;
    percent=(total/outoff)*100;
    if(percent>=90){
        printf("your grade is 'A'");
    }
    else if(percent>=80){
        printf("your grade is 'B'");
    }
    else if(percent>=70){
        printf("your grade is 'C'");
    }
    else if(percent>=60){
        printf("your grade is 'D'");
    }
     else if(percent>=50){
        printf("your grade is 'E'");
     }
     else{
         printf("your grade is 'F");
     }
    return 0;



}