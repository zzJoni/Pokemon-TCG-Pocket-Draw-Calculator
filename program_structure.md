### Classes:

Deck:
	
	Handles opperations involving adding/removing cards from the deck, 
	accessing cards in the deck, and changing the order of cards in the deck

	Functions:
	- Shuffle
	- Add Card (top, bottom, specific slot, and shuffle)
	- Pop (Draw)
	- Peek
	- Get Size
	- Find First Of
	- Find & Pop First Of

	Variables:
	- Vector of 20 ICards

Hand:
	
	Handles opperations involving adding/removing cards from the hand, 
	accessing cards in the deck, and chosing how to play cards from the hand

	Functions:
	- Add Card
	- Remove Card
	- Get Size
	- Get Card Types and Id's
	- Play cards?

	Variables:
	- Vector of 10? ICards

Cards:

	Stores information relating to each individual card and handles the specific exicution of
	the card once played (can choose to not execute if conditions are not met)

	Functions:
	- Get type
	- Get subtype
	- Get Name
	- Get Set & Number
	- Play Card (Uses refernce to game as a parameter)

	Varriables:
	- Name
	- Set & Number
	- Play Priority (Determines order that cards get played in)

Game:

	Handles the turn taking process, tracks general game state information,
	tracks what cards have been discarded, handles activating cards on the bench and active spot?

	Functions:
	- Run turn
	- Check user requiernments

	Varriables
	- Deck
	- Hand
	- Active?
	- Bench
	- Discard
	- Suporter Played
	- Turn Number
