#include <iostream>

using namespace std;

int main() {
	int input1 = 0;
	int input2 = 0;
	char input3;
	cout << "Input number 1 : "; 
	cin >> input1;
	cout << "Input number 2 : ";
	cin >> input2;
	cout << "choose operation : ";
	cin >> input3;

	switch (input3) {
	case '+':
		cout << input1 + input2 << endl;
		break;
	case '-':
		cout << input1 - input2 << endl;
		break;
	case '*':
		cout << input1 * input2 << endl;
		break;
	case '/':
		if (input1 == 0 || input2 == 0) {
			cout << "You cannot divide an integer by zero." << endl;
			break;
		}

		else {
			cout << input1 / input2 << endl;
			break;
		}

	case '%':
		cout << input1 % input2 << endl;
		break;
	default:
		cout << "Program should never reach here." << endl;
		break;
	}
	
}
