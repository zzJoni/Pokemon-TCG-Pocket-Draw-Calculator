#pragma once
#include "CardClasses.h"
#include "Deck.h"
#include <vector>

class Hand
{
public:
	explicit Hand() = default;
	Hand(std::vector<const ICard*>& hand) : m_hand{ hand } {};
	
	Hand(Deck& deck)
	{
		addCard(deck.popTop(5));
	}
	
	void addCard(const ICard* card) 
	{ 
		if(card != nullptr)
			m_hand.emplace_back(card); 
	}

	void addCard(const std::vector<const ICard*>& newCards)
	{
		for (const ICard* card : newCards)
		{
			if(card != nullptr)
				m_hand.emplace_back(card);
		}
	}

	void print()
	{
		for (const ICard* card : m_hand)
		{
			std::cout << card->getName() << ", ";
		}
		std::cout << '\n';
	}

private:
	std::vector<const ICard*> m_hand{};
};
