#include<stdio.h>
int main()
{
    char ch;
    printf("enter the character ");
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z'){
        printf("it is an character of lowercase");
    }
    else if(ch>='A'&&ch<='Z'){
        printf("it is an character of uppercase");
    }
    else{
        printf("it is an invalid input");
    }
    return 0;
}
