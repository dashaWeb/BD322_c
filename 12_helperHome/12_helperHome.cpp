#include <iostream>
//#include <string>
using namespace std;
//Створіть динамічний масив, що зберігає в першому рядку ім'я, а в другому — телефон. Організуйте пошук за ім'ям і номером телефону та можливість введення і зміни даних.
template<typename T>
void printContact(T** arr, const int& col, string text = "");
int findName(string** arr, int col, string key);
int findPhone(string** arr, int col, string key);
void replaceContact(string** arr, int index);
template<typename T>
void insertCol(T** arr, int row, int& col, int index);
template<typename T>
void removeCol(T** arr, int row, int& col, int index);

int main()
{
    int row = 2, col = 5;
    string** contact = new string * [2];
    contact[0] = new string[col]{"Pasha","Olya","Sasha","Denis","Masha"};
    contact[1] = new string[col]{"+38096-854-85-85","+38095-658-89-47","+38067-258-65-36","+38099-658-42-36","+38066-658-95-69"};
	printContact(contact, col, "Print Contact ::");
	string name;
	cout << "Enter name :: ";
	cin >> name;
	int index = findName(contact, col, name);
	cout << index << endl;
	//replaceContact(contact, index);
	insertCol(contact, row, col, index);
	printContact(contact, col, "Print Contact ::");
	removeCol(contact, row, col, 4);
	printContact(contact, col, "Print Contact ::");
	/*cout << "Enter phone :: ";
	cin >> name;
	cout << findPhone(contact, col, name) << endl;*/
}


template<typename T>
inline void printContact(T** arr, const int& col, string text)
{
	cout << text << endl;
		for (size_t j = 0; j < col; j++)
		{
			cout << "\t" << j+1 << ". " << arr[0][j] << " \t :: " << arr[1][j] << "\n";
		}
		cout << endl;
}

int findName(string** arr, int col, string key)
{
	for (size_t i = 0; i < col; i++)
	{
		if (arr[0][i] == key) { return i; }
	}
	return -1;
}

int findPhone(string** arr, int col, string key)
{
	for (size_t i = 0; i < col; i++)
	{
		if (arr[1][i] == key) { return i; }
	}
	return -1;
}

void replaceContact(string** arr, int index)
{
	cout << "Enter name :: ";
	cin >> arr[0][index];
	cout << "Enter phone :: ";
	cin >> arr[1][index];
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
	replaceContact(arr, index);
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
				tmp[j] = arr[i][j + 1];
			}
		}
		delete[] arr[i];
		arr[i] = tmp;
	}
}