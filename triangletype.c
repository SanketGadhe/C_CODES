/*Write a C program to check whether the triangle is
 equilateral, isosceles or scalene triangle.*/
 #include<stdio.h>
 int main()
 {
     int A,B,C;
     //A,B,C are sides of triangle
     printf("enter the sides of triangle:\n");
     scanf("%d %d %d",&A,&B,&C);
     
      if(A==B&&B==C&&A==C){
    printf("it is an equilateral triangle");
}
   
   else  if(A==B||B==C||A==C){
         printf("it is an isoceles triangle");
     }

else{
    printf("it is an scalene triangle");
}
return 0;
 }