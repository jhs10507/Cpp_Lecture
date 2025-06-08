
#include <iostream>

using namespace std;

template <typename T>
class AddOperator {
public:
    T add(const T& a, const T& b) {
		return a + b;
    }
};

int main() {

	AddOperator<int>    intAdder;
	AddOperator<double> doubleAdder;
	AddOperator<string> stringAdder;

    cout << "3 + 5 = " << intAdder.add(3, 5) << endl;

    cout << "2.5 + 4.3 = " << doubleAdder.add(2.5, 4.3) << endl;

    cout << "\"Hello, \" + \"World!\" = " << stringAdder.add(string("Hello, "), string("World!")) << endl;

    return 0;
}