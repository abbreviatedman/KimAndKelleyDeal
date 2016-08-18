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




void breedAnimal(Animal & child, Animal dad, Animal mom);
//void setSpeciesAndSound(Animal & child, Animal dad, Animal mom);
//void setGenderAndName(Animal & child, Animal dad, Animal mom);
//void setSize(Animal & child, Animal dad, Animal mom);
//void printAnimal(Animal child, Animal dad, Animal mom);


void breedAnimal(Animal & child, Animal dad, Animal mom)
{


		//randomly pick dad or mom, inherit species
		if (rand() % 2)
		{
			child._species = dad._species;
			child._sound = dad._sound;
		}
		else
		{
			child._species = mom._species;
			child._sound = mom._sound;
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


		// pick weight and name given species and gender.
		if (child._species == "dog")
		{
			if (child._isFemale)
			{
				switch (rand() % 5)
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
			else
			{
				switch (rand() % 5)
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
		}

		else if (child._species == "cat")
		{
			if (child._isFemale)
			{
				switch (rand() % 5)
				{
				default:
				case 0:
					child._name = "Tabby";
					break;
				case 1:
					child._name = "Lily";
					break;
				case 2:
					child._name = "Socks";
					break;
				case 3:
					child._name = "Snowball";
					break;
				case 4:
					child._name = "Janice";
					break;
				}
			}
			else
			{
				switch (rand() % 5)
					{
					default:
					case 0:
						child._name = "Mittens";
						break;
					case 1:
						child._name = "Vladimir";
						break;
					case 2:
						child._name = "Estragon";
						break;
					case 3:
						child._name = "Flash";
						break;
					case 4:
						child._name = "Tango";
						break;
					}
			}
		}
		else if (child._species == "dinosaur")
		{
			if (child._isFemale)
			{
					switch (rand() % 5)
					{
					default:
					case 0:
						child._name = "Cera";
						break;
					case 1:
						child._name = "Chloe";
						break;
					case 2:
						child._name = "Petrova";
						break;
					case 3:
						child._name = "Pauline";
						break;
					case 4:
						child._name = "Posey";
						break;
					}
			}
			else
			{
				switch (rand() % 5)
				{
					default:
					case 0:
						child._name = "Littlefoot";
						break;
					case 1:
						child._name = "Ducky";
						break;
					case 2:
						child._name = "Spike";
						break;
					case 3:
						child._name = "Dino";
						break;
					case 4:
						child._name = "Barney";
						break;
					}
			}
		}
		else if (child._species == "cow")
		{
			if (child._isFemale)
			{
				switch (rand() % 5)
				{
				default:
				case 0:
					child._name = "Bessie";
					break;
				case 1:
					child._name = "Maisie";
					break;
				case 2:
					child._name = "Belle";
					break;
				case 3:
					child._name = "Daisy";
					break;
				case 4:
					child._name = "Isabella";
					break;
				}
			}
			else
			{
				switch (rand() % 5)
				{
					default:
					case 0:
						child._name = "Ferdinand";
						break;
					case 1:
						child._name = "Duncan";
						break;
					case 2:
						child._name = "Doug";
						break;
					case 3:
						child._name = "Biff";
						break;
					case 4:
						child._name = "Milky White";
						break;
				}
			}
		}
		else if (child._species == "ocelot")
		{
			if (child._isFemale)
			{
				switch (rand() % 5)
				{
				default:
				case 0:
					child._name = "Omayra";
					break;
				case 1:
					child._name = "Olive";
					break;
				case 2:
					child._name = "Opal";
					break;
				case 3:
					child._name = "Olga";
					break;
				case 4:
					child._name = "Oneida";
					break;
				}
			}
			else
			{
				switch (rand() % 5)
				{
					default:
					case 0:
						child._name = "Omar";
						break;
					case 1:
						child._name = "Opie";
						break;
					case 2:
						child._name = "Olaf";
						break;
					case 3:
						child._name = "Orrin";
						break;
					case 4:
						child._name = "Chad";
						break;
					}
			}
		}
		else
		{
			printf("Unknown species!");
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
				if ((child._species == "dog" && child._sound != "woof") || (child._species == "cow" && child._sound != "moo") || (child._species == "dinosaur" && child._sound != "ROAR")
						|| (child._species == "ocelot" && child._sound != "rawr") || (child._species == "cat" && child._sound != "meow"))
				{
					printf(", which is pretty funny if you think about it.\n\n");
				}
				else
				{
					printf(".\n\n");
				}


//	setSpeciesAndSound(child, dad, mom);
//	setGenderAndName(child, dad, mom);
//	setSize(child, dad, mom);
//	printAnimal(child, dad, mom);
}


//void setSpeciesAndSound(Animal & child, Animal dad, Animal mom)
//{
//	//combine species
//	if (rand() % 2)
//	{
//		child._species = dad._species;
//	}
//	else
//	{
//		child._species = mom._species;
//	}
//
//	//pick sound
//	if (child._species == "dog")
//		{
//			child._sound = "woof";
//		}
//		else
//		{
//			child._sound = "glurb";
//		}
//}
//
//void setGenderAndName(Animal & child, Animal dad, Animal mom)
//{
//	//pick gender and assign appropriate words and name
//	child._isFemale = rand() % 2;
//	if (child._isFemale)
//	{
//		switch (rand() % 5)
//		{
//		default:
//		case 0:
//			child._name = "Lassie";
//			break;
//		case 1:
//			child._name = "Maisie";
//			break;
//		case 2:
//			child._name = "Goldberry";
//			break;
//		case 3:
//			child._name = "Lucy";
//			break;
//		case 4:
//			child._name = "Bee";
//			break;
//		}
//
//	}
//	else
//	{
//		switch (rand() % 5)
//		{
//		default:
//		case 0:
//			child._name = "Rover";
//			break;
//		case 1:
//			child._name = "Oscar";
//			break;
//		case 2:
//			child._name = "Mellow";
//			break;
//		case 3:
//			child._name = "Maverick";
//			break;
//		case 4:
//			child._name = "Buddy";
//			break;
//		}
//	}
//}
//
//void setSize(Animal & child, Animal dad, Animal mom)
//{
//	//combine sizes
//	child._size = (dad._size + mom._size) / 2;
//}
//
//void printAnimal(Animal child, Animal dad, Animal mom)
//{
//	//print results of breeding
//	printf("A %s was born to a %s named %s and a %s named %s! %s name is %s. Now fully grown, our new %s weighs %d pounds. %s says %s.\n",
//			child._isFemale ? "daughter" : "son", mom._species.c_str(), mom._name.c_str(), dad._species.c_str(), dad._name.c_str(),
//			child._isFemale ? "Her" : "His", child._name.c_str(),
//			child._species.c_str(), child._size, child._isFemale ? "She" : "He", child._sound.c_str());
//}

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

		printf("Then we breed three, picking random parents from those five plus any we breed along the way. (They grow up so fast!)\n\n");
		for (int i = 0; i < 3; i++)
			{
			Animal a;
//			printf("%s, %s, %s, %d, %s\n", a._species.c_str(), a._name.c_str(), a._isFemale ? "female" : "male", a._size, a._sound.c_str());
			int newDad = males.at(rand() % numMales);
			int newMom = females.at(rand() % numFemales);
			breedAnimal(a, litter.at(newDad), litter.at(newMom));
//			printf("%s, %s, %s, %d, %s\n", a._species.c_str(), a._name.c_str(), a._isFemale ? "female" : "male", a._size, a._sound.c_str());
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
