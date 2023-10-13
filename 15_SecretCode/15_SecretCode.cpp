#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string readFile(string fname) {
	string tmp = "", result = "";
	ifstream file(fname);
	if (!file.is_open()) {
		cout << "Error" << endl;
		return "";
	}
	while (getline(file, tmp))
	{
		result += tmp;
		result += "\n";
	}
	return result;
}
void writeFile(string fname, string value) {
	ofstream file(fname);
	if (!file.is_open()) {
		cout << "Error" << endl;
		return;
	}
	file << value;
}

string encode(string value, int key) {

	string result = "";
	for (size_t i = 0; i < value.size(); i++)
	{
		if (!isalpha(value[i])) {
			result += value[i];
			continue;
		}
		if (value[i] + key > 'z') {
			int n = value[i] + key - 'z' ;
			result += 'a' + n - 1;
			continue;
		}
		if (value[i] + key > 'Z' && value[i] < 'a') {
			int n =value[i] + key - 'Z';
			result += 'A' + n - 1;
			continue;
		}
		result += value[i] + key;

	}
	return result;
}


int main()
{
	string fname = "text.txt";
	string text = readFile(fname);
	cout << text << endl;
	cout << encode(text, 3) << endl;
	writeFile("encode.txt", encode(text, 3));
}
