
#include <iostream>

using namespace std;

template <typename T>
class AddOperator {
public:
    int addInt(int a, int b) {
        return a + b;
    }

    double addble(double a, double b) {
        return a + b;
    }

    std::string addstr(const std::string& a, const std::string& b) {
        return a + b;
    }
};

int main() {

	AddOperator<int> intAdder;
	AddOperator<double> doubleAdder;
	AddOperator<string> stringAdder;

    cout << "3 + 5 = " << intAdder.addInt(3, 5) << endl;

    cout << "2.5 + 4.3 = " << doubleAdder.addble(2.5, 4.3) << endl;

    cout << "\"Hello, \" + \"World!\" = " << stringAdder.addstr(string("Hello, "), string("World!")) << endl;

    return 0;
}