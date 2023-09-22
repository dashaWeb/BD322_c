#include <iostream>
using namespace std;

template<typename T>
void uniqValue(T arr[], size_t length, int min = 1, int max = 10) {

	for (size_t i = 0; i < length;)
	{
		int number = min + rand() % (max - min + 1);
		bool flag = true;
		for (size_t j = 0; j < i; j++)
		{
			if (arr[j] == number) {
				flag = false;
				break;
			}
		}
		if (flag) {
			arr[i] = number;
			i++;
		}
	}
}
template<typename T>
void print(T arr[], size_t length, string text = "") {
	cout << text;
	for (size_t i = 0; i < length; i++)
	{
		cout << arr[i] << "\t";
	}cout << endl;
}

template <typename T>
void quickSort(T arr[], int left, int right)
{
	int tmp_l = left;
	int tmp_r = right;
	T pivot = arr[left];
	while (left < right)
	{
		while (arr[right] > pivot && left < right) right--;
		if (right != left) {
			arr[left] = arr[right];
			left++;
		}
		while (arr[left] < pivot && left < right) left++;
		if (right != left) {
			arr[right] = arr[left];
			right--;
		}
	}
	arr[left] = pivot;
	int index = left;
	left = tmp_l;
	right = tmp_r;
	if (index > left) {
		quickSort(arr, left, index - 1);
	}
	if (index < right) {
		quickSort(arr, index + 1, right);
	}
}

template <typename T>
int linearSearch(T arr[], size_t length, T key) {
	for (size_t i = 0; i < length; i++)
	{
		if (arr[i] == key) {
			return i;
		}
	}
	return -1;
}

template <typename T>
int binarySearch(T arr[], int left, int right, T key) {
	if (left > right)
	{
		return -1;
	}
	int mid = (left + right) / 2;
	if (arr[mid] == key) return mid;

	if (key < arr[mid]) {
		binarySearch(arr, left, mid - 1, key);
	}
	else if (key > arr[mid]) {
		binarySearch(arr, mid + 1, right, key);
	}
}
void reverseArray(int arr[], int start, int end) {
	for (int i = start, j = end-1; i < j; i++, j--)
	{
		int tmp = arr[i];
		arr[i] = arr[j];
		arr[j] = tmp;
	}
}

void task(int arr[], int length) {
	double sum = 0;
	for (size_t i = 0; i < length; i++)
	{
		sum += arr[i];
	}
	bool res = sum / 2.0 > 0;

	if (res) {
		int end = length / 3 * 2;
		int start = 0;
		quickSort(arr, start, end-1);
		reverseArray(arr, end, length);
	}
	else {
		int end = length / 3;
		int start = 0;
		quickSort(arr, start, end - 1);
		reverseArray(arr, end, length);
	}
}
//Необхідно відсортувати перші дві третини масиву в порядку зростання, якщо середнє арифметичне всіх елементів більше нуля; в іншому разі — лише першу третину.Іншу частину масиву не сортувати, а розташувати у зворотному порядку.
int main()
{
	const int size = 10;
	int arr[size]{};
	uniqValue(arr, size, -10, 0);
	print(arr, size, "Before :: ");
	task(arr, size);
	//quickSort(arr, 0, size - 1);
	print(arr, size, "After  :: ");
	//cout << "Binary search value 7 :: index = " << binarySearch(arr, 0, size - 1, 7) << endl;
}

