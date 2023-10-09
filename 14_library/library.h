#pragma once
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::to_string;
using std::swap;

//(назва, автор, видавництво, жанр)
const int SIZE = 50;
struct Book
{
	char name[SIZE];
	char author[SIZE];
	char publisher[SIZE];
	char genre[SIZE];
};

//Друк усіх книг;

void printBooks(Book* library, int size);
void printBook(Book book, string text = "");
void editBook(Book& book);
char* toLowerCase(char* line);
int searchByAthor(Book* library, int size, char* author);
void sortByName(Book* library, int size);
