#include <iostream>
#include <string>

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

int main() {
	Animal* dog = new Dog();
	Animal* cat = new Cat();
	Animal* tiger = new Tiger();;

	dog->speak();
	cat->speak();
	tiger->speak();

	delete dog;
	delete cat;
	delete tiger;
	return 0;
}