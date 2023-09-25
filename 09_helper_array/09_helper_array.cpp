#include <iostream>
using namespace std;


template<typename T, size_t COL>
void print(T arr[][COL], size_t row, size_t col, string text = "") {
	cout << text << endl;
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			cout << arr[i][j] << "\t";
		}cout << endl;
	}
}
template<size_t COL>
void fillArraySpiral(int arr[][COL], size_t row, size_t col) {
	int counter = 1;
	int q = col - 1;
	for (size_t i = 0; i < row/2; i++)
	{
		for (size_t j = i; j < q; j++)
		{
			arr[i][j] = counter++;
		}
		for (size_t j = i; j < q; j++)
		{
			arr[j][col - 1 - i] = counter++;
		}
		for (size_t j = i; j < q; j++)
		{
			arr[row - 1 - i][col - 1 - j] = counter++;
		}
		for (size_t j = i; j < q; j++)
		{
			arr[row - 1 - j][i] = counter++;
		}
		q--;
	}
}
int main()
{
	const int size = 6;
	int arr[size][size]{};
	fillArraySpiral(arr, size, size);
	print(arr, size, size);


    /*
		[0][0], [0][1], [0][2], -right
		[0][3], [1][3], [2][3], - down
		[3][3], [3][2], [3][1], - left
		[3][0], [2][0], [1][0], - up


		[1][1], - right
		[1][2], - down
		[2][2], - left
		[2][1], - up
	*/
}

