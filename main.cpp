#include <iostream>
#include "CardClasses.h"
#include "Hand.h"
#include "Deck.h"

int main()
{
    std::cout << "Card Tests: \n\n";
    
    // Test code
    Basic sirfetched{ "sirfetched", "A1 231" };
    Stage2 magnezone{ "magnezone", "A2 35" };
    Stage1 lucario{ "lucario", "A2 85" };

    std::cout << sirfetched.getName() << '\n';
    std::cout << magnezone.getSetNumber() << '\n';
    std::cout << lucario.getType() << '\n';

    std::cout << sirfetched.getSubtype() << '\n';
    std::cout << magnezone.getSubtype() << '\n';
    std::cout << lucario.getSubtype() << '\n';
    
    Item xSpeed{ "x-speed", "P 6" };
    Tool giantCape{ "giant cape", "A2 186" };
    Supporter leaf{ "leaf", "A1a 89" };

    std::cout << giantCape.getType() << '\n';
    std::cout << leaf.getType() << '\n';
    std::cout << xSpeed.getSubtype() << '\n';
    std::cout << giantCape.getSubtype() << '\n';

    // Tests for deck and hand
    std::cout << "Deck Tests: \n\n";
    std::vector<const ICard*> deckList;
    deckList.emplace_back(&sirfetched);
    deckList.emplace_back(&sirfetched);
    deckList.emplace_back(&sirfetched);
    deckList.emplace_back(&sirfetched);

    deckList.emplace_back(&magnezone);
    deckList.emplace_back(&magnezone);
    deckList.emplace_back(&magnezone);
    deckList.emplace_back(&magnezone);

    deckList.emplace_back(&lucario);
    deckList.emplace_back(&lucario);
    deckList.emplace_back(&lucario);

    deckList.emplace_back(&giantCape);
    deckList.emplace_back(&giantCape);
    deckList.emplace_back(&giantCape);

    deckList.emplace_back(&leaf);
    deckList.emplace_back(&leaf);
    deckList.emplace_back(&leaf);

    deckList.emplace_back(&xSpeed);
    deckList.emplace_back(&xSpeed);
    deckList.emplace_back(&xSpeed);

    Deck deck{ deckList };
    std::cout << "\nStarting Deck\n";
    deck.print();
    
    Hand hand{ deck };
    std::cout << "\nHand drawn\n";
    hand.print();
    deck.print();
    
    hand.addCard(deck.popTop());
    std::cout << "\n1 card drawn\n";
    hand.print();
    deck.print();

    hand.addCard(deck.popTop(2));
    std::cout << "\n2 additional cards drawn\n";
    hand.print();
    deck.print();

    deck.addToTop(&giantCape);
    deck.addToBottom(&giantCape);
    std::cout << "\nGiant cape added to top and bottom\n";
    deck.print();

    return 0;
}
