/*
main.cpp
Aug 17, 2016
ballo
*/
#include <time.h>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include "Animal.h"
using namespace std;




void breedAnimal(Animal & child, Animal dad, Animal mom);
void setSpeciesAndSound(Animal & child, Animal dad, Animal mom);
void setGenderAndName(Animal & child, Animal dad, Animal mom);
void setSize(Animal & child, Animal dad, Animal mom);
void printAnimal(Animal child, Animal dad, Animal mom);


void breedAnimal(Animal & child, Animal dad, Animal mom)
{
	setSpeciesAndSound(child, dad, mom);
	setGenderAndName(child, dad, mom);
	setSize(child, dad, mom);
	printAnimal(child, dad, mom);
}


void setSpeciesAndSound(Animal & child, Animal dad, Animal mom)
{
	//combine species
	srand(time(NULL));
	if (rand() % 2)
	{
		child._species = dad._species;
	}
	else
	{
		child._species = mom._species;
	}

	//pick sound
	if (child._species == "dog")
		{
			child._sound = "woof";
		}
		else
		{
			child._sound = "glurb";
		}
}

void setGenderAndName(Animal & child, Animal dad, Animal mom)
{
	//pick gender and assign appropriate words and name
	if (rand() % 2)
	{
		child._isFemale = false;
		int namerand = rand() % 5;
		switch (namerand)
		{
		default:
		case 0:
			child._name = "Rover";
			break;
		case 1:
			child._name = "Oscar";
			break;
		case 2:
			child._name = "Mellow";
			break;
		case 3:
			child._name = "Maverick";
			break;
		case 4:
			child._name = "Buddy";
			break;
		}

	}
	else
	{
		child._isFemale = true;
		int namerand = rand() % 5;
		switch (namerand)
		{
		default:
		case 0:
			child._name = "Lassie";
			break;
		case 1:
			child._name = "Maisie";
			break;
		case 2:
			child._name = "Goldberry";
			break;
		case 3:
			child._name = "Lucy";
			break;
		case 4:
			child._name = "Bee";
			break;
		}
	}
}

void setSize(Animal & child, Animal dad, Animal mom)
{
	//combine sizes
	child._size = (dad._size + mom._size) / 2;
}

void printAnimal(Animal child, Animal dad, Animal mom)
{
	//print results of breeding
	printf("A %s was born to a %s named %s and a %s named %s! %s name is %s. Now fully grown, our new %s weighs %d pounds. %s says %s.\n",
			child._isFemale ? "daughter" : "son", mom._species.c_str(), mom._name.c_str(), dad._species.c_str(), dad._name.c_str(),
			child._isFemale ? "Her" : "His", child._name.c_str(),
			child._species.c_str(), child._size, child._isFemale ? "She" : "He", child._sound.c_str());
}

int main()
{
	Animal a ("woof", "dog", "Bob", 40, false);
	Animal b ("woof", "dog", "Marcia", 70, true);
	Animal c;
	breedAnimal(c, a, b);
	printf("Stopped breeding!\n");
	return 0;
}
