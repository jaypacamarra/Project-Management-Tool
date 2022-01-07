CC=gcc
CFLAGS=-c

PMT: main.o menu.o 
	$(CC) main.o menu.o -o PMT 
	rm -rf *.o

main.o: Src/main.c
	$(CC) $(CFLAGS) Src/main.c

menu.o: Src/menu.c 
	$(CC) $(CFLAGS) Src/menu.c

clean:
	rm -rf PMT
	rm -rf *.o
