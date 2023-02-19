//name: fiona haria
//sap-id: 60009220048
#include<stdio.h>
#include<conio.h>

//swapping with variable
void main()
{
    int a,b,c;
    printf("enter two numbers\n");
    scanf("%d%d",&a,&b);
    printf("before swapping:\n a= %d\n b= %d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("after swapping:\n a= %d\n b= %d\n",a,b);
}