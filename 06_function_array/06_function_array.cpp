#include <iostream>
#include <ctime>
#include <conio.h>
using namespace std;

const int COL = 5;
enum Key
{
	LEFT = 75, RIGHT = 77, UP = 72, DOWN = 80, ESCAPE = 27
};
void fillArray(int arr[], int lenght, int min = 1, int max = 10) {
	for (size_t i = 0; i < lenght; i++)
	{
		arr[i] = min + rand() % (max - min + 1);
	}
}

void printArray(int arr[], int length, string text = "") {
	cout << text;
	for (size_t i = 0; i < length; i++)
	{
		cout << arr[i] << "\t";
	}cout << endl;
}

void fillArray(int arr[][COL], int row, int col, int min = 1, int max = 10) {
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			arr[i][j] = min + rand() % (max - min + 1);
		}
	}
}
void printArray(int arr[][COL], int row, int col, string text = "") {
	cout << text << (text.size() > 0 ? "\n" : "");
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

void right(int arr[][COL], int row, int col) {
	for (size_t i = 0; i < row; i++)
	{
		int tmp = arr[i][col - 1];
		for (int j = col - 1; j > 0; j--)
		{
			arr[i][j] = arr[i][j - 1];
		}
		arr[i][0] = tmp;

	}
}
void left(int arr[][COL], int row, int col) {
	for (size_t i = 0; i < row; i++)
	{
		int tmp = arr[i][0];
		for (int j = 0; j < col - 1; j++)
		{
			arr[i][j] = arr[i][j + 1];
		}
		arr[i][col - 1] = tmp;

	}
}
void up(int arr[][COL], int row, int col) {
	for (size_t i = 0; i < col; i++)
	{
		int tmp = arr[0][i];
		for (size_t j = 0; j < row - 1; j++)
		{
			arr[j][i] = arr[j + 1][i];
		}
		arr[row - 1][i] = tmp;
	}
}
void down(int arr[][COL], int row, int col) {
	for (size_t i = 0; i < col; i++)
	{
		int tmp = arr[row - 1][i];
		for (size_t j = row - 1; j > 0; j--)
		{
			arr[j][i] = arr[j - 1][i];
		}
		arr[0][i] = tmp;
	}
}
int main()
{
	/*const int size = 10;
	int arr[size]{};
	fillArray(arr, size, -50, 100);
	printArray(arr, size, "Print Array :: \t");*/

	const int row = 4, col = 5;
	int mas[row][col]{};
	fillArray(mas, row, col);
	printArray(mas, row, col);

	while (true)
	{
		int choice = _getch();
		system("cls");
		switch (choice)
		{
		case LEFT:
			left(mas, row, col);
			printArray(mas, row, col);
			break;
		case RIGHT:
			right(mas, row, col);
			printArray(mas, row, col);
			break;

		case UP:
			up(mas, row, col);
			printArray(mas, row, col);
			break;

		case DOWN:
			down(mas, row, col);
			printArray(mas, row, col);
			break;

		}
		if (choice == ESCAPE) {
			break;
		}

	}
}

