#include "CardClasses.h"
#include "Deck.h"
#include <vector>
#include <cassert>

Deck::Deck(std::vector<const ICard*>& deck) : m_deck{ deck }
{
	assert(m_deck.size() == 20 && "Deck initalized with more than 20 cards");
};

// Returns nullptr if deck is empty
const ICard* const Deck::popTop()
{
	if (m_deck.size() == 0)
		return nullptr;

	const ICard* card{ m_deck[0] };
	m_deck.erase(m_deck.begin());

	return card;
}

// Pops the top x cards of the deck into a vector
	// Returns an empty vector if the deck is empty
const std::vector<const ICard*> Deck::popTop(const int drawNumber)
{
	std::vector<const ICard*> drawnCards{};

	for (int i{ 1 }; i <= drawNumber; ++i)
	{
		const ICard* const drawnCard{ popTop() };
		if (drawnCard != nullptr)
			drawnCards.emplace_back(drawnCard);
	}
	return drawnCards;
}

// Draws Cards into a vector
void Deck::drawToVector(std::vector<const ICard*>& zone, const int drawNumber = 1)
{
	for (int i{ 1 }; i <= drawNumber; ++i)
	{
		const ICard* const drawnCard{ popTop() };
		if (drawnCard != nullptr)
			zone.emplace_back(drawnCard);
	}
}

// Adds a card to the top of the deck
void Deck::addToTop(const ICard* card)
{
	m_deck.emplace(m_deck.begin(), card);
	assert(m_deck.size() <= 20 && "Card added while deck is full");
}

// Adds a card to the bottom of the deck
void Deck::addToBottom(const ICard* card)
{
	m_deck.emplace_back(card);
	assert(m_deck.size() <= 20 && "Card added while deck is full");
}

// Prints the deck
void Deck::print()
{
	for (auto card : m_deck)
	{
		std::cout << card->getName() << ", ";
	}
	std::cout << '\n';
}