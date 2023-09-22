#include <iostream>
using namespace std;

//int sum(int a, int b) {
//	return a + b;
//}
//double sum(double a, double b) {
//	return a + b;
//}
//int sum(int a, int b, int c) {
//	return a + b + c;
//}
//int sum(int a, int b, int c, int d) {
//	return a + b + c + d;
//}

//template<typename T>
//T sum(T a, T b) {
//	return a + b;
//}
//
//template<typename T, typename T2>
//auto sum(T a, T2 b, T c) {
//	return a + b + c;
//}
//
//template<typename T>
//T sum(T a, T b, T c, T d) {
//	return a + b + c + d;
//}

template <typename T>
void fillArray(T arr[], size_t length, T value)
{
	for (size_t i = 0; i < length; i++)
	{
		arr[i] = value;
	}
}

template <typename T>
void fillArray(T arr[], size_t length, int min, int max)
{
	for (size_t i = 0; i < length; i++)
	{
		arr[i] = min + rand() % (max - min + 1);
	}
}

template <typename T>
void printArray(T arr[], size_t length, string text ="")
{
	cout << text;
	for (size_t i = 0; i < length; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

template <typename T, size_t col>
void fillArray(T arr[][col], size_t row, size_t col2, int min, int max)
{
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col2; j++)
		{
			arr[i][j] = min + rand() % (max - min + 1);
		}
	}
}
template <typename T, size_t ROW,size_t COL>
void fillArray(T arr[][ROW][COL], size_t bloxks, size_t row, size_t col, int min, int max)
{
	for (size_t q = 0; q < bloxks; q++)
	{
		for (size_t i = 0; i < row; i++)
		{
			for (size_t j = 0; j < col; j++)
			{
				arr[q][i][j] = min + rand() % (max - min + 1);
			}
		}
	}
	
}
template <typename T, size_t col>
void printArray(T arr[][col], size_t row, size_t col2)
{
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col2; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}
template <typename T, size_t ROW, size_t COL>
void printArray(T arr[][ROW][COL], size_t bloxks, size_t row, size_t col)
{
	for (size_t q = 0; q < bloxks; q++)
	{
		for (size_t i = 0; i < row; i++)
		{
			for (size_t j = 0; j < col; j++)
			{
				cout << arr[q][i][j] << "\t";
			}
			cout << endl;
		}
		cout << "=============" << endl;
	}

}

template <typename T>
T maxArray(T arr[], size_t length)
{
	T max = arr[0];
	for (size_t i = 0; i < length; i++)
	{
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	return max;
}
template <typename T, size_t col>
T maxArray(T arr[][col], size_t row, size_t col2)
{
	T max = arr[0][0];
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col2; j++)
		{
			if (max < arr[i][j]) {
				max = arr[i][j];
			}
		}
		
	}
	return max;
}
template <typename T, size_t ROW, size_t COL>
T maxArray(T arr[][ROW][COL], size_t bloxks, size_t row, size_t col)
{
	T max = arr[0][0][0];
	for (size_t q = 0; q < bloxks; q++)
	{
		for (size_t i = 0; i < row; i++)
		{
			for (size_t j = 0; j < col; j++)
			{
				if (max < arr[q][i][j]) {
					max = arr[q][i][j];
				}
			}
		}
	}
	return max;

}

template <typename T>
T maxNumber(T a, T b) {
	return a < b ? b : a;
}

template <typename T>
T maxNumber(T a, T b, T c) {
	if (a > b and a > c) {
		return a;
	}
	else if (b > a and b > c) {
		return b;
	}
	else {
		return c;
	}
}
int main()
{
	/*string word_1 = "Hello";
	string word_2 = "World";
	cout << "Sum 2 :: " << sum(2.9, 3.9) << endl;
	cout << "Sum 3 :: " << sum(2.9, 3, 5.9) << endl;
	cout << "Sum 4 :: " << sum(2, 3, 1, 8) << endl;
	cout << "Sum   :: " << sum('a', ' ') << endl;
	cout << "Sum   :: " << sum(word_1,word_2) << endl;*/
	const int SIZE = 10;
	int arr_int[SIZE]{};
	double arr_double[SIZE]{};
	bool arr_bool[SIZE]{};
	int arr[5][10]{};
	const int x = 3, y = 4, z = 5;
	int mas[x][y][z];/*{
		{
			{5,8,6,9,5},
			{5,8,6,9,5},
			{5,8,6,9,5},
			{5,8,6,9,5},
		},
		{
			{5,8,6,9,5},
			{5,8,6,9,5},
			{5,8,6,9,5},
			{5,8,6,9,5},
		},
		{
			{5,8,6,9,5},
			{5,8,6,9,5},
			{5,8,6,9,5},
			{5,8,6,9,5},
		}

	
	};*/

	fillArray(arr_int, SIZE,11, 25);
	printArray(arr_int, SIZE, "Print array int    :: ");
	cout << "`2D Array :: \n";
	fillArray(arr, 5, 10, 20, 50);
	printArray(arr, 5, 10);
	cout << "`3D Array :: \n";
	fillArray(mas, x, y, z, 10, 50);
	printArray(mas, x, y, z);

	cout << "1D :: " << maxArray(arr_int, SIZE) << endl;
	cout << "2D :: " << maxArray(arr, 5,10) << endl;
	cout << "3D :: " << maxArray(mas, x,y,z) << endl;

	fillArray(arr_double, SIZE,2.5);
	fillArray(arr_bool, SIZE,true);

	/*printArray(arr_double, SIZE, "Print array double :: ");
	cout << boolalpha;
	printArray(arr_bool, SIZE, "Print array bool   :: ");*/


}

