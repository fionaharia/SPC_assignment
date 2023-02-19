//name: fiona haria
//sap-id: 60009220048
#include <stdio.h>

int stringLength(char* str);

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int len = stringLength(str);
    printf("Length of the string is %d\n", len);
    return 0;
}

int stringLength(char* str) {
    char* ptr = str;
    int len = 0;
    while (*ptr != '\0') {
        len++;
        ptr++;
    }
    return len;
}
