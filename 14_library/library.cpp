#include "library.h"

void printBooks(Book* library, int size)
{
	for (size_t i = 0; i < size; i++)
	{
		printBook(library[i], "Book " + to_string(i + 1));
	}
}

void printBook(Book book, string text)
{
	cout << "\n\n\t================== " << text << " ====================" << endl;
	cout << "\t\t Name      :: " << book.name << endl;
	cout << "\t\t Author    :: " << book.author << endl;
	cout << "\t\t Publisher :: " << book.publisher << endl;
	cout << "\t\t Genre     :: " << book.genre << endl;
}

void editBook(Book& book)
{
	cout << "\t\t Enter Name      :: "; cin.getline(book.name, SIZE);
	cout << "\t\t Enter Author    :: "; cin.getline(book.author, SIZE);
	cout << "\t\t Enter Publisher :: "; cin.getline(book.publisher, SIZE);
	cout << "\t\t Enter Genre     :: "; cin.getline(book.genre, SIZE);
}

char* toLowerCase(char* line)
{
	{
		char* newLine = new char[strlen(line) + 1];
		for (size_t i = 0; i < strlen(line); i++)
		{
			newLine[i] = tolower(line[i]);
		}
		newLine[strlen(line)] = '\0';
		return newLine;
	}
}

int searchByAthor(Book* library, int size, char* author)
{
	for (size_t i = 0; i < size; i++)
	{
		if (strcmp(toLowerCase(library[i].author), toLowerCase(author)) == 0) {
			return i;
		}
	}

	return -1;
}

void sortByName(Book* library, int size)
{
	for (size_t i = 0; i < size-1; i++)
	{
		for (size_t j = 0; j < size - 1 - i; j++)
		{
			if (strcmp(toLowerCase(library[j].name), toLowerCase(library[j + 1].name)) > 0) {
				swap(library[j], library[j + 1]);
			}
		}
	}
}
