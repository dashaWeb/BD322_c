#include <iostream>
using namespace std;
struct Date
{
    int day;
    int month;
    int year;
};
struct Student
{
    string name;
    string surname;
    Date birthday;
};


void printStudent(Student* stud) {
    cout << "Name     :: \t" << stud->name << endl;
    cout << "LastName :: \t" << stud->surname << endl;
    cout << "BirthDay :: \t" << stud->birthday.day << "." << stud->birthday.month << "." << stud->birthday.year << endl;
}
void editStudent(Student* stud) {
    cout << "Enter name :: "; cin >> stud->name;
    cout << "Enter lastname :: "; cin >> stud->surname;
    cout << "Enter birthdate:: "; cin >> stud->birthday.day >> stud->birthday.month >> stud->birthday.year;

}
void printStudent(Student stud) {
    cout << "Name     :: \t" << stud.name << endl;
    cout << "LastName :: \t" << stud.surname << endl;
    cout << "BirthDay :: \t" << stud.birthday.day << "." << stud.birthday.month << "." << stud.birthday.year << endl;
}
int main()
{
    int size = 3;
    Student* student_1 = new Student[size]{
        {"Masha","Holovatenko",{02,05,2002}},
        {"Oleg","Ivanov",{10,3,2001}},
        {"Pasha","Demchuk",{18,8,2001}},
    };
    //editStudent(student_1);
    printStudent(student_1);
    printStudent(student_1[1]);
    printStudent(student_1+2);
    //cout << student_1->name << endl;
}

