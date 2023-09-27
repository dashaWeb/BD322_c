#include <iostream>
#include <ctime>
using namespace std;

//Дано два динамічні масиви : А[n] и B[m].Утворити третій масив мінімального можливого розміру, у якому зібрати :
//-Елементи обох масивів;
//-Спільні елементи обох масивів;
//-Елементи масиву A, які не зустрічаються у B;
//-Елементи масиву В, які не зустрічаються у А;
//-Елементи масивів A і B, які не є спільними для них(тобто  об’єднання результатів двох попередніх результатів).
//
//Вимоги до виконання завдання : визначити відповідні функції(commonElems(), allElems() та ін.).Для розв’язку задачі створити логічну функцію, яка повертатиме істину, якщо шуканий елемент у масиві знайдений.Використати необхідні функції для роботи з динамічним масивом.

void fill(int* arr, int length, int min = 1, int max = 10) {
	for (size_t i = 0; i < length; i++)
	{
		arr[i] = min + rand() % (max - min + 1);
	}
}
void print(int* arr, int length, string text = "") {
	cout << text;
	for (size_t i = 0; i < length; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
int* margeArray(int* arr1, int* arr2, int length1, int length2, int& size) {
	size = length1 + length2;
	int* tmp = new int[size];
	for (int i = 0; i < size; i++)
	{
		if (i < length1) {
			tmp[i] = arr1[i];
		}
		else {
			tmp[i] = arr2[i - length1];
		}
	}
	return tmp;
}
int numberRepeat(int* arrA, int* arrB, int size_1, int size_2) {
	int counter = 0;

	for (size_t i = 0; i < size_2; i++)
	{
		bool flag = true;
		for (size_t j = 0; j < i; j++)
		{
			if (arrB[i] == arrB[j]) {
				flag = false;
				break;
			}
		}
		if (!flag) continue;
		for (size_t j = 0; j < size_1; j++)
		{
			if (arrA[j] == arrB[i]) {
				counter++;
				break;
			}
		}
	}
	return counter;
}
int* margeElementRepeat(int* arr1, int* arr2, int length1, int length2, int& size) {
	size = numberRepeat(arr1,arr2,length1,length2);
	int* tmp = new int[size];
	int counter = 0;
	for (size_t i = 0; i < length2; i++)
	{
		bool flag = true;
		for (size_t j = 0; j < i; j++)
		{
			if (arr2[i] == arr2[j]) {
				flag = false;
				break;
			}
		}
		if (!flag) continue;
		for (size_t j = 0; j < length1; j++)
		{
			if (arr1[j] == arr2[i]) {
				tmp[counter++] = arr2[i];
				break;
			}
		}
	}
	return tmp;
}

bool isNoRepeat(int* arr, int size, int value) {
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] == value) {
			return false;
		}
	}
	return true;
}

int numberNoReapeat(int* arr1, int* arr2, int size_1, int size_2) {
	int counter = 0;
	for (size_t i = 0; i < size_1; i++)
	{
		if (!isNoRepeat(arr1, i, arr1[i])) continue;
		if (isNoRepeat(arr2, size_2, arr1[i])) {
			counter++;
		}
	}
	return counter;
}
int* NoReapeat(int* arr1, int* arr2, int size_1, int size_2, int& size) {
	size = numberNoReapeat(arr1, arr2, size_1, size_2);
	int* tmp = new int[size];
	int counter = 0;
	for (size_t i = 0; i < size_1; i++)
	{
		if (!isNoRepeat(arr1, i, arr1[i])) continue;
		if (isNoRepeat(arr2, size_2, arr1[i])) {
			tmp[counter++] = arr1[i];
		}
	}
	return tmp;
}
int main()
{
	srand(time(0));
	int sizeA = 10, sizeB = 7, * ptrA, * ptrB, * ptrC, sizeC, *ptrD, sizeD, *ptr_all, size;
	ptrA = new int[sizeA] {};
	ptrB = new int[sizeB] {};
	fill(ptrA, sizeA);
	fill(ptrB, sizeB);
	print(ptrA, sizeA, "Print array A :: ");
	print(ptrB, sizeB, "Print array B :: ");
	ptrC = margeArray(ptrA, ptrB, sizeA, sizeB, sizeC);
	print(ptrC, sizeC, "Print array C :: ");
	cout << numberRepeat(ptrA, ptrB, sizeA, sizeB) << endl;
	ptrD = margeElementRepeat(ptrA, ptrB, sizeA, sizeB, sizeD);
	print(ptrD, sizeD, "Print array D :: ");
	cout << numberNoReapeat(ptrA, ptrB, sizeA, sizeB) << endl;
	ptrD = NoReapeat(ptrA, ptrB, sizeA, sizeB, sizeD);
	print(ptrD, sizeD, "Print array D :: ");
	ptrC = NoReapeat(ptrB, ptrA, sizeB, sizeA, sizeC);
	print(ptrC, sizeC, "Print array D :: ");
	ptr_all = margeArray(ptrD, ptrC, sizeD, sizeC, size);
	print(ptr_all, size, "Print array All :: ");

}

