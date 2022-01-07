CC=gcc
CFLAGS=-c
SRCLOC=Src
INCLOC=Inc

PMT: main.o menu.o PartNumber.o
	$(CC) main.o menu.o PartNumber.o -o PMT 
	rm -rf *.o

main.o: $(SRCLOC)/main.c
	$(CC) $(CFLAGS) $(SRCLOC)/main.c

menu.o: $(SRCLOC)/menu.c 
	$(CC) $(CFLAGS) $(SRCLOC)/menu.c

PartNumber.o: $(SRCLOC)/PartNumber.c 
	$(CC) $(CFLAGS) $(SRCLOC)/PartNumber.c

clean:
	rm -rf PMT
	rm -rf Src/*.o
