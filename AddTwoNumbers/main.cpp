#include <stdio.h>

int main() {
    printf("Enter an integer: ");

    int firstNumber{};
    scanf("%d", &firstNumber);

    printf("Enter another integer: ");

    int secondNumber{};
    scanf("%d", &secondNumber);

    printf("%d + %d is %d.\n", firstNumber, secondNumber, firstNumber + secondNumber);
    printf("%d - %d is %d.", firstNumber, secondNumber, firstNumber - secondNumber);

    return 0;
}
