#include <stdio.h>
#include <stdlib.h>
#include "card.h"

#define DECK_MAX	52


// definition of ll for game deck
struct Game_Deck_Node{
	Card			card;
	struct Game_Deck_Node*	next_card_ptr;
};


typedef struct {
	
	Card 	fresh_deck[DECK_MAX];
	int 	shuffled_deck_int_array[DECK_MAX];	
} Deck;


void build_unshuffled_deck();
void print_unshuffled_deck();
void build_shuffled_deck_int_array();
void print_int_array();
void build_shuffled_gamedeck_ll();
