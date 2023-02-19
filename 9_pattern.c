//name: fiona haria
//sap-id: 60009220048
#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j;
 printf("PATTERN 1:\n");
 for(i=0;i<5;i++)
 {
 for(j=i+1;j>=1;j--)
 {
 printf("%d ",j);
 }
 printf("\n");
 }
 printf("PATTERN 2:\n");
 for(i=1;i<=5;i++)
 {
  for(j=1;j<=5-i;j++)
  {
   printf(" ");
  }
  for(j=1;j<=i;j++)
  {
  printf("%c",(char)(j+64));
  }
  for(j=i-1;j>=1;j--)
  {
  printf("%c",(char)(j+64));
  }
  printf("\n");
  }
  getch();
 }