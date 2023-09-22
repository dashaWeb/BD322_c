#include <iostream>
using namespace std;


int factor(int number) {
	if (number == 1 || number == 0) {
		return 1;
	}
	return number * factor(number - 1);
}

int maxDigit(int number) {
	if (number < 10) {
		return number;
	}
	int max = maxDigit(number / 10);
	int current = number % 10;
	return max > current ? max : current;
}

// (((())))
void showSymbol(int counter)
{
	if (counter == 0) {
		return;
	}
	cout << "( ";
	showSymbol(counter - 1);
	cout << ") ";
}
int main()
{
	// 5! = 5 * 4!
	// 4! = 4 * 3!
	// 3! = 3 * 2!
	// 2! = 2 * 1!
	// 1! = 1
	// 0! = 1
	cout << "Factorial 5 :: " << factor(5) << endl;
	cout << "Max Digit :: " << maxDigit(1296) << endl;
	showSymbol(5);
	cout << endl;

	/*
		2^4 --> 2 * 2^3
		2^3 --> 2 * 2^2
		2^2 --- 2 * 2^1
		2^1 --> 2
	*/
}

