/*C program to convert temperature from Fahrenheit to Celsius and
 Celsius to Fahrenheit*/
 #include<stdio.h>
 int main()
 {
     char ch;
     float fa,ce;
     printf("press c to convert temperature from fahrenheit to celsius\n");
     printf("press f to convert temperature from celsius to fahrenheit\n");
     scanf("%c",&ch);
     if(ch=='c'){
         printf("enter the temperature in fahrenheit");
         scanf("%f",&fa);
         ce=(fa-32)*5/9;
         printf("temperature in celsius is %.2f",ce);

     }
     else if(ch=='f'){
         printf("enter the temperature in celsius");
         scanf("%f",&ce);
         fa=(ce*9/5)+32;
         printf("temperature in fahrenheit is %.2f",fa);
     }
     else{
         printf("wrong input");
     }
     
     return 0;
 }
