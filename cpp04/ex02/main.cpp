#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	int N = 4;
	const Animal *animal[N];
	int i = 0;

	for (i = 0; i < N/2; i++)
		animal[i] = new Dog();
	for (i = N/2; i < N; i++)
		animal[i] = new Cat();

	for (int i = 0; i < N; i++)
		animal[i]->makeSound();

	for (int i = 0; i < N; i++)
		delete animal[i];

return 0;
}
