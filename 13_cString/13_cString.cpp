#include <iostream>
#include <string>
using namespace std;

int strLen(char* word) {
    int counter = 0;
    while (word[counter] != 0)
    {
        counter++;
    }
    return counter;
}

int main()
{
    //char word[] = { 'H','e','l','l','o','\0'};
    //char word[50] = "Apple";
    //char word2[] = "Plum";
    //cout << "Word 1 :: " <<  word << "\t Word 2 :: " << word2 << endl;
    //cout << strlen(word) << endl;
    //// Копіювання рядків (рузельтат запише в перший параметр)
    //strcpy_s(word, word2);
    //cout << "Word 1 :: " <<  word << "\t Word 2 :: " << word2 << endl;
    //strcpy_s(word, "Apple");
    //cout << "Word 1 :: " <<  word << "\t Word 2 :: " << word2 << endl;
    //strcpy_s(word, "Apples");
    //cout << "Word 1 :: " <<  word << "\t Word 2 :: " << word2 << endl;
    //strncpy_s(word, "Apples",3);
    //cout << "Word 1 :: " <<  word << "\t Word 2 :: " << word2 << endl;
    //// Конкатинація рядків (рузельтат запише в перший параметр)
    //strcat_s(word, word2);
    //cout << "Word 1 :: " <<  word << "\t Word 2 :: " << word2 << endl;
    //strncat_s(word, word2, 3);
    //cout << "Word 1 :: " <<  word << "\t Word 2 :: " << word2 << endl;
    ////cout << strLen(word) << endl;
    ////word = "Apple";
    //char a[] = "Abd";
    //char b[] = "Abc";
    //cout << a << " \t " << b << " \t " << strcmp(a, b) << endl; // 0, -1, 1
    //cout << a << " \t " << b << " \t " << strncmp(a, b,2) << endl; // 0, -1, 1

    /////////////////////////////////////////////////////////////
    //char line[] = "dfRts12 !jj";
    //// перевірка на букву
    //cout << "\n================= isalpha() =====================\n";
    //for (size_t i = 0; i < strlen(line); i++)
    //{
    //    cout << "\t " << line[i] << " :: " << isalpha(line[i]) << endl;
    //}
    //// перевірка на букву і цифру
    //cout << "\n================= isalnum() =====================\n";
    //for (size_t i = 0; i < strlen(line); i++)
    //{
    //    cout << "\t " << line[i] << " :: " << isalnum(line[i]) << endl;
    //}
    //// перевірка на  цифру
    //cout << "\n================= isdigit() =====================\n";
    //for (size_t i = 0; i < strlen(line); i++)
    //{
    //    cout << "\t " << line[i] << " :: " << isdigit(line[i]) << endl;
    //}
    //// перевірка на  пробіл
    //cout << "\n================= isspace() =====================\n";
    //for (size_t i = 0; i < strlen(line); i++)
    //{
    //    cout << "\t " << line[i] << " :: " << isspace(line[i]) << endl;
    //}
    //// перевірка на  знак пунктуації
    //cout << "\n================= ispunct() =====================\n";
    //for (size_t i = 0; i < strlen(line); i++)
    //{
    //    cout << "\t " << line[i] << " :: " << ispunct(line[i]) << endl;
    //}
    //// перевірка на  маленьку букву
    //cout << "\n================= islower() =====================\n";
    //for (size_t i = 0; i < strlen(line); i++)
    //{
    //    cout << "\t " << line[i] << " :: " << islower(line[i]) << endl;
    //}
    //// перевірка на  велику букву
    //cout << "\n================= isupper() =====================\n";
    //for (size_t i = 0; i < strlen(line); i++)
    //{
    //    cout << "\t " << line[i] << " :: " << isupper(line[i]) << endl;
    //}
    //// перетворення на  маленьку букву
    //cout << "\n================= tolower() =====================\n";
    //for (size_t i = 0; i < strlen(line); i++)
    //{
    //    cout << "\t " << line[i] << " :: " << (char)tolower(line[i]) << endl;
    //}
    //// перетворення на  велику букву
    //cout << "\n================= toupper() =====================\n";
    //for (size_t i = 0; i < strlen(line); i++)
    //{
    //    cout << "\t " << line[i] << " :: " << (char)toupper(line[i]) << endl;
    //}

    //char line[50];
    //cout << "Enter line :: ";
    ////cin >> line;
    //cin.getline(line, 50);
    //cout << line << endl;

    string text;
    cout << "Enter :: ";
    /*cin >> text;*/
    getline(cin, text);
    cout << text << endl;

}

