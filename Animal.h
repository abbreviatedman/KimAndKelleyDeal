
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

	string dogFemaleName[5] = {"Lassie", "Maisie", "Goldberry", "Lola", "Bee"};
	string dogMaleName[5] = {"Rover", "Oscar", "Mellow", "Maverick", "Spot"};

	string catFemaleName[5] = {"Tabby", "Lily", "Socks", "Snowball", "Janice"};
	string catMaleName[5] = {"Mittens", "Vladamir", "Estragon", "Flash", "Tango"};

	string dinosaurFemaleName[5] = {"Cera", "Chloe", "Petrova", "Pauline", "Posey"};
	string dinosaurMaleName[5] = {"Littlefoot", "Ducky", "Spike", "Dino", "Barney"};

	string cowFemaleName[5] = {"Bessie", "Maisie", "Belle", "Daisy", "Isabella"};
	string cowMaleName[5] = {"Ferdinand", "Duncan", "Doug", "Biff", "Milky White"};

	string ocelotFemaleName[5] = {"Omayra", "Olive", "Opal", "Olga", "Oneida"};
	string ocelotMaleName[5] {"Omar", "Opie", "Olaf", "Orrin", "Chad"};


	Animal();
	Animal(string sound, string species, string name, int size, int isFemale);
	~Animal();
	void randAnimal();

};

#endif
