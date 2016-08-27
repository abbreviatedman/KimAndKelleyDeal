//Animal.cpp
#include <time.h>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <vector>
#include <iostream>
#include "Animal.h"
using namespace std;

Animal::Animal(): _sound("unknown"), _species("unknown"), _name("unknown"), _size(0), _isFemale(true)
{
//	puts ("default constructor");
}

Animal::Animal(string sound, string species, string name, int size, int isFemale): _sound(sound), _species(species),
		_name(name), _size(size), _isFemale(isFemale)
{
//	puts ("constructor with arguments");
}

Animal::~Animal()
{
//	puts ("I am become death, destructor of Animals.");
}

void Animal::randAnimal()
{

	int namePicker = rand() % 5;

	switch (rand() % 5)
	{
	case 0:
		_species = "dog";
		_sound = "woof";

		_isFemale = rand() % 2;

		if (_isFemale)
		{
			_size = rand() % 120;
			_name = dogFemaleName[namePicker];
		}
		else
		{
			_size = rand() % 160;
			_name = dogMaleName[namePicker];
		}
		break;
	case 1:
		_species = "cat";
		_sound = "meow";
		_isFemale = rand() % 2;

		if (_isFemale)
		{
			_size = rand() % 10 + 10;
			_name = catFemaleName[namePicker];
		}
		else
		{
			_size = rand() % 10 + 15;
			_name = catMaleName[namePicker];
		}
		break;
	case 2:
		_species = "dinosaur";
		_sound = "ROAR";
		_isFemale = rand() % 2;

		if (_isFemale)
		{
			_size = rand() % 2000 + 12000;
			_name = dinosaurFemaleName[namePicker];
		}
		else
		{
			_size = rand() % 2000 + 16000;
			_name = dinosaurMaleName[namePicker];
		}
		break;
	case 3:
		_species = "cow";
		_sound = "moo";
		_isFemale = rand() % 2;

		if (_isFemale)
		{
			_size = rand() % 400 + 1200;
			_name = cowFemaleName[namePicker];
		}
		else
		{
			_size = rand() % 400 + 2000;
			_name = cowMaleName[namePicker];
		}
		break;
	case 4:
		_species = "ocelot";
		_sound = "rawr";
		_isFemale = rand() % 2;

		if (_isFemale)
		{
			_size = rand() % 20 + 10;
			_name = ocelotFemaleName[namePicker];
		}
		else
		{
			_size = rand() % 20 + 20;
			_name = ocelotMaleName[namePicker];
		}
		break;
	}

	printf("%s, %s, %s, %d, %s\n", _species.c_str(), _name.c_str(), _isFemale ? "female" : "male", _size, _sound.c_str());
}

