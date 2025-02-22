#pragma once
#include "CardClasses.h"
#include <iostream>
#include <vector>
#include <cassert>

class Deck
{
public:
	explicit Deck() = default;
	Deck(std::vector<const ICard*>& deck);

	// Pops card/s off the deck
	const ICard* const popTop();	// Can return nullptr
	const std::vector<const ICard*> popTop(const int drawNumber);

	// Draws Cards into a vector
	void drawToVector(std::vector<const ICard*>& zone, const int drawNumber = 1);
	
	// Adds cards to different spots in the deck
	void addToTop(const ICard* card);
	void addToBottom(const ICard* card);

	void print();

private:
	std::vector<const ICard*> m_deck{};
};
