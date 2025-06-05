#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Animal {
public:
	virtual ~Animal() {}
	virtual void speak() = 0;
};

class Dog: public Animal
{
public: 
	void speak() override {
		cout << "멍멍!" << endl;
	}
};

class Cat : public Animal
{
public:
	void speak() override {
		cout << "야옹!" << endl;
	}
};

class Cow : public Animal
{
public:
	void speak() override {
		cout << "음메!" << endl;
	}
};

class Zoo {
private:
	Animal* animals[10];
	int count;

public:
	Zoo() : count(0) {
		for (int i = 0; i < 10; ++i)
		{
			animals[i] = nullptr;
		}
	}

	void addAnimal(Animal* animal) {
		if (count < 10) {
			animals[count++] = animal;
		}
		else {

		}
	}

	void makeSound() {
		for (int i = 0; i < count; ++i)
		{
			if (animals[i]) {
				animals[i]->speak();
			}
		}
	}

	~Zoo() {
		for (int i = 0; i < count; ++i) {
			delete animals[i];
		}
	}
};

int main() {
	Zoo myZoo;

	myZoo.addAnimal(new Dog());
	myZoo.addAnimal(new Dog());
	myZoo.addAnimal(new Cat());
	myZoo.addAnimal(new Cow());

	myZoo.makeSound();

	return 0;
}

