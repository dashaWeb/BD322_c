#pragma once
#include <iostream>
using std::cout;
using std::endl;
using std::string;


template<typename T>
void createArray(T**& arr, int row, int col);

template<typename T>
void fillArray(T** arr, const int& row, const int& col, int min = 1, int max = 10);

template<typename T>
void printArray(T** arr, const int& row, const int& col, string text = "");

template<typename T>
void insertCol(T** arr, int row, int& col, int index);

template<typename T>
void removeCol(T** arr, int row, int& col, int index);

template<typename T>
inline void createArray(T**& arr, int row, int col)
{
	int** tmp = new int* [row];
	for (size_t i = 0; i < row; i++)
	{
		tmp[i] = new int[col] {};
	}
	arr = tmp;
}

template<typename T>
inline void fillArray(T** arr, const int& row, const int& col, int min, int max)
{
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			arr[i][j] = min + rand() % (max - min + 1);
		}
	}
}

template<typename T>
inline void printArray(T** arr, const int& row, const int& col, string text)
{
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

template<typename T>
inline void insertCol(T** arr, int row, int& col, int index)
{
	if (index < 0 || index > col) {
		return;
	}
	for (size_t i = 0; i < row; i++)
	{
		T* tmp = new T[col + 1];
		tmp[index] = 0;
		for (size_t j = 0; j < col; j++)
		{
			if (j < index) {
				tmp[j] = arr[i][j];
			}
			else {
				tmp[j + 1] = arr[i][j];
			}
		}
		delete[] arr[i];
		arr[i] = tmp;
	}
	col++;
}

template<typename T>
inline void removeCol(T** arr, int row, int& col, int index)
{
	if (index < 0 || index >= col) {
		return;
	}
	col--;
	for (size_t i = 0; i < row; i++)
	{
		T* tmp = new T[col];
		for (size_t j = 0; j < col; j++)
		{
			if (j < index) {
				tmp[j] = arr[i][j];
			}
			else {
				tmp[j] = arr[i][j+1];
			}
		}
		delete[] arr[i];
		arr[i] = tmp;
	}
}
