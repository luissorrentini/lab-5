#include <iostream>
#include <math.h>
#include <string>

using namespace std;

class Alien
{
private:
    string name;
    int numEyes;
    int numVisitedPlanets;
    int numLives;
    string specialPower;

public:
    // Constructor
    Alien(string name, int numEyes, int numVisitedPlanets, int numLives, string specialPower){
        this->name=name;
        this->numEyes=numEyes;
        this->numVisitedPlanets=numVisitedPlanets;
        this->numLives=numLives;
        this->specialPower=specialPower;
    }

    // Copy Constructor
    Alien(const Alien &alien);

    // Getters
    string getName() const { return name; }
    int getNumEyes() const { return numEyes; }
    int getNumVisitedPlanets() const { return numVisitedPlanets; }
    int getNumLives() const { return numLives; }
    string getSpecialPower() const { return specialPower; }

    // Setters
    void Alien::setName(string name){ this->name=name;}
    void Alien::setNumEyes(int numEyes){this->numEyes=numEyes;}
    void Alien::setNumVisitedPlanets(int numVisitedPlanets){this->numVisitedPlanets=numVisitedPlanets;}
    void Alien::setNumLives(int numLives){this->numLives=numLives;}
    void Alien::setSpecialPower(string specialPower){this->specialPower=specialPower;}

    string toString()
    {
        return "{Name: " + getName() + ", " + "Eyes: " + to_string(getNumEyes()) + ", " + "Visited Planets: " + to_string(getNumVisitedPlanets()) + ", " + "Lives: " + to_string(getNumLives()) + ", " + "Special Power: " + getSpecialPower() + "}";
    }
    // PART #2 EXERCISES
    Alien determineTheLeader(Alien &alien);
    void addVisitedPlanets(int planetQty);
    void battle(Alien &enemy);
    bool willSurvive(int attackPower);
};