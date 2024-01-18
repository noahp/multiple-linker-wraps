#include <stdio.h>

int foo(void) {
    printf("the real foo, defined in %s\n", __FILE__);
    return 0;
}

int main(void) {
    foo();
    return 0;
}
