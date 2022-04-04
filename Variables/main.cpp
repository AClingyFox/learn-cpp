#include <stdio.h>
#include <stdlib.h>

int main() {
    // You define a variable by typing a type, then the variable name:
    int x;

    // You can define multiple variables via a semicolon as long as all
    //  of the variable share the same type.
    int y, z;

    // Once you have define a variable you can assign it to give it a
    //  value or change its current value.
    y = 1;
    y = 2;

    // You can also assign a variable a value when its defined. This is
    //  called a initialization.
    // This is copy initialization. The value 3 is copied in to a in
    //  memory, the .5 is "narrowed" (I.e. truncated) so this does not
    //  throw an error despite a being a <int> and 3.5 being a <float>.
    int a = 3.5;

    // This is direct initialization.
    int b(4);

    // This is a brace initialization.
    int c{5};

    // You can also use brace initializations WITH copy initializations
    //  to copy the value that the brace initialization creates.
    int d = {6};

    // This means you can use brace initializations to prevent
    //  "narrowing" in copy initializations.
    // The following initialization would throw an error instead of
    //  "narrowing" the .5 (you want that!!!).

    /*
        int e = {7.5};
    */

    // IMPORTANT: When possible *ALWAYS* use DIRECT brace
    //  initialization.

    // You can initialize a variable using braces. This is called
    //  "zero initialization" because the value will. automatically
    //  have a value of 0 (or <empty>).
    int f{};

    // Sometimes people like to "zero initialize" explicitly
    int g{0};

    // Generally speaking you want to brace initialize explicitly if
    //  you don't know whether you will be assigning a value to the
    //  variable before its used:
    int h{0};
    if (rand()%1 == 1) {
        h = {20};
    }
    printf("%d\n", h);

    // Otherwise if you KNOW that you will be assigning the variable
    //  a value immediatly after its initialization you can do the
    //  initialization without being explicit:
    int i{};
    if (rand()%2 == 1) {
        i = 20;
    } else {
        i = 10;
    }
    printf("%d\n", i);

    return 0;
}
