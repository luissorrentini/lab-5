#include "Alien.h"
///////////////////////////////////////////////////////////////////////////////////////////////////
/*
Exercise #6A
Finish the declaration of the constructor with all the given parameters.
*/
Alien::Alien(string name, int numEyes, int numVisitedPlanets, int numLives, string specialPower)
{
    // YOUR CODE GOES HERE
}

///////////////////////////////////////////////////////////////////////////////////////////////////
/*
Exercise #6B
Finish the declaration of the copy constructor.
Construct an Alien object with the same properties as the given Alien parameter.
*/
Alien::Alien(const Alien &alien)
{
    // YOUR CODE GOES HERE
}

///////////////////////////////////////////////////////////////////////////////////////////////////
/*
Exercise #7
Finish the setter implementation of all the properties of the Alien class.
*/
// Setters
void Alien::setName(string name)
{
    // YOUR CODE GOES HERE
}
void Alien::setNumEyes(int numEyes)
{
    // YOUR CODE GOES HERE
}
void Alien::setNumVisitedPlanets(int numVisitedPlanets)
{
    // YOUR CODE GOES HERE
}
void Alien::setNumLives(int numLives)
{
    // YOUR CODE GOES HERE
}
void Alien::setSpecialPower(string specialPower)
{
    // YOUR CODE GOES HERE
}

///////////////////////////////////////////////////////////////////////////////////////////////////
/*
Exercise #8
Return the Alien, between the target and the parameter, who is the Leader.
A leader is determined by the following characteristics:
    1. The Alien who has visited the highest quantity of planets is the Leader.
    2. In the case they have visited the same number of planets, the Alien with the highest
       quantity of eyes is the Leader.
    3. In the case the quantity of eyes and planets is the same, return the target Alien.
*/
Alien Alien::determineTheLeader(Alien &alien)
{
    // YOUR CODE GOES HERE
    return *this;
}

///////////////////////////////////////////////////////////////////////////////////////////////////
/*
Exercise #9
Add the given number of planets, to the target Alien visitedPlanets property.
NOTE: You MUST use setters, you can assume the setters are already implemented on this exercise.
*/
void Alien::addVisitedPlanets(int planetQty)
{
    // YOUR CODE GOES HERE
}

///////////////////////////////////////////////////////////////////////////////////////////////////
/*
Exercise #10
The target Alien and parameter Alien went into a battle. Reduce a live of the Alien that loses the battle.
In order to determine the winner of the battle we will use the specialPower property.
The most powerful Alien is the one which special power name is first in alphabetical order.
Remember that in the ASCII table capital letters come before lower letters.
**In the case that both aliens have the same power, the parameter alien loses.**
Examples: The power "fly" wins over "invisible", since 'f' comes before 'i' in the alphabet.
          The power "silence" wins over "strength", since 'si' comes before 'st' alphabetically.

HINT: Use the compare method from string
*/
void Alien::battle(Alien &enemy)
{
    // YOUR CODE GOES HERE
}

///////////////////////////////////////////////////////////////////////////////////////////////////
/*
Exercise #11
 An alien is being attacked by an extraterrestral force. Given the power of the attack determine if
 the alien will survive. Every attackPower reduces a live of the alien. E.g. if the attack power is
 3 then the alien will lose 3 lives. The alien will survive if after the attack, it still has at least
 one live.
 NOTE: DO NOT MODIFY THE TARGET OBJECT
*/
bool Alien::willSurvive(int attackPower)
{
    // YOUR CODE GOES HERE
    return false;
}