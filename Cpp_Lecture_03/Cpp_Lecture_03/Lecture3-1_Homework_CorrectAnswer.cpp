#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Animal {
public:
	virtual void speak() = 0;
	virtual ~Animal() = default;
};

class Dog : public Animal {
public:
	void speak() override {
		cout << "멍멍!" << endl;
	};
};

class Cat : public Animal {
public:
	void speak() override {
		cout << "야옹!" << endl;
	};
};

class Tiger : public Animal {
public:
	void speak() override {
		cout << "어흥!" << endl;
	};
};

void makeAnimalsSpeak(vector<Animal*> &animals) {
	for (Animal* animal : animals) { animal->speak(); }
	for (Animal* animal : animals) { animal->speak(); }
}

int main() {
	vector<Animal*> animals;
	animals.push_back(new Dog());
	animals.push_back(new Cat());
	animals.push_back(new Tiger());

	makeAnimalsSpeak(animals);
	return 0;
}