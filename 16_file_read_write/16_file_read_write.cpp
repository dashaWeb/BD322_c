#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Date
{
	int day, month, year;
};
struct Student
{
	char name[50]{};
	char lastname[50]{};
	int marks[5]{};
	double rating;
	Date date;
};

int main()
{

	Student ivan = { "Ivan","Bondar",{10,10,12,11,9}, 10.9, {24,03,2000} };
	Student oleg = { "Oleg","Bondar",{10,10,12,11,9}, 10.9, {24,03,2000} };
	Student* tmp = new Student[2]{ ivan,oleg };
	//Запис структури у файл
	fstream file("data.txt", ios_base::out); // створили файловий потік і повязали з файлом і додали режим на запис
	if (!file.is_open()) {
		cout << "Error" << endl;
	}
	else
	{
		//file << ivan;
		for (size_t i = 0; i < 2; i++)
		{
			file.write((char*)&tmp[i], sizeof(Student));
		}
		// метод для запису структури у файл (перший параметр це перетворення структури у масив символів, другий розмір масиву
	}

	/*Student res;
	fstream file("data.txt", ios_base::in);
	if (!file.is_open()) {
		cout << "Error" << endl;
	}
	else
	{
		file.read((char*)&res, sizeof(Student));
	}
	cout << "Name     :: " << res.name << endl;
	cout << "LastName :: " << res.lastname << endl;
	cout << "Marks    :: " << res.marks[0] << ", " << res.marks[1] << ", " << res.marks[2] << ", " << res.marks[3] << ", " << res.marks[4] << endl;
	cout << "Rating   :: " << res.rating << endl;
	cout << "Date     :: " << res.date.day << "." << res.date.month << "." << res.date.year  << endl;*/



	//string fname = "file.txt";
	//fstream file;
	//file.open(fname, ios_base::out | ios_base::in | ios_base::app);
	//if (!file.is_open()) {
	//    cout << "Error" << endl;
	//}
	//else
	//{
	//    cout << "Start write :: " << file.tellg() << endl;
	//    file << "Hello World !!!" << endl;
	//    cout << "End write :: " << file.tellg() << endl;
	//    file.seekg(0);
	//    //file.ignore();
	//    cout <<"Start read :: " << file.tellg() << endl;
	//    string line;
	//    getline(file, line);
	//    cout << "Read :: " << line << endl;
	//    cout << "End Read :: " <<file.tellg() << endl;
	//}
}
