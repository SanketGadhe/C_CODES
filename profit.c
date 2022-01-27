//Write a C program to calculate profit or loss.
#include<stdio.h>
int main()
{
    int SP,CP,P,L;
    //here profit=P,loss=L,selling_price=SP,cost_price=CP
    printf("enter the cost price");
    scanf("%d",&CP);
    printf("enter the selling price");
    scanf("%d",&SP);
    P=SP-CP;
    L=CP-SP;
    if(SP>CP){
        printf("Congrats! Your profit is %d",P);
    }
    else if(CP>SP){
        printf("Your loss is %d",L);
    }
    else{
        printf("you are in neither profit and loss ");
    }
    return 0;

}
