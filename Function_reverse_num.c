#include <stdio.h>

int reverseNumber(int num) {
    int reversed = 0;
    int digit;
    while (num != 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num =num / 10;
    }

    return reversed;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int reversed = reverseNumber(num);

    printf("Reversed number: %d\n", reversed);

    return 0;
}
