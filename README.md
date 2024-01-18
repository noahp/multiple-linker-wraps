# Using `-Wl,--wrap` when there's multiple definitions of the wrap

```bash
❯ make
cc -o main -Wl,--wrap=foo main.o wrap1.o wrap2.o
/usr/bin/ld: wrap2.o: in function `__wrap_foo':
wrap2.c:(.text+0x0): multiple definition of `__wrap_foo'; wrap1.o:wrap1.c:(.text+0x0): first defined here
collect2: error: ld returned 1 exit status
make: *** [Makefile:2: main] Error 1
```
