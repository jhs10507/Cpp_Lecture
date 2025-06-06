#include <iostream>
using namespace std;

void func1() {
	int* ptr = new int(10);
	cout << "Value: " << *ptr << endl;
	delete ptr;
}

void func2() {
	int* arr = new int[5];
	for (int i = 0; i < 5; ++i) {
		arr[i] = i * 10;
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}
	delete[] arr;
}

void func3() {
	int* ptr = new int(20);
	cout << "Value: " << *ptr << endl;
}

void func4() {
	int* ptr = new int(30);
	cout << "Value: " << *ptr << endl;
	delete ptr;
}

void func5() {
	int* ptr = new int(40);
	int* ptr2 = ptr;

	cout << "ptr adress = " << ptr << endl;
	cout << "ptr2 adress = " << ptr2 << endl;
	cout << *ptr << endl;

	delete ptr;

	cout << *ptr2 << endl;
}

void createDynamicArray() {
	int size;
	cout << "Enter the size of the array: ";
	cin >> size;

	if (size > 0) {
		int* arr = new int[size];
		for (int i = 0; i < size; ++i) {
			arr[i] = i * 2;
			cout << "arr[" << i << "] = " << arr[i] << endl;
		}
		delete[] arr;
	}
	else {
		cout << "Invalid size!" << endl;
	}
}

int main() {
	func1();
	func2();
	func3();
	func4();
	func5();
	createDynamicArray();
	return 0;
}