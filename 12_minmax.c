//name: fiona haria
//sap-id: 60009220048
#include<conio.h>
#include<stdio.h>
void main()
{
    int i,n,min,max,arr[10];
    printf("enter the upper limit of the list\n");
    scanf("%d",&n);
    printf("enter %d numbers",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    min=max=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        max=arr[i];
        if(arr[i]<min)
        min=arr[i];
    }
    printf("MAXIMUN: %d\n",max);
    printf("MINIMUM: %d",min);
    getch();
}