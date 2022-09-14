#include<stdio.h>

int main()
{
    int a,X,Y,Z,P;
    scanf("%d",&a);

    X=a/100;
    Y=a%100;
    Z=Y/10;
    P=Y%10;

    printf("%d%d%d",P,Z,X);

    return 0;
}

