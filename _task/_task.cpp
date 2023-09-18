#include <iostream>
using namespace std;



int main() {







    char symbol;
    int choice;
    int height;



    cout << "Enter the symbol for drawing :: ";
    cin >> symbol;



    cout << "Choose ::" << endl;
    cout << "1" << endl;
    cout << "2" << endl;
    cout << "3" << endl;
    cout << "4" << endl;
    cout << "5" << endl;
    cout << "Your choice :: ";
    cin >> choice;



    switch (choice) {
    case 1:
        cout << "Enter the height :: ";
        cin >> height;





        for (int i = 0; i < height; i++) {
            for (int j = 0; j < i; j++) {
                cout << " ";
            }
            for (int j = 0; j < height - i; j++) {
                cout << symbol;
            }
            cout << endl;
        }
        break;



    case 2:
        cout << "Enter the height :: ";
        cin >> height;



        for (int i = 0; i < height; i++) {
            for (int j = 0; j <= i; j++) {
                cout << symbol;
            }
            cout << endl;
        }
        break;



    case 3:



        cout << "Enter the height :: ";
        cin >> height;



        for (int i = 0; i < height; i++) {
            for (int j = 0; j < i; j++) {
                cout << " ";
            }
            for (int j = 0; j < 2 * (height - i) - 1; j++) {
                cout << symbol;
            }
            cout << endl;
        }
        break;





    case 4:



        cout << "Enter the height :: ";
        cin >> height;



        for (int i = 0; i < height; i++) {
            for (int j = 0; j < height - i - 1; j++) {
                cout << " ";
            }
            for (int j = 0; j < 2 * i + 1; j++) {
                cout << symbol;
            }
            cout << endl;
        }
        break;





    case 5:



        cout << "Enter the height :: ";
        cin >> height;



        for (int i = 0; i < height; i++) {
            for (int j = 0; j < i; j++) {
                cout << " ";
            }
            for (int j = 0; j < 2 * (height - i) - 1; j++) {
                cout << symbol;
            }
            cout << endl;
        }



        for (int i = 0; i < height; i++) {
            for (int j = 0; j < height - i - 1; j++) {
                cout << " ";
            }
            for (int j = 0; j < 2 * i + 1; j++) {
                cout << symbol;
            }
            cout << endl;
        }
        break;







    default:
        cout << "Error" << endl;
        break;
    }



    return 0;





}