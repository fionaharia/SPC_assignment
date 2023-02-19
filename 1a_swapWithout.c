//name: fiona haria
//sap-id: 60009220048
#include<stdio.h>
#include<conio.h>

//swapping without variable
void main()
{
    int a,b;
    printf("enter two numbers\n");
    scanf("%d%d",&a,&b);
    printf("before swapping:\n a= %d\n b= %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
   printf("after swapping:\n a= %d\n b= %d\n",a,b);
}