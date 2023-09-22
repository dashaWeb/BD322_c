#include <iostream>
#include <ctime>
using namespace std;


template <typename T, int COL>
void fillArray(T arr[][COL], int row, int col, int min = 1, int max = 20) {
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			arr[i][j] = min + rand() % (max - min + 1);
		}
	}
}
template <typename T, int COL>
void printArray(T arr[][COL], int row, int col, string text = " ") {
	cout << text << " :: " << endl;
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}
template <typename T, int COL>
auto maxElement(T arr[][COL], int row, int col) {
	auto max = arr[0][0];
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			if (max < arr[i][j]) {
				max = arr[i][j];
			}
		}
	}
	return max;
}

template <typename T, int COL>
bool isSort(T arr[][COL], int row, int col, int number_row) {

	if (number_row < 0 || number_row >= row) return false;
	for (size_t j = 0; j < col - 1; j++)
	{
		if (arr[number_row][j] > arr[number_row][j + 1]) {
			return false;
		}
	}
	return true;
}
template <typename T, int COL>
bool isSortAll(T arr[][COL], int row, int col) {

	for (size_t j = 0; j < row; j++)
	{
		if (!isSort(arr, row, col, j)) {
			return false;
		}
	}
	return true;
	
}
int main()
{
	const int row = 4, col = 3;
	string arr[row][col]{
		{"apple","zoo","cyan"},
		{"dog","ear","fetch"},
		{"gold","heart","i"},
		{"join","k","l"},
	};
	//fillArray(arr, row, col);
	printArray(arr, row, col, "Example Array");
	cout << "Max element :: " << maxElement(arr, row, col) << endl;
	cout << "IsSort :: " << boolalpha << isSort(arr, row, col, 3) << endl;
	cout << "IsSortAll :: " << boolalpha << isSortAll(arr, row, col) << endl;
}

