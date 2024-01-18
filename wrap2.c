#include <stdio.h>

extern int __real_foo(void);

int __wrap_foo(void) {
    printf("the wrapped foo, defined in %s\n", __FILE__);
    return __real_foo();
}
