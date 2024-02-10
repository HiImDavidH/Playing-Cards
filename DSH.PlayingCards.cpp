#include <iostream>
#include <conio.h>
#include <string>

using namespace std;


enum Rank
{
	ONE = 1,
	TWO,
	THREE,
	FOUR,
	FIVE,
	SIX,
	SEVEN,
	EIGHT,
	NINE,
	TEN,
	JACK,
	QUEEN,
	KING,
	ACE
};

enum Suit
{
	DIAMONDS,
	HEARTS,
	SPADES,
	CLUBS
};

struct Card
{	
	Suit suit;
	Rank rank;
};

int main()
{
	
}