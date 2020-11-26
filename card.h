#include <stdio.h>
#include <stdlib.h>

#define VALUE_MAX	13
#define SUIT_MAX	4

static char* value_array[] = {"TWO", "THREE", "FOUR", "FIVE", "SIX",
			      "SEVEN", "EIGHT", "NINE", "TEN", "JACK",
			      "QUEEN", "KING", "ACE"};
static char* suit_array[] = {"DIAMONDS", "HEARTS", "CLUBS", "SPADES"};

typedef struct {
	
	int card_num;
	int value;
	int suit;
} Card; 

