#include <stdio.h>
#include <stdlib.h>
#include "card.h"

#define DECK_MAX	52


/* Node struct used in deck linked list */
struct Game_Deck_Node{
	/* Card struct
	 * 	int card_num;
	 * 	int value;
	 * 	int suit; */
	Card			card;
	/* next card pointer */
	struct Game_Deck_Node*	next_card_ptr;
};

/* struct for deck operations */
typedef struct {
	/* fresh deck for game initially built here 
	 * not used after deck is shuffled and moved to 
	 * linked list */
	Card 	fresh_deck[DECK_MAX];
	/* member stores random unique numbers,
	 * used to build shuffled linked list */
	int 	shuffled_deck_int_array[DECK_MAX];	
} Deck;



/* public API function signatures */

/* dealer public function will do basic setup of 
 * Go Fish Game. Function will: 
 * 	1. build_unshuffled_deck()
 * 	2. build_shuffled_deck_int_array()
 * 	3. build_shuffled_gamedeck_ll() */
void setup_game();
/* function prints shuffled gamedeck linked list */
void print_gamedeck_ll();
/* prints array of random unique numbers, useful 
 * for debugging */
void print_int_array();
/* prints initial unshuffled deck, useful for debugging */
void print_unshuffled_deck();

