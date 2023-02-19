//name: fiona haria
//sap-id: 60009220048
#include <stdio.h>

int main() {
    int num, reversed_num = 0, sum_of_digits = 0, remainder;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0) {
        remainder = num % 10;
        reversed_num = reversed_num * 10 + remainder;
        sum_of_digits += remainder;
        num /= 10;
    }
    printf("Reversed number: %d\n", reversed_num);
    printf("Sum of digits: %d\n", sum_of_digits);
    return 0;
}
