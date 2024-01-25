#include <iostream>
using namespace std;

class Calculator {
private:
	double number1;
	double number2;

public:
	Calculator(double num1, double num2) {
		number1 = num1;
		number2 = num2;
	}

	double add() {
		return number1 + number2;
	}

	double subtract() {
		return number1 - number2;
	}

	double multiply() {
		return number1 * number2;
	}

	double divide() {
		if (number2 == 0) {
			throw "Cannot divide by zero.";
		}
		return number1 / number2;
	}
};

int main() {
	Calculator calculator(10, 5);

	cout << "Addition: " << calculator.add() << endl;
	cout << "Subtraction: " << calculator.subtract() << endl;
	cout << "Multiplication: " << calculator.multiply() << endl;
	cout << "Division: " << calculator.divide() << endl;

	return 0;
}