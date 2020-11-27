#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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
 
void shuffle_deck(Deck* deck) 
{
	int selected_num_array[52] = {0};
	int transfer_counter = 0;
	int iterator = 0;
	srand(time(NULL));
	
	while (transfer_counter < DECK_MAX) {
		int r = rand() % 52;
		if (selected_num_array[r] != 1) {
			selected_num_array[r] = 1;
			deck->shuffled_deck[iterator].card_num = 
						deck->fresh_deck[r].card_num;
			deck->shuffled_deck[iterator].value = 
						deck->fresh_deck[r].value;
			deck->shuffled_deck[iterator].suit = 
						deck->fresh_deck[r].suit;
			iterator++;
			transfer_counter++;
		}	
	} 
}

	
