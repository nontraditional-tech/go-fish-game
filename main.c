#include <stdio.h>
#include <stdlib.h>
#include "deck.h"

int main()
{
	Deck deck;
	build_deck(&deck);
	shuffle_deck(&deck);
	print_array_of_cards(deck.shuffled_deck);

}

