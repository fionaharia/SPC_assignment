//name: fiona haria
//sap-id: 60009220048
#include <stdio.h>

int stringCompare(char *str1, char *str2);

int main()
{
    char str1[100], str2[100];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    if (stringCompare(str1, str2) == 0)
    {
        printf("The strings are equal.\n");
    }
    else
    {
        printf("The strings are not equal.\n");
    }

    return 0;
}

int stringCompare(char *str1, char *str2)
{
    while (*str1 == *str2)
    {
        if (*str1 == '\0' || *str2 == '\0')
            break;

        str1++;
        str2++;
    }

    if (*str1 == '\0' && *str2 == '\0')
        return 0;
    else
        return -1;
}
