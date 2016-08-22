
//Animal.cpp
#include <time.h>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <vector>
#include <iostream>
using namespace std;

#ifndef ANIMAL_H
#define ANIMAL_H

class Animal {
public:

	string _sound;
	string _species;
	string _name;
	int _size;
	int _isFemale;

	string dogFemaleName = {"Lassie", "Maisie", "Goldberry", "Lucy", "Bee"};
	string dogMaleName[] = {"Rover", "Oscar", "Mellow", "Maverick", "Spot"};

	string catFemaleName[] = {"Tabby", "Lily", "Socks", "Snowball", "Janice"};
	string catMaleName[] = {"Mittens", "Vladamir", "Estragon", "Flash", "Tango"};

	string dinosaurFemaleName[] = {"Cera", "Chloe", "Petrova", "Pauline", "Posey"};
	string dinosaurMaleName[] = {"Littlefoot", "Ducky", "Spike", "Dino", "Barney"};

	string cowFemaleName[] = {"Bessie", "Maisie", "Belle", "Daisy", "Isabella"};
	string cowMaleName[] = {"Ferdinand", "Duncan", "Doug", "Biff", "Milky White"};

	string ocelotFemaleName[] = {"Omayra", "Olive", "Opal", "Olga", "Oneida"};
	string ocelotMaleName[] {"Omar", "Opie", "Olaf", "Orrin", "Chad"};


	Animal();
	Animal(string sound, string species, string name, int size, int isFemale);
	~Animal();
	void randAnimal();

};

#endif
