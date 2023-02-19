//name: fiona haria
//sap-id: 60009220048
#include <stdio.h>

int find_max(int num1, int num2);
int find_min(int num1, int num2);

int main() {
    int num1, num2, max, min;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    max = find_max(num1, num2);
    min = find_min(num1, num2);
    
    printf("Maximum number: %d\n", max);
    printf("Minimum number: %d\n", min);
    
    return 0;
}

int find_max(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int find_min(int num1, int num2) {
    if (num1 < num2) {
        return num1;
    } else {
        return num2;
    }
}
 