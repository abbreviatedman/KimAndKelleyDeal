/*
main.cpp
Aug 17, 2016
ballo
*/
#include <time.h>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <vector>
#include <iostream>
#include "Animal.h"
using namespace std;





void breedAnimal(Animal & child, Animal dad, Animal mom)
{


		//randomly pick dad or mom, inherit species
		if (rand() % 2)
		{
			child._species = dad._species;
		}
		else
		{
			child._species = mom._species;
		}

		//randomly pick dad or mom, inherit sound.
		// note that I separated this from species for effect, could be recombined
		// if you wanted consistency of species and sound instead.
		if (rand() % 2)
				{
					child._sound = dad._sound;
				}
				else
				{
					child._sound = mom._sound;
				}

		//randomly pick gender
		child._isFemale = rand() % 2;

		//average weights of parents to get child's
		child._size = (dad._size + mom._size) / 2;


		// randomly pick name given species and gender.
		int namePicker = rand() % 5;

		if (child._species == "dog")
		{
			if (child._isFemale)
			{
				child._name = child.dogFemaleName[namePicker];
			}
			else
			{
				child._name = child.dogMaleName[namePicker];
			}
		}
		else if (child._species == "cat")
		{
			if (child._isFemale)
			{
				child._name = child.catFemaleName[namePicker];
			}
			else
			{
				child._name = child.catMaleName[namePicker];
			}
		}
		else if (child._species == "dinosaur")
		{
			if (child._isFemale)
			{
				child._name = child.dinosaurFemaleName[namePicker];
			}
			else
			{
				child._name = child.dinosaurMaleName[namePicker];
			}
		}
		else if (child._species == "cow")
		{
			if (child._isFemale)
			{
				child._name = child.cowFemaleName[namePicker];
			}
			else
			{
				child._name = child.cowMaleName[namePicker];
			}
		}
		else if (child._species == "ocelot")
		{
			if (child._isFemale)
			{
				child._name = child.ocelotFemaleName[namePicker];
			}
			else
			{
				child._name = child.ocelotMaleName[namePicker];
			}
		}
		else
		{
			printf("Unknown species! Halp!");
		}

		printf("A %s was born to a", child._isFemale ? "daughter" : "son");

		if (mom._species == "ocelot")
		{
			printf("n");
		}

		printf(" %s named %s and a", mom._species.c_str(), mom._name.c_str());

		if (dad._species == "ocelot")
		{
			printf("n");
		}

		printf(" %s named %s! %s name is %s. Now fully grown, our new baby weighs %d pounds.\n", dad._species.c_str(), dad._name.c_str(),
				child._isFemale ? "Her" : "His", child._name.c_str(), child._size);
				printf("%s is a", child._isFemale ? "She" : "He");
				if (child._species == "ocelot")
				{
					printf("n");
				}

				printf(" %s that says %s", child._species.c_str(), child._sound.c_str());

				if ((child._species == "dog" && child._sound != "woof") ||
						(child._species == "cow" && child._sound != "moo") ||
						(child._species == "dinosaur" && child._sound != "ROAR") ||
						(child._species == "ocelot" && child._sound != "rawr") ||
						(child._species == "cat" && child._sound != "meow"))
				{
					printf(", which is pretty funny if you think about it");
				}

				printf(".\n\n");

}

int main()
{

	srand(time(NULL));
	vector<Animal> litter;
	litter.resize(5);
	int numMales = 0;
	int numFemales = 0;
	printf("We start with five animals:\n\n");
	for (int i = 0; i < 5; i++)
	{
		litter.at(i).Animal::randAnimal();
		if (litter.at(i)._isFemale)
		{
			numFemales++;
		}
		else
		{
			numMales++;
		}
	}
	printf("\n%d females and %d males.\n\n", numFemales, numMales);
	if (numMales && numFemales)
	{
		vector<int> males;
		vector<int> females;

		for (size_t i = 0; i < litter.size(); i++)
			{
				if (litter.at(i)._isFemale)
				{
					females.push_back(i);
				}
				else
				{
					males.push_back(i);
				}

			}

		printf("Then we breed three, picking random parents from those five plus any we breed along the way.\n\n"
				"(They grow up so fast!)\n\n");
		for (int i = 0; i < 3; i++)
			{
			Animal a;
			int newDad = males.at(rand() % numMales);
			int newMom = females.at(rand() % numFemales);
			breedAnimal(a, litter.at(newDad), litter.at(newMom));


			if (a._isFemale)
			{
				numFemales++;
				litter.push_back(a);
				females.push_back((litter.size())-1);
			}
			else
			{
				numMales++;
				litter.push_back(a);
				males.push_back((litter.size())-1);
			}

			}

		vector<Animal>::iterator it;

		printf("\nAnd here are the eight resulting animals:\n\n");

		for (it = litter.begin(); it != litter.end(); ++it)
		{
			printf("%s, %s, %s, %d, %s\n", it->_species.c_str(), it->_name.c_str(), it->_isFemale ? "female" : "male", it->_size, it->_sound.c_str());
		}
	}
	else
	{
		printf("No breedable population!\n");
	}

	string x;
	cout<<"\nType a thing and hit an enter key to exit."<<endl;
	cin>>x;

	return 0;
}
