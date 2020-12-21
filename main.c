#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "dealer.h"


int main()
{
	setup_game();
	print_gamedeck_ll();
	//
	//
	//
	// 3. write game setup functionality    (CAN NAME THIS DEALER STRUCT)
	// 	a. write set up for game players
	// 	b. write functionality to determine who goes first / 
	// 	   gets to cut the deck
	//
	//	player struct 
	//		int player_id
	//		bool player_turn	// must use <stdbool.h>
	//		/* SOME KIND OF STRUCTURE THING FOR EACH 
	//		   PLAYERS HAND (LINKED LIST) */
	//		/* player hand hear ptr maybe */
	//
	//
	//
	//	dealer struct
	//		int player_num
	//		int player_id_turn	// might not need this
	//		/* an array of players, not sure how i'm 
	//		   gonna do this yet */
	//		
	//
	//
	//
	// 	c. write functionality to cut the card deck
	// 4. write card dealing functionality
	// 5. write some kind of way to display each players hand
	// 	a. write the hand display so each hands ranks are 
	// 	   grouped together
	//
	//
	// NOTES: 
	// 1. 1-2 players, dealt 7 cards each
	//    3-6 players, 5 cards each
	// 2. Goal of game: to get the most 4 of a kinds
	//    a. each 4 of a kind can be laid down beside the
	//       player face-down
	//
	// CAN YOUTUBE HOW TO PLAY GO FISH BY GATHER TOGETHER GAMES
}
	

