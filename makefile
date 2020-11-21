CC=gcc
CFLAGS=-I.
DEPS = card.h deck.h
OBJ = main.o deck.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

go-fish-game: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
