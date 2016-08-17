//Animal.cpp
#include <time.h>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include "Animal.h"
using namespace std;

Animal::Animal(): _sound("unknown"), _species("unknown"), _name("unknown"), _size(0), _isFemale(true)
{
	puts ("default constructor");
}

Animal::Animal(string sound, string species, string name, int size, bool isFemale): _sound(sound), _species(species),
		_name(name), _size(size), _isFemale(isFemale)
{
	puts ("constructor with arguments");
}

Animal::~Animal()
{
	puts ("I am become death, destructor of Animals.");
}

void Animal::breedAnimal(Animal dad, Animal mom)
{

	//combine species
	srand(time(NULL));
	if (rand() % 2)
	{
		_species = dad._species;
	}
	else
	{
		_species = mom._species;
	}

	//pick gender and assign appropriate words and name
	if (rand() % 2)
	{
		_isFemale = false;
		int namerand = rand() % 5;
		switch (namerand)
		{
		default:
		case 0:
			_name = "Rover";
			break;
		case 1:
			_name = "Oscar";
			break;
		case 2:
			_name = "Mellow";
			break;
		case 3:
			_name = "Maverick";
			break;
		case 4:
			_name = "Buddy";
			break;
		}

	}
	else
	{
		_isFemale = true;
		int namerand = rand() % 5;
		switch (namerand)
		{
		default:
		case 0:
			_name = "Lassie";
			break;
		case 1:
			_name = "Maisie";
			break;
		case 2:
			_name = "Goldberry";
			break;
		case 3:
			_name = "Lucy";
			break;
		case 4:
			_name = "Bee";
			break;
		}
	}


	//combine sizes
	_size = (dad._size + mom._size) / 2;

	//pick sound
	if (_species == "dog")
		{
			_sound = "woof";
		}
		else
		{
			_sound = "glurb";
		}
	printf("A %s was born to a %s named %s and a %s named %s! %s name is %s. Now fully grown, our new %s weighs %d pounds. %s says %s.\n",
			_isFemale ? "daughter" : "son", mom._species.c_str(), mom._name.c_str(), dad._species.c_str(), dad._name.c_str(),
			_isFemale ? "Her" : "His", _name.c_str(),
			_species.c_str(), _size, _isFemale ? "She" : "He", _sound.c_str());
}



