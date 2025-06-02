#include <iostream>
#include <string>

using namespace std;

class Animal
{
public:
	Animal() {}
	virtual void bark() {};
};

class Lion : public Animal
{
public:
	Lion(string word) : m_word(word) {}
	void bark() { cout << "Lion" << " " << m_word << endl; }
private:
	string m_word;
};

class Wolf : public Animal
{
public:
	Wolf(string word) : m_word(word) {}
	void bark() { cout << "Wolf" << " " << m_word << endl; }

private:
	string m_word;
};

class Dog : public Animal
{
public:
	Dog(string word) : m_word(word) {}
	void bark() { cout << "Dog" << " " << m_word << endl; }

private:
	string m_word;
};


void print(Lion lion)
{
	lion.bark();
}

void print(Animal* animal)
{
	animal->bark();
}

int main()
{
	Lion lion("ahaaaaaaa!");
	Wolf wolf("ohhhhh");
	Dog dog("ooooooops");

	print(&lion);
	print(&wolf);
	print(&dog);

	return 0;
}

