//name: fiona haria
//sap-id: 60009220048
#include <stdio.h>
int findGCD(int num1, int num2)
{
    if(num2 == 0)
        return num1;
    else
        return findGCD(num2, num1 % num2);
}

int main()
{
    int num1, num2, gcd;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    gcd = findGCD(num1, num2);
    printf("GCD of %d and %d is %d\n", num1, num2, gcd);
    return 0;
}
