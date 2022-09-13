//Exchanging digits of a 2 digit number

#include<stdio.h>

int main()
{
    int a,X,Y;
    scanf("%d",&a);

    X=a/10;
    Y=a%10;

    printf("%d%d",Y,X);
    
    return 0;
}
