//name: fiona haria
//sap-id: 60009220048
#include <stdio.h>

void copy_array(int *source, int *dest, int size) {
    int i;
    for (i = 0; i < size; i++) {
        *(dest + i) = *(source + i);
    }
}

int main() {
    int source[100], dest[100];
    int size, i;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &source[i]);
    }

    copy_array(source, dest, size);

    printf("The elements of the destination array are: ");
    for (i = 0; i < size; i++) {
        printf("%d ", dest[i]);
    }

    return 0;
}
