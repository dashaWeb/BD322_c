#include <iostream>
//using namespace std;
using std::cout;
using std::endl;
using std::cin;



enum Color
{
	RED = 1, GREEN, BLUE, YELLOW, PURPLE
};


int main()
{
	// types name 
	//const types name = value

	//const double PI = 3.14;

   // double number;
   // cout << "Enter number :: ";
   // cin >> number; // 12.5

   ///* int uah = number;
   // int coin = (number - uah) * 100;*/

   // cout << (int)number << " uah " << (number - (int)number) * 100 << " coin " << endl;


	/*
		==
		<
		>
		<=
		>=
		!=

		&& -- and
		|| -- or

	*/

	/*int day;
	cout << "Enter number day :: ";
	cin >> day;

	if (day == 1) {
		cout << "Monday" << endl;
	}
	else if (day == 2) {
		cout << "Tuesday" << endl;
	}
	else {
		cout << "Error" << endl;
	}*/

	/*double number;
	cout << "Enter number :: ";
	cin >> number;
	if (number >= 0 and number <= 20) {
		cout << "in range[0,20]" << endl;
	}
	else if (number < 0 or number >20) {
		cout << "in not range[0,20]" << endl;
	}
	else {
		cout << "Error" << endl;
	}*/

	/*int month;
	cout << "Enter number month :: ";
	cin >> month;

	switch (month)
	{
	default:
		cout << "Error" << endl;
		break;
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		cout << "31 days" << endl;
		break;
	case 2:
		int year;
		cout << "Enter year :: ";
		cin >> year;
		if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0) {
			cout << "29 days" << endl;
		}
		else {
			cout << "28 days" << endl;
		}
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		cout << "30 days" << endl;
		break;

	}*/

	/*cout << "\t 1 - Red; \n\t 2 - Green; \n\t 3 - Blue; \n\t 4 - Yellow; \n\t 5 - Purple; \n\t Enter :: ";
	int number_color;
	cin >> number_color;








	switch (number_color)
	{
	case RED:
		system("Color 40");
	case GREEN:
		system("Color 20");
	case BLUE:
		system("Color 10");
	case YELLOW:
		system("Color 60");
	case PURPLE:
		system("Color 50");
	default:
		break;
	}*/


	//Типи операторів
	// Унарний операто
	// a++, b--, -a
	// Бінарний оператор
	// a + b
	// Тернарний оператор
	// a ? b : c

	/*int day;
	int year = 2005;
	day = (year % 400 == 0 || year % 4 == 0 && year % 100 != 0) ? 29 : 28;
	cout << day << endl;*/
	/*int h = 9, m = 5, s = 25;
	cout << (h < 10 ? "0" : "") << h << ":" << (m < 10 ? "0" : "") << m << ":" << (s < 10 ? "0" : "") << s << endl;*/

	int number;
	int max;
	cout << "Enter number :: ";
	cin >> number; // 3
	max = number;
	cout << "Enter number :: ";
	cin >> number; // 5
	if (max < number) {
		max = number;
	}
	cout << "Enter number :: ";
	cin >> number; // 2
	if (max < number) {
		max = number;
	}
	cout << "Enter number :: ";
	cin >> number; // 10
	if (max < number) {
		max = number;
	}
	cout << "Enter number :: ";
	cin >> number; // 5
	if (max < number) {
		max = number;
	}
	cout << "Enter number :: ";
	cin >> number; // 5
	if (max < number) {
		max = number;
	}
	cout << "Enter number :: ";
	cin >> number; // 5
	if (max < number) {
		max = number;
	}
	cout << max << endl;
}

