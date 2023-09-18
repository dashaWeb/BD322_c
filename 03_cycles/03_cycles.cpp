#include <iostream>
using namespace std;



int main()
{
	//int i = 0; // лічильник
	//while (i < 10) // умова
	//{ // тіло цикла
	//	cout << i++ << endl;
	//	//i++; // крок
	//}

	/*int res;
	do
	{
		cout << " 2 + 2 = ";
		cin >> res;

	} while (res != 4);*/
	/*int number,counter = 0;
	for (; ;)
	{
		cout << "Enter number :: ";
		cin >> number;
		if (number == 0) break;
		counter++;
	}
	cout << counter << " numbers;" << endl;*/

	/*for (size_t i = 0; i < 5; i++)
	{
		string color;
		cout << "Enter color :: ";
		cin >> color;
		if (color.size() < 5) continue;
		cout << color << endl;
	}*/
	/*

*
**
***
****
*****

line 1
cout << *
cout << endl;


line 2
cout << *
cout << *
cout << endl;

line 3
cout << *
cout << *
cout << *
cout << endl;
*/
//line 1
//for(int i = 0; i < 1; i++){
//	cout << "*";
//}
//cout << endl;
//
////line 2
//for(int i = 0; i < 2; i++){
//	cout << "*";
//}
//cout << endl;
//
////line 3
//for (int i = 0; i < 3; i++) {
//	cout << "*";
//}
//cout << endl;
//
////line 4
//for (int i = 0; i < 4; i++) {
//	cout << "*";
//}
//cout << endl;
////line 5
//for (int i = 0; i < 5; i++) {
//	cout << "*";
//}
//cout << endl;
	/*int line;
	cout << "Enter number of lines :: ";
	cin >> line;
	for (size_t i = 1; i <= line; i++)
	{
		for (int j = 0; j < i; j++) {
			cout << "*";
		}
		cout << endl;
	}*/
	/*
	}

	10 1
	9  2
	8  3
	7  4
	6  5
	5  6
	4  7
	3  8
	2  9
	1  10
	*/
	//    *
	//   *** 
	//  *****
	// *******
	//*********

	////line 1
	//for (size_t i = 0; i < 4; i++)
	//{
	//	cout << " ";
	//}
	//for (size_t i = 0; i < 1; i++)
	//{
	//	cout << "*";
	//}
	//cout << endl;

	////line 2
	//for (size_t i = 0; i < 3; i++)
	//{
	//	cout << " ";
	//}
	//for (size_t i = 0; i < 3; i++)
	//{
	//	cout << "*";
	//}
	//cout << endl;

	////line 3
	//for (size_t i = 0; i < 2; i++)
	//{
	//	cout << " ";
	//}
	//for (size_t i = 0; i < 5; i++)
	//{
	//	cout << "*";
	//}
	//cout << endl;

	////line 4
	//for (size_t i = 0; i < 1; i++)
	//{
	//	cout << " ";
	//}
	//for (size_t i = 0; i < 7; i++)
	//{
	//	cout << "*";
	//}
	//cout << endl;

	////line 5

	//for (size_t i = 0; i < 0; i++)
	//{
	//	cout << " ";
	//}
	//for (size_t i = 0; i < 9; i++)
	//{
	//	cout << "*";
	//}
	//cout << endl;
	int line;
	char symbol;
	cout << "number of lines :: ";
	cin >> line;
	cout << "enter symbol :: ";
	cin >> symbol;
	for (int j = line-1, q = 1; j >= 0; j--, q += 2)
	{
		for (size_t i = 0; i < j; i++)
		{
			cout << " ";
		}
		for (size_t i = 0; i < q; i++)
		{
			cout << symbol;
		}
		cout << endl;
	}
	//fksdjfksdjfkkk
	int a=555, b, c;

}
