#include <stdio.h>
#include <stdlib.h>
#include "deck.h"

void build_deck(Deck* deck)
{
	int card_iter = 1;
	int deck_iter = 0;
	for (int i=0; i<SUIT_MAX; i++) {
		for (int j=0; j<VALUE_MAX; j++) {
			deck->fresh_deck[deck_iter].card_num = card_iter;
			deck->fresh_deck[deck_iter].value = j;
			deck->fresh_deck[deck_iter].suit= i;
			deck_iter++;
			card_iter++;
		} 
	}
}

void print_array_of_cards(const Card* array)
{
	for (int index=0; index<DECK_MAX; index++) {
		printf("Card No: %d\n", array[index].card_num);
		printf("Value: %d\n", array[index].value);
		printf("Suit: %d\n", array[index].suit);
		printf("\n");
	}
}
	
