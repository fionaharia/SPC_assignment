//name: fiona haria
//sap-id: 60009220048
#include <stdio.h>

int main()
{
    int size, pos, i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position of the element to be deleted: ");
    scanf("%d", &pos);

    if(pos < 0 || pos >= size)
    {
        printf("Invalid position!");
    }
    else
    {
        for(i=pos; i<size-1; i++)
        {
            arr[i] = arr[i+1];
        }

        size--;

        printf("Array after deletion: ");
        for(i=0; i<size; i++)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
