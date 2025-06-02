#include <iostream>
using namespace std;

class Phone {
 
public: // 순수 가상함수는 클래스가 추상 클래스가 되도록 만듭니다.
    virtual void displayBrand() = 0; // 순수 가상함수
    virtual void showFeature() = 0; // 순수 가상함수
    virtual ~Phone() {} // ~는 가상소멸자
};

class Samsung : public Phone {
public:
	void displayBrand() override // override는 가상함수 재정의를 나타냅니다.
    {
        cout << "Samsung" << endl;
    }
	void showFeature() override // override는 가상함수 재정의를 나타냅니다.
    {
        cout << "Galaxy S 시리즈" << endl;
    }
};

class Apple : public Phone {
public:
	void displayBrand() override // override는 가상함수 재정의를 나타냅니다.
    {
        cout << "Apple" << endl;
    }
    void showFeature() override // override는 가상함수 재정의를 나타냅니다.
    {
        cout << "iPhone Pro 시리즈" << endl;
    }
};

class Xiaomi : public Phone {
public:
    void displayBrand() override // override는 가상함수 재정의를 나타냅니다.
    {
        cout << "Xiaomi" << endl;
    }
    void showFeature() override // override는 가상함수 재정의를 나타냅니다.
    {
        cout << "Redmi Note 시리즈" << endl;
    }
};

int main() {

    Phone* Machine[3];
	Machine[0] = new Samsung();
	Machine[1] = new Apple();
	Machine[2] = new Xiaomi();

    for (int i = 0; i < 3; ++i) {
	    Machine[i]->displayBrand();
		Machine[i]->showFeature();
    }

    for (int i = 0; i < 3; ++i) {
        delete Machine[i]; // 메모리 해제
	}

    return 0;
}