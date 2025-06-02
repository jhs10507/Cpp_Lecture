#include <iostream>
#include <memory>
using namespace std;

class MyClass {
public: 
	MyClass(int val) : value(val) {
		cout << "MyClass 생성: " << value << endl;
	}
	~MyClass() {
		cout << "MyClass 소멸: " << value << endl;
	}
	void display() const {
		cout << "값: " << value << endl;
	}
private:
	int value;
};

int main() {

	unique_ptr<MyClass> myObject = make_unique<MyClass>(42);

	myObject->display();

	unique_ptr<MyClass> newOwner = move(myObject);

	if (!myObject) {
		cout << "myObject는 이제 비어 있습니다." << endl;
	}
	newOwner->display();
	
	return 0;
}