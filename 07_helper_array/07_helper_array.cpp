#include <iostream>
using namespace std;

template <typename T>
void enterArray(T arr[], size_t length) {
	cout << "Enter " << endl;
	for (size_t i = 0; i < length; i++)
	{
		cout << i + 1 << " :: ";
		cin >> arr[i];
	}
}
template <typename T>
void printArray(T arr[], size_t length, string text = "") {
	cout << text;
	for (size_t i = 0; i < length; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
template <typename T>
int findFirst(T arr[], size_t length, T key) {
	for (size_t i = 0; i < length; i++)
	{
		if (arr[i] == key) {
			return i;
		}
	}
	return -1;
}
char toLower(char s) {
	/*if (s >= 'A' && s <= 'Z') {
		return s + 32;
	}
	return s;*/
	return (s >= 'A' && s <= 'Z') ? s + 32 : s;
}
int findFirst(char arr[], size_t length, char key) {
	for (size_t i = 0; i < length; i++)
	{
		if (toLower(arr[i]) == toLower(key)) {
			return i;
		}
	}
	return -1;
}
template <typename T>
int findLast(T arr[], size_t length, T key) {
	for (int i = length - 1; i >= 0; i--)
	{
		if (arr[i] == key) {
			return i;
		}
	}
	return -1;
}
int main()
{
	const int size = 10;
	int arr_int[size]{ 2,5,8,9,6,5,7,8,5,6 };
	double arr_double[size]{ 5.3,2.4,9.8,3.14,0.5,78.2,6.3,2.1,4.5,7.9};
	char arr_char[size]{ 'H','b','n','1','!','/','h','R','o','p'};
	string arr_string[size]{ "red","pink","yellow","purple","Blue","black","green","magenta","tomato","cyan"};
	printArray(arr_int, size);
	cout << "Find int    :: " << findFirst(arr_int, size, 6) << endl;
	printArray(arr_double, size);
	cout << "Find double :: " << findFirst(arr_double, size, 3.14) << endl;
	printArray(arr_char, size);
	cout << "Find char   :: " << findFirst(arr_char, size, 'h') << endl;
	printArray(arr_string, size);
	string key = "blue";
	cout << "Find string :: " << findFirst(arr_string, size, key) << endl;
}