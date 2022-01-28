/*Write a C program to accept a coordinate point in a XY 
coordinate system and determine in which quadrant the 
coordinate point lies.*/
#include<stdio.h>
int main()
{
    int a,b;
    //(a,b) are the coordinate points of X,Y axis
    printf("enter the two coordinate (a,b)=");
    scanf("%d %d",&a,&b);
    if(a>0&&b>0){
        printf("Coordinates (%d,%d)lie in the FIRST Quadrant",a,b);
    }
    else if(a<0&&b>0){
        printf("Coordinates (%d,%d)lie in the SECOND Quadrant",a,b);
    }
    else if(a<0&&b<0){
        printf("Coordinates (%d,%d)lie in the THIRD Quadrant",a,b);
    }
    else{
        printf("Coordinates (%d,%d)lie in the FOURTH Quadrant",a,b);
    }
    return 0;
}