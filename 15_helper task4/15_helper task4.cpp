#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void pushBack(string*& arr, size_t& size, string value) {
	string* tmp = new string[size + 1];
	for (size_t i = 0; i < size; i++)
	{
		tmp[i] = arr[i];
	}
	tmp[size] = value;
	size++;
	if (arr != nullptr)delete[]arr;
	arr = tmp;
}
string* readFileLine(string fname, size_t& size) {
	string* tmp = nullptr;
	ifstream file(fname);
	if (!file.is_open()) {
		cout << "Error" << endl;
		return nullptr;
	}
	string line;
	while (getline(file, line))
	{
		pushBack(tmp, size, line);
	}
	file.close();
	return tmp;
}

bool isSpace(string line) {
	for (size_t i = 0; i < line.size(); i++)
	{
		if (isspace(line[i])) {
			return true;
		}
	}
	return false;
}
int lastFindLineNoSpace(string* lines, int size) {
	for (int i = size - 1; i >= 0; i--)
	{
		if (!isSpace(lines[i])) {
			return i;
		}
	}
	return -1;
}
void writeFileTask4(string fname, string* lines, size_t size) {
	string line = "------------";
	int index = lastFindLineNoSpace(lines, size);
	if (index == -1 || index == size-1) {
		ofstream file(fname, ios_base::app);
		if (!file.is_open()) {
			cout << "Error " << endl;
			return;
		}
		file << line << endl;
		file.close();
		return;

	}
	ofstream file(fname);
	if (!file.is_open()) {
		cout << "Error " << endl;
		return;
	}
	for (size_t i = 0; i < size; i++)
	{
		file << lines[i] << "\n";
		if (i == index) {
			file << line << endl;
		}
	}
	file.close();
}
int main()
{
	size_t size = 0;
	string fname = "task4.txt";
	string* lines = readFileLine(fname, size);
	for (size_t i = 0; i < size; i++)
	{
		cout << boolalpha << isSpace(lines[i]) << "\t" << lines[i] << endl;
	}
	cout << "Last line no space :: " << lastFindLineNoSpace(lines, size) << endl;
	writeFileTask4(fname, lines, size);
}
