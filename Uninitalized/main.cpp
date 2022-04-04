#include <stdio.h>

// Don't worry about what & is for now, we're just using it to trick the compiler into thinking variable x is used
void doNothing(int&) {}

int main() {
    int uninitalized;
    doNothing(uninitalized);
    printf("When you don't initialize your values weird things happen!\n");
    printf("The following value is random on every machine/build environment: %d", uninitalized);
    return 0;
}
