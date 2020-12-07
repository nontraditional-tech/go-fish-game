#include <stdio.h>
#include <stdlib.h>
#include "deck.h"

int main()
{
	build_unshuffled_deck();
	build_shuffled_deck_int_array();
	print_int_array();
	print_unshuffled_deck();
	build_shuffled_gamedeck_ll();
	
	// 2. ensure there is persistance of deck card values
	// 	by first doing a print int array() then doing
	// 	print array of cards

}

