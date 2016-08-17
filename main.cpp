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


int main()
{
	Animal a ("woof", "dog", "Bob", 40, false);
	Animal b ("woof", "dog", "Marcia", 70, true);
	Animal c;
	c.breedAnimal(a, b);
	printf("Stopped breeding!\n");
	return 0;
}
