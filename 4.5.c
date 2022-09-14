//Checking the number of UPC

#include<stdio.h>

int main()
{
    int a_1,a_2,a_3,a_4,a_5,a_6,a_7,a_8,a_9,a_10,a_11,sum_1,sum_2,X,rem_1,P;



    printf("Enter the first 11 digits of UPC:");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&a_1,&a_2,&a_3,&a_4,&a_5,&a_6,&a_7,&a_8,&a_9,&a_10,&a_11);

    sum_1=a_1+a_3+a_5+a_7+a_9+a_11;
    sum_2=a_2+a_4+a_6+a_8+a_10;

    X=((sum_1*3)+sum_2)-1;
    rem_1=X%10;
    P=9-rem_1;

    printf("check:%d",P);

    return 0;
}
