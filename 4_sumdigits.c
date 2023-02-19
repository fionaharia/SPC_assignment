//name: fiona haria
//sap-id: 60009220048
#include <stdio.h>

int main() {
    int num, digit, sum = 0;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }

    printf("The sum of the digits is: %d\n", sum);

    return 0;
}
