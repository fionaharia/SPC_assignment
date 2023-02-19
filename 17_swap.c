//name: fiona haria
//sap-id: 60009220048
#include <stdio.h>

// Function to swap two numbers using call by value
void swap_call_by_value(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("After swapping using call by value:\n");
    printf("a = %d, b = %d\n", x, y);
}

// Function to swap two numbers using call by reference
void swap_call_by_reference(int* x, int* y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("After swapping using call by reference:\n");
    printf("a = %d, b = %d\n", *x, *y);
}

int main()
{
    int a,b;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);

    // Calling function using call by value
    swap_call_by_value(a, b);

    // Calling function using call by reference
    swap_call_by_reference(&a, &b);

    return 0;
}
