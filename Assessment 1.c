#include <stdio.h>

int main() {
    int arr[100];
    int size, num1, num2;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the first number to insert: ");
    scanf("%d", &num1);

    printf("Enter the second number to insert: ");
    scanf("%d", &num2);

    arr[size] = num1;
    arr[size + 1] = num2;
    size += 2;

    printf("Updated array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

