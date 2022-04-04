#include <stdio.h>

int main() {
    printf("Enter a number: ");
    int n{};
    scanf("%d", &n);
    printf("\nDouble that number is: %d", n * 2);
    printf("\nTriple that number is: %d", n * 3);
    return 0;
}
