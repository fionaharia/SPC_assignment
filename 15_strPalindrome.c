//name: fiona haria
//sap-id: 60009220048
#include <stdio.h>
#include <string.h>
int isPalindrome(char str[])
{
    int start = 0;
    int end = strlen(str) - 1;
    while (end > start) {
        if (str[start++] != str[end--]) {
            return 0;
        }
    }
    return 1;
}
int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    if (isPalindrome(str)) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }
 return 0;
}
