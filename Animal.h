
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


	Animal();
	Animal(string sound, string species, string name, int size, int isFemale);
	~Animal();
	void randAnimal();

};

#endif
