#include <iostream>
using namespace std;

class Animal
{
public:

	virtual void makeSound() {
		cout << "Animal make a sound." << endl;
	};
};

class Dog : public Animal
{
public:
	void makeSound() {
		cout << "Dog barks: Woof! Woof!" << endl;
	}
};

class Cat : public Animal {
public:
	void makeSound() {
		cout << "Cat meows : Meow! Meow!" << endl;
	}
};

int main()
{
	Animal* myAnimal;
	Dog myDog;
	Cat myCat;

	myAnimal = &myDog;
	myAnimal->makeSound();

	myAnimal = &myCat;
	myAnimal->makeSound();

	return 0;
}

