//name: fiona haria
//sap-id: 60009220048
#include <stdio.h>

//modulus operator
void main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num % 2 == 0) {
        printf("%d is even\n", num);
    } else {
        printf("%d is odd\n", num);
    }
}
