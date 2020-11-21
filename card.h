#include <stdio.h>
#include <stdlib.h>


typedef enum 
{
	HEARTS,
	DIAMONDS,
	CLUBS,
	SPADES,
	SUIT_MAX
} Suit;

typedef enum
{
	TWO 	= 2,
	THREE	= 3,
	FOUR	= 4,
	FIVE	= 5, 
	SIX	= 6,
	SEVEN 	= 7,
	EIGHT	= 8,
	NINE 	= 9,
	TEN	= 10,
	JACK	= 11, 
	QUEEN	= 12,
	KING	= 13,
	ACE	= 14,
	VALUES_MAX
} Value;

typedef struct {
	int card_num;
	Value value;
	Suit suit;
} Card;

