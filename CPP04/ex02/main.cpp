#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const AAnimal* lst[] = {new Dog(), new Cat(), new Dog(), new Cat(), new Dog(), new Cat()};
	
	for (size_t i = 0; i < 6; i++)
	{
		cout << lst[i]->getType() << endl;
		lst[i]->makeSound();
		delete lst[i];
	}
}