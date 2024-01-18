main: main.o wrap1.o wrap2.o
	$(CC) -o main -Wl,--wrap=foo main.o wrap1.o wrap2.o
