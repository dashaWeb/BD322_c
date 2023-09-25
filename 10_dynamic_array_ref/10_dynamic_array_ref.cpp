#include <iostream>
#include <ctime>
using namespace std;

void fill(int arr[], size_t length, int min = 1, int max = 10) {
	for (size_t i = 0; i < length; i++)
	{
		arr[i] = min + rand() % (max - min + 1);
	}
}
void print(int arr[], size_t length, string text = "") {
	cout << text;
	for (size_t i = 0; i < length; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

int* createArray(size_t size) {
	return new int[size];
}

void pushBack(int* &arr, size_t& size, int value) {
	int* tmp = new int[size + 1];
	for (size_t i = 0; i < size; i++)
	{
		tmp[i] = arr[i];
	}
	tmp[size] = value;
	size++;
	delete[]arr;
	arr = tmp;
}
//Написати функції для роботи з динамічним цілочисельним одновимірним масивом :
//Функція створення динамічного масиву вказаного розміру та занулення його елементів
//Заповнення масиву випадковими числами з вказаного користувачем діапазону.
//Виводу масиву
//Доповнення масиву одним елементом в цінець.
//Доповнення масиву одним елементом на початок.
//Вставка нового елемента за вказаним індексом
//Видалення елемента за позицією(індексом)
//Видалення елемента в кінці
//Видалення елемента на початку

//void Swap(int* a, int* b) {
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}


void Swap(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}
int main()
{

	/*int a = 5, b = 7;
	cout << "A = " << a << "\t B = " << b << endl;
	Swap(a, b);
	cout << "A = " << a << "\t B = " << b << endl;*/
	size_t size = 5;
	/*cout << "Enter size array :: ";
	cin >> size;*/
	srand(time(0));
	int* arr = createArray(size);
	fill(arr, size);
	print(arr, size, "Print Array     :: ");
	pushBack(arr, size, 33);
	print(arr, size, "Print Push Back :: ");
	// new
	// delete
	/*int counter = 0;
	while (true)
	{
		cout << ++counter << endl;
		int* ptr = new int[1000000];
		delete[]ptr;
	}*/
}

