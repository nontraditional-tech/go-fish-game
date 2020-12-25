CC=gcc
CFLAGS=-I.
DEPS = card.h dealer.h
OBJ = main.o dealer.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

go-fish-game: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)






















