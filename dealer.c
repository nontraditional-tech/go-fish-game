#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "dealer.h"


// linked list head pointer
static struct Game_Deck_Node* head_ptr = NULL;
// Deck global variable
static Deck deck;




/****	Private Dealer functions	********/


/* Will print value name of card based on value (int) from 
 * Card argument */
static void print_card_value_name(int value)
{
	char* value_array[] = {"TWO", "THREE", "FOUR", "FIVE", "SIX", 
			       "SEVEN", "EIGHT", "NINE", "TEN", "JACK", 
			       "QUEEN", "KING", "ACE"};
	printf("Card Value Name: %s\n", value_array[value]);
}


/* Will print suit name of card based on suit (int) from 
 * Card argument */
static void print_card_suit_name(int suit)
{
	char* suit_array[] = {"DIAMONDS", "HEARTS", "CLUBS", "SPADES"}; 
	printf("Card Suit Name: %s\n\n", suit_array[suit]);
}


/* function will malloc and push new card node to the beginning of 
 * linked list. Each push is a random card based on 
 * shuffled_deck_int_array[index] */
static void push_card_to_gamedeck_ll(int index)
{
	int random_num = -1;
	struct Game_Deck_Node* new_node = malloc(sizeof(struct Game_Deck_Node));
	random_num = deck.shuffled_deck_int_array[index];
	new_node->card.card_num = deck.fresh_deck[random_num].card_num;
	new_node->card.value = deck.fresh_deck[random_num].value;
	new_node->card.suit = deck.fresh_deck[random_num].suit;
	new_node->next_card_ptr = head_ptr;
	head_ptr = new_node;
}


/* function will build a shuffled deck linked list using 
 * private function push_card_to_gamedeck() */
static void build_shuffled_gamedeck_ll()
{
	for (int i=0; i<DECK_MAX; i++)
	{
		push_card_to_gamedeck_ll(i);
	}

}


/* builds deck in sequential order, stores in fresh_deck array */
static void build_unshuffled_deck()
{
	int card_iter = 1;
	int deck_iter = 0;
	for (int i=0; i<SUIT_MAX; i++) {
		for (int j=0; j<VALUE_MAX; j++) {
			deck.fresh_deck[deck_iter].card_num = card_iter;
			deck.fresh_deck[deck_iter].value = j;
			deck.fresh_deck[deck_iter].suit= i;
			deck_iter++;
			card_iter++;
		} 
	}
}


/* builds the int array of random, nonrepeating values, 
 * to build shuffled deck linked list 
 */
void build_shuffled_deck_int_array() 
{
	int selected_num_array[52] = {0};
	int iterator = 0;
	srand(time(NULL));
	
	while (iterator < DECK_MAX) {
		int r = rand() % 52;
		if (selected_num_array[r] != 1) {
			selected_num_array[r] = 1;
			deck.shuffled_deck_int_array[iterator] = r;
			iterator++;
		}	
	} 
}



/****	public Dealer API functions	********/


void setup_game()
{
	build_unshuffled_deck();
	build_shuffled_deck_int_array();
	build_shuffled_gamedeck_ll();
}


void print_gamedeck_ll() 
{
	struct Game_Deck_Node* current = head_ptr;
	while (current != NULL) {
		printf("Card Num: %d\n", current->card.card_num);
		printf("Card Value: %d\n", current->card.value);
		print_card_value_name(current->card.value);
		printf("Card Suit: %d\n", current->card.suit);
		print_card_suit_name(current->card.suit);
		current = current->next_card_ptr;
	}
} 


void print_unshuffled_deck()
{
	for (int index=0; index<DECK_MAX; index++) {
		printf("Card No: %d\n", deck.fresh_deck[index].card_num);
		printf("Value: %d\n", deck.fresh_deck[index].value);
		printf("Suit: %d\n", deck.fresh_deck[index].suit);
		printf("\n");
	}
}


void print_int_array() 
{
	for (int index=0; index<DECK_MAX; index++) {
		printf("Int No: %d\n", deck.shuffled_deck_int_array[index]);
	}
}

