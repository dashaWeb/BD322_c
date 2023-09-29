#include <iostream>
using namespace std;

void fill(int** arr, const int& row,const int& col, int min = 1, int max = 10) {
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			arr[i][j] = min + rand() % (max - min + 1);
		}
	}
	
}
void print(int** arr, int row, int col, string text = "") {
	cout << text << endl;
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
int** createArray(const int& row, const int& col) {
	int** arr = new int* [row];

	for (size_t i = 0; i < row; i++)
	{
		arr[i] = new int[col];
	}
	return arr;
}
void createArray(int**& mas,const int& row, const int& col) {
	int** arr = new int* [row];

	for (size_t i = 0; i < row; i++)
	{
		arr[i] = new int[col];
	}
	mas = arr;
}
void deleteArray(int**& arr, const int& row) {
	for (size_t i = 0; i < row; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
	arr = nullptr;
}

void insert(int**& arr, int& row, const int& col, const int index) {
	if (index < 0 || index > row) {
		cout << "Error" << endl;
		return;
	}
	int** tmp = new int* [row + 1];
	tmp[index] = new int[col] {};
	for (size_t i = 0; i < row; i++)
	{
		if (i < index) {
			tmp[i] = arr[i];
		}
		else {
			tmp[i + 1] = arr[i];
		}
	}
	row++;
	delete[] arr;
	arr = tmp;
}
void pushFront(int**& arr, int& row, const int& col) {
	insert(arr, row, col, 0);
}
void pushBack(int**& arr, int& row, const int& col) {
	insert(arr, row, col, row);
}
void remove(int**& arr, int& row, const int index) {
	if (index < 0 || index >= row) {
		cout << "Error" << endl;
		return;
	}
	int** tmp = new int* [--row];
	delete[] arr[index];
	for (size_t i = 0; i < row; i++)
	{
		if (i < index) {
			tmp[i] = arr[i];
		}
		else {
			tmp[i] = arr[i + 1];
		}
	}
	delete[] arr;
	arr = tmp;
}
int main()
{
	int row = 4, col = 5;
	int** arr = createArray(row,col);
	fill(arr, row, col);
	print(arr, row, col);
	insert(arr, row, col, 2);
	cout << "\n\n=============================\n\n";
	print(arr, row, col);
	deleteArray(arr, row);
}

