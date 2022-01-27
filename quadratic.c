//Write a C program to find all roots of a quadratic equation.
#include<stdio.h>
#include<math.h>
int main()
{
    float D,a,b,c;
    float root1,root2,imaginary;
   
    printf("enter the coefficient of quadratic equation(ax^2+bx+c):");
    scanf("%f %f %f",&a,&b,&c);
    D=b*b-4*(a*c);
    if(D>0){
        root1=(-b+sqrt(D))/(2*a);
        root2=(-b-sqrt(D))/(2*a);
        printf("root1=%.2f & root2=%.2f",root1,root2);
    }
    else if(D<0){
        root1=root2=(-b/(2*a));
        imaginary=(sqrt(-D))/(2*a);
        
        printf("root1=%.2f+i(%.2f)& root2=%.2f+i(%.2f)",root1,imaginary,root2,imaginary);

    }
    else{
        root1=root2=-b/(2*a);
         printf("root1=root2=%.2f",root1);
    }
    return 0;

}