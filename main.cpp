#include <iostream>
#include "CardClasses.h"

int main()
{
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

    return 0;
}
