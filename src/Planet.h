#include <iostream>
#include<cmath>
#include <string>

using namespace std;

class Planet
{

private:
	string name;
	long population;
	double diameter;
	bool hasWater;
	bool hasOxygen;
	string closestPlanet;
	string galaxy;

	/*
	Area of the Planet
	Furmula: area = 4 * pi * r^2
	*/
	double calculateArea() const
	{
		return (2.0 * acos(0.0)) * 4 * pow((getDiameter() / 2), 2);
	}

public:
	// Constructor
	Planet(string name, long population, double diameter, bool hasWater, bool hasOxygen,
		   string closestPlanet, string galaxy)
	{
		this->name = name;
		this->population = population;
		this->diameter = diameter;
		this->hasWater = hasWater;
		this->hasOxygen = hasOxygen;
		this->closestPlanet = closestPlanet;
		this->galaxy = galaxy;
	}

	// Copy constructor
	Planet(const Planet &p2)
	{
		this->name = p2.getName();
		this->population = p2.getPopulation();
		this->diameter = p2.getDiameter();
		this->closestPlanet = p2.getClosestPlanet();
		this->hasWater = p2.getHasWater();
		this->hasOxygen = p2.getHasOxygen();
		this->galaxy = p2.getGalaxy();
	}

	// Default Constructor
	Planet()
	this->name="ALPHA";
	this->population=0
	this->diameter = 8975;
	this->hasWater = true;
	this->hasOxygen = true;
	this->closestPlanet = "BETA";
	this->galaxy = "GUARDIANS";

	// Getters
	string getName() const { return name; }
	long getPopulation() const{ return population; }
	double getDiameter() const{ return diameter; }
	double getArea() const{ return calculateArea(); }
	bool getHasWater() const{ return hasWater; }
	bool getHasOxygen() const{ return hasOxygen; }
	string getClosestPlanet() const{ return closestPlanet; }
	string getGalaxy() const{ return galaxy; }

	// Setters
	void setName(string name) { this->name = name; }
	void setPopulation(long population) { this->population = population; }
	void setDiameter(double diameter) { this->diameter = diameter; }
	void setHasWater(bool hasWater) { this->hasWater = hasWater; }
	void setHasOxygen(bool hasOxygen) { this->hasOxygen = hasOxygen; }
	void setClosestPlanet(string closestPlanet) { this->closestPlanet = closestPlanet; }
	void setGalaxy(string galaxy) { this->galaxy = galaxy; }

	string toString()
	{
		return "{Name: " + getName() + ", " + "Population: " + to_string(getPopulation()) + ", " + "Diameter: " + to_string(getDiameter()) + ", " + (getHasWater() ? "Water: True" : "Water: False") + ", " + (getHasOxygen() ? "Oxygen: True" : "Oxygen: False") + ", " + "Closest Planet: " + getClosestPlanet() + ", " + "Galaxy: " + getGalaxy() + "}";
	}

	// PART #1 EXERCISES
	bool isHabitable(Planet p){
		if(this->getHasWater()==true&&this->getHasOxygen()==true&&this->getArea()>3000){
			return true;
		}
		else{
			return false;
		}
		}
	}
	string compareArea(Planet &p2){
		if (this->getArea()>p2.getArea()){
			return p2.getName();
		}
		else{
			return this->getName();
		}
	}

	double volumePlanet(){
		double r = this->getDiameter()/2;
		double area=(4*acos(-1)*pow(r,3))/3;
		return area;
	}

	bool sameGalaxy(Planet &p2){
		if(this->getGalaxy().compare(p2.getGalaxy())==0){
			return true;
		}
		else{
			return false
		}
	}
};
