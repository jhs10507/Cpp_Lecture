#include <iostream>
using namespace std;

void func1() {
	int a = 10;	// 지역 변수 'a', stack 메모리에 저장됨
	cout << "func1: a = " << a << endl;
} // func1()이 종료되면 'a'는 소멸됨

void func2() {
	int b = 20;
	cout << "func2: b = " << b << endl;
}

void func3() {
	for (int i = 0; i < 3; ++i)
	{
		int temp = i * 10;
		cout << "Interation " << i << ": temp = " << temp << endl;
	}
}

int main() {
	func1(); // func1() 호출
	// 'a'는 func1() 호출 중에만 존재하고, 함수 종료 후 소멸됨
	func2();
	func3();
	return 0;
}