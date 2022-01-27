/*Write a C program to input all sides of a triangle
 and check whether triangle is valid or not.*/
 #include<stdio.h>
int main()
{
    int A,B,C;
    printf("enter three SIDES of triangle");
    scanf("%d %d %d",&A,&B,&C);
    if((A+B>=C)&&(A+C>=B)&&(C+B>=A)){
        printf("It is an Valid Triangle");
    }
     else{
        printf("It is an Invalid Triangle");
    }
    return 0;
}