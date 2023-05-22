#include<iostream>
#include<string>

// Calculator

struct Calculator {

	void Run() {
		while (true) {
			system("cls");
			std::cout << "-----Welcome to CLICalculator!----\n";
			Calculate();
		}
	}
	void Calculate() {
		
		
		std::cout << "Enter number 1: ";
		std::cin >> input_1;
		std::cout << "Enter number 2: ";
		std::cin >> input_2;
		std::cout << "Enter the operator [+ - * /]: ";
		std::cin >> operand;

		switch (operand) {
		case '+':
			result = Addition(input_1, input_2);
			break;
		case '-':
			result = Subtraction(input_1, input_2);
			break;
		case '*':
			result = Multiplication(input_1, input_2);
			break;
		case '/':
			result = Division(input_1, input_2);
			break;
		default:
			std::cout << "Wrong input, try again.\n\n";
			break;
		}
		std::cout << "Answer is: " << result << std::endl;
		std::cout << "press any key to continue, N to exit the program. ";
		std::cin >> choice;

		choice = toupper(choice);
		if (choice == 'N') {
			exit(1);
		}
		else {
			return;
		}
	}
	double Addition(double number1, double number2) {
		return number1 + number2;
	}
	double Subtraction(double number1, double number2) {
		return number1 - number2;
	}
	double Multiplication(double number1, double number2) {
		return number1 * number2;
	}
	double Division(double number1, double number2) {
		return number1 / number2;
	}
private:
	double input_1;
	double input_2;
	double result;
	char operand;
	char choice;
};


int main() {
	Calculator calc;
	calc.Run();

	return 0;

}