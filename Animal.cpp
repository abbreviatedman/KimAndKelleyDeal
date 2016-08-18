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
	switch (rand() % 5)
	{
	case 0:
		_species = "dog";
		_sound = "woof";

		_isFemale = rand() % 2;
		if (_isFemale)
		{
			_size = rand() % 120;
			switch (rand() % 5)
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
		else
		{
			_size = rand() % 160;
			switch (rand() % 5)
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
		break;
	case 1:
		_species = "cat";
		_sound = "meow";
		_isFemale = rand() % 2;
		if (_isFemale)
		{

			_size = rand() % 10 + 10;
			switch (rand() % 5)
			{
			default:
			case 0:
				_name = "Tabby";
				break;
			case 1:
				_name = "Lily";
				break;
			case 2:
				_name = "Socks";
				break;
			case 3:
				_name = "Snowball";
				break;
			case 4:
				_name = "Janice";
				break;
			}
		}
		else
		{

			_size = rand() % 10 + 15;
			switch (rand() % 5)
				{
				default:
				case 0:
					_name = "Mittens";
					break;
				case 1:
					_name = "Vladimir";
					break;
				case 2:
					_name = "Estragon";
					break;
				case 3:
					_name = "Flash";
					break;
				case 4:
					_name = "Tango";
					break;
				}
		}
		break;
	case 2:
		_species = "dinosaur";
		_sound = "ROAR";
		_isFemale = rand() % 2;
		if (_isFemale)
		{
			_size = rand() % 2000 + 12000;
			switch (rand() % 5)
			{
			default:
			case 0:
				_name = "Cera";
				break;
			case 1:
				_name = "Chloe";
				break;
			case 2:
				_name = "Petrova";
				break;
			case 3:
				_name = "Pauline";
				break;
			case 4:
				_name = "Posey";
				break;
			}
		}
		else
		{
			_size = rand() % 2000 + 16000;
			switch (rand() % 5)
				{
				default:
				case 0:
					_name = "Littlefoot";
					break;
				case 1:
					_name = "Ducky";
					break;
				case 2:
					_name = "Spike";
					break;
				case 3:
					_name = "Dino";
					break;
				case 4:
					_name = "Barney";
					break;
				}
		}
		break;
	case 3:
		_species = "cow";
		_sound = "moo";
		_isFemale = rand() % 2;
		if (_isFemale)
		{
			_size = rand() % 400 + 1200;
			switch (rand() % 5)
			{
			default:
			case 0:
				_name = "Bessie";
				break;
			case 1:
				_name = "Maisie";
				break;
			case 2:
				_name = "Belle";
				break;
			case 3:
				_name = "Daisy";
				break;
			case 4:
				_name = "Isabella";
				break;
			}
		}
		else
		{
			_size = rand() % 400 + 2000;
			switch (rand() % 5)
				{
				default:
				case 0:
					_name = "Ferdinand";
					break;
				case 1:
					_name = "Duncan";
					break;
				case 2:
					_name = "Doug";
					break;
				case 3:
					_name = "Biff";
					break;
				case 4:
					_name = "Milky White";
					break;
				}
		}
		break;
	case 4:
		_species = "ocelot";
		_sound = "rawr";

		_isFemale = rand() % 2;
		if (_isFemale)
		{
			_size = rand() % 20 + 10;
			switch (rand() % 5)
			{
			default:
			case 0:
				_name = "Omayra";
				break;
			case 1:
				_name = "Olive";
				break;
			case 2:
				_name = "Opal";
				break;
			case 3:
				_name = "Olga";
				break;
			case 4:
				_name = "Oneida";
				break;
			}
		}
		else
		{
		_size = rand() % 20 + 20;
		switch (rand() % 5)
				{
				default:
				case 0:
					_name = "Omar";
					break;
				case 1:
					_name = "Opie";
					break;
				case 2:
					_name = "Olaf";
					break;
				case 3:
					_name = "Orrin";
					break;
				case 4:
					_name = "Chad";
					break;
				}
		}
		break;
	}

	printf("%s, %s, %s, %d, %s\n", _species.c_str(), _name.c_str(), _isFemale ? "female" : "male", _size, _sound.c_str());
}

