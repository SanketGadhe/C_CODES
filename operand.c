/*write a program where input of performing operation is given 
by the user*/
#include<stdio.h>
int main()
{
    char ch;
    float a,b;
    float c;
   
    
    printf("enter the operator to perform operation::");
    scanf("%c",&ch);
    if(ch=='+'){
         
         printf("you have chossed addition operation\n");
         printf("enter the value of a and b\n");
         scanf("%f %f",&a,&b);
         c=a+b;
         printf("So, Sum of a and b is %f",c);
    }
    else if(ch=='-'){
        
         printf("you have chossed subraction operation\n");
          printf("enter the value of a and b\n");
         scanf("%f %f",&a,&b);
         c=a-b;
         printf("So, Difference of a and b is %f",c);
    }
    else if(ch=='x'){
         
         printf("you have chossed multiplication operation\n");
          printf("enter the value of a and b\n");
         scanf("%f %f",&a,&b);
         c=a*b;
         printf("So, Product of a and b is %f",c);
    }
    else if(ch=='/'){
         
         printf("you have chossed division operation\n");
         printf("enter the value of a and b\n");
         scanf("%f %f",&a,&b);
         c=a/b;
         printf("So, division of a and b is %f",c);
      }
      else if (ch=='%'){
           printf("you have chossed remainder operation\n");
           printf("enter the value of a and b\n");
           scanf("%f %f",&a,&b);
           
          c=(int)a%(int)b;
           printf("So, remainder of a and b is %f",c);
      }
    else{
        printf("SYNTAX ERROR");
    }
    return 0;
}
