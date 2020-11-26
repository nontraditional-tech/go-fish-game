#include <stdio.h>
#include <stdlib.h>
#include "card.h"

#define DECK_MAX	52

typedef struct {
	
	Card fresh_deck[DECK_MAX];
} Deck;


void build_deck(Deck* deck);
void print_array_of_cards(const Card* array);
