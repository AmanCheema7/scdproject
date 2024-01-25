#include <iostream>
using namespace std;




int main() {
	Calculator calculator(10, 5);

	cout << "Addition: " << calculator.add() << endl;
	cout << "Subtraction: " << calculator.subtract() << endl;
	cout << "Multiplication: " << calculator.multiply() << endl;
	cout << "Division: " << calculator.divide() << endl;

	return 0;
}