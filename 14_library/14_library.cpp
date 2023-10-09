//Завдання 1. Розробіть програму «Бібліотека».Створіть
//структуру «Книга»(назва, автор, видавництво, жанр).
//
//Створіть масив з 10 книг.Реалізуйте для нього такі мож -
//ливості:
//
//■ Редагувати книгу;
//■ Друк усіх книг;
//■ Пошук книг за автором;
//■ Пошук книги за назвою;
//■ Сортування масиву за назвою книг;
//■ Сортування масиву за автором;
//■ Сортування масиву за видавництвом.
//■ Додати нову книгу
//■ Видалити книгу (за назвою)
#include <iostream>
#include "library.h"
using namespace std;
int main()
{
    int size = 10;
    Book* library = new Book[size]{
        {"Iron Flame","Rebecca Yarros","Entangled: Red Tower Books","Fantasy"},
        {"The Ever King","LJ Andrews","Victorious","Fantasy"},
        {"Harry Potter and the Philosopher's Stone","J.K. Rowling","Pottermore Publishing","Children's Fantasy"},
        {"Harry Potter and the Chamber of Secrets","J.K. Rowling","Pottermore Publishing","Children's Fantasy"},
        {"Harry Potter and the Prisoner of Azkaban","J.K. Rowling","Pottermore Publishing","Children's Fantasy"},
        {"Harry Potter and the Order of the Phoenix","J.K. Rowling","Pottermore Publishing","Children's Fantasy"},
        {"Harry Potter and the Half-Blood Prince","J.K. Rowling","Pottermore Publishing","Children's Fantasy"},
        {"Crown of Blood and Ruin","LJ Andrews","Victorious","Dark Fantasy Horror"},
        {"Battlefield Reclaimer","David North","High Peak Publishing","Fiction"},
        {"Swords of Empire","Robert Ryan","Trotting Fox Press","Fantasy"},
    };
    printBooks(library, size);
    //editBook(library[0]);
    //printBooks(library, size);
    /*char author[SIZE];
    cout << "Enter author :: ";
    cin.getline(author, SIZE);
    int index = searchByAthor(library, size, author);
    printBook(library[index]);*/
    sortByName(library, size);
    printBooks(library, size);

}
