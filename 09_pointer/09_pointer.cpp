#include <iostream>
using namespace std;


void Swap(int* first, int* last) {
	int tmp = *first;
	*first = *last;
	*last = tmp;
}
void task5() {
	srand(time(0));



	const int arraySize = 5;
	int numbers[arraySize];



	for (size_t i = 0; i < arraySize; i++) {
		numbers[i] = rand() % 10;
	}



	cout << "Array :: " << endl;



	for (size_t i = 0; i < arraySize; i++) {
		cout << numbers[i] << "\t";
	}
	cout << endl;



	int* ptr = numbers;
	int sum = 0;



	for (int i = 0; i < arraySize; i++) {
		sum += *ptr;
		ptr++;
	}



	cout << "Sum of the elements: " << sum << endl;



}
int main()
{
	//int a = 5, b = 7;
	//// type * name;
	//int *ptr_a = &a, *ptr_b = &b;

	//cout << "Address A :: " << ptr_a << " \t Value A :: " << *ptr_a << endl;
	//cout << "Address B :: " << ptr_b << " \t Value B :: " << *ptr_b << endl;

	//cout << "A :: " << a << "\t B :: " << b << endl;
	//Swap(ptr_a, &b);
	//cout << "A :: " << a << "\t B :: " << b << endl;
	/*const int size = 10;
	int arr[size]{ 1,5,8,9,6,8,4,3,0,7 };
	int* ptr = arr;
	for (size_t i = 0; i < size; i++)
	{
		cout << *(ptr++) << "\t";
	}
	cout << endl;

	for (size_t i = 0; i < size; i++)
	{
		cout << *(--ptr) << "\t";
	}
	cout << endl;

	for (size_t i = 0; i < size / 2; i++)
	{
		int tmp = *(arr + i);
		*(arr + i) = *(arr + size - 1 - i);
		*(arr + size - 1 - i) = tmp;
	}
	for (size_t i = 0; i < size; i++)
	{
		cout << *(arr + i) << "\t";
	}
	cout << endl;*/
	task5();
}
