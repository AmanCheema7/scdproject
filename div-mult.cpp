public:
	Calculator(double num1, double num2) {
		number1 = num1;
		number2 = num2;
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