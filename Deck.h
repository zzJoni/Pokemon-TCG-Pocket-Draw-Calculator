#pragma once
#include "CardClasses.h"
#include <vector>
#include <cassert>

class Deck
{
public:
	Deck(std::vector<ICard>& deck) 
	{
		assert(deck.size() == 20);
		m_deck.resize(20);

		for (std::size_t i{ 0 }; i < deck.size(); ++i)
		{
			m_deck[i] = &deck[i];
		}
	};


	
private:
	std::vector<const ICard*> m_deck{ 20 };
};
