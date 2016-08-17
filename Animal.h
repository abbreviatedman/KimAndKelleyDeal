
//Animal.cpp
#include <time.h>
#include <stdio.h>
#include <string>
#include <stdlib.h>
using namespace std;

#ifndef ANIMAL_H
#define ANIMAL_H

class Animal {
public:

	string _sound;
	string _species;
	string _name;
	string _genderbaby;
	string _genderpronoun;
	int _size;
	bool _isFemale;


	Animal();
	Animal(string sound, string species, string name, string genderbaby, string genderpronoun, int size, bool isFemale);
	void breedAnimal(Animal dad, Animal mom);
	~Animal();


};

#endif
