//name: fiona haria
//sap-id: 60009220048
#include <stdio.h>

int main() {
    char operation;
    int n1, n2;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operation);
    printf("Enter two operands: ");
    scanf("%d%d",&n1, &n2);

    switch(operation)
    {
        case '+':
            printf("%d + %d = %d",n1, n2, n1+n2);
            break;

        case '-':
            printf("%d - %d = %d",n1, n2, n1-n2);
            break;

        case '*':
            printf("%d * %d = %d",n1, n2, n1*n2);
            break;

        case '/':
            printf("%d / %d = %d",n1, n2, n1/n2);
            break;
        default:
            printf("Error");
    }

    return 0;
}
