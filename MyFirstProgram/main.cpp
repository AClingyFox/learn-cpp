#include <stdio.h>

int main() {
    printf("Enter a number: ");
    int n{};
    scanf("%d", &n);
    printf("\nDouble %d is: %d", n, n * 2);
    printf("\nTriple %d is: %d", n, n * 3);
    return 0;
}
