//name: fiona haria
//sap-id: 60009220048
#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
    float a,b,c,d,r1,r2;
    printf("enter the value of a,b,c\n");
    scanf("%f%f%f",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if(d>0)
    {
        r1=(-b+(sqrt(d)))/2*a;
        r2=(-b-(sqrt(d)))/2*a;
        printf("the roots are real and they are %f and %f \n",r1,r2);
    }
    else if(d==0)
    {
        r1=(-b)/(2*a);
        printf("the roots are equal and they are %f\n",r1);
    }
    else
    printf("the roots are imaginary");
    getch();
}