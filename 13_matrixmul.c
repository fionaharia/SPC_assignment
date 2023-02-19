//name: fiona haria
//sap-id: 60009220048
#include<conio.h>
#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],c[10][10],i,j,k,r1,r2,c1,c2;
    
    printf("enter rows and columns of first array\n");
    scanf("%d%d",&r1,&c1);
    
    printf("enter %d elements",(r1*c1));
    for(i=0;i<r1;i++) //first input
    {
        for(j=0;j<c1;j++)
        scanf("%d",&a[i][j]);
    }

    printf("enter rows and columns of second array\n");
    scanf("%d%d",&r2,&c2);
   
    printf("enter %d elements \n",(r2*c2));
    for(i=0;i<r2;i++) //second input
    {
        for(j=0;j<c2;j++)
        scanf("%d",&b[i][j]);
    }

    for(i=0;i<r1;i++) //matrix multiplication
    {
        for(j=0;j<c2;j++)
        {
            c[i][j]=0;
            for(k=0;k<r1;k++)
            c[i][j]+=(a[i][k]*b[k][j]);
        }
    }
    
    printf("FIRST ARRAY: \n"); //first array
    for(i=0;i<r1;i++) 
    {
        for(j=0;j<c1;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }

    printf("SECOND ARRAY: \n"); //second array
    for(i=0;i<r2;i++) 
    {
        for(j=0;j<c2;j++)
            printf("%d ",b[i][j]);
        printf("\n");
    }

    printf("THIRD ARRAY: \n"); //third array
    for(i=0;i<r1;i++) 
    {
        for(j=0;j<c2;j++)
            printf("%d ",c[i][j]);
        printf("\n");
    }
getch();
}