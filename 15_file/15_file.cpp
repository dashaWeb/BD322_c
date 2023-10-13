#include <iostream>
#include <string>
#include <fstream> // read, write in file
using namespace std;


// ofstream --> write
// ifstream --> read
// fstream  --> write,read

int main()
{
    string line = "Lorem ipsum dolor sit amet, consectetur adipiscing elit";
    string fname = "my.txt";
    /*ofstream file;
    file.open(fname, ios_base::app);
    if (!file.is_open()) {
        cout << "File not found" << endl;
    }
    else {
        getline(cin, line);
        file << line << endl;
    }
    file.close();*/

    ifstream file(fname);
    if (!file.is_open()) {
        cout << "Error!! File not found" << endl;
    }
    else {
        //file >> line;
        int counter = 0;
        char str[100];
        char s;
        /*while (!file.eof())
        {
            getline(file, line);
            cout << ++ counter << ". " << line << endl;
        }*/
        /*while (getline(file, line))
        {
            cout << ++counter << ". " << line << endl;
        }*/
        //while (file.get(s)) // зчитує по символьно
        //{
        //    //cout << s << endl;  
        //}
        //while (file >> str)// зчитує по слову
        //{
        //    cout << str << endl;  
        //}
        while (file.getline(str,100))// зчитує по рядку
        {
            cout << str << endl;
        }

    }
    file.close();
    remove("my.txt");
}
