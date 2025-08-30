#include "Animal.h"
#pragma once

class AnimalsInZoo {

	public:
		AnimalsInZoo(Animal a);
		AnimalsInZoo();
		void display();

	private:
		unsigned int numAnimals;
		Animal animal;
};
