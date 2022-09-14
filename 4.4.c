#include<stdio.h>
/translating form decimal to octal between 0 to 32767



int main()
{
    int a,a_1,a_2,b_1,b_2,c_1,c_2,d_1,d_2,e_1;

    printf("Please input between 0 to 32676\t:");
    scanf("%d",&a);

    a_1=a/8;
    a_2=a%8;
    b_1=a_1/8;
    b_2=a_1%8;
    c_1=b_1/8;
    c_2=b_1%8;
    d_1=c_1/8;
    d_2=c_1%8;
    e_1=d_1/8;

    if(a>=0&&a<=32767)
    {
           printf("%d%d%d%d%d",e_1,d_2,c_2,b_2,a_2);
    }

    else
    {
        printf("This number is out of the input limit");
    }


    return 0;
}



