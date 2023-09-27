#include <iostream>
using namespace std;

//double sum(double a, double b) {
//    return a + b;
//}
//double sub(double a, double b) {
//    return a - b;
//}
//double mult(double a, double b) {
//    return a * b;
//}
//double divi(double a, double b) {
//    return a / b;
//}

bool isPlus(int a) {
    return a > 0;
}
bool isMinus(int a) {
    return a < 0;
}
bool isEven(int a) {
    return a % 2 == 0;
}
bool isOdd(int a) {
    return a % 2 != 0;
}
void printArray(int* arr, int size, bool(*ptr)(int)) {

    for (size_t i = 0; i < size; i++)
    {
        if (ptr(arr[i])) {
            cout << arr[i] << endl; 
        }
    }
}

int main()
{
    const int size = 10;
    int arr[size]{ 5,8,9,-6,-9,0,-10,2,1,5};
    cout << "\n===========Plus==========\n";
    printArray(arr, size, isPlus);
    cout << "\n===========Minus==========\n";
    printArray(arr, size, isMinus);
    cout << "\n===========Even==========\n";
    printArray(arr, size, isEven);
    cout << "\n===========Odd==========\n";
    printArray(arr, size, isOdd);
    /*double(*ptrf[])(double, double) { sum, sub, mult, divi };
    int choice;
    double a, b;
    cout << "Enter first number :: ";
    cin >> a;
    cout << " \t 1 - sum; \n\t 2 - sub; \n\t 3 - mult; \n\t 4 - div \n\t Enter :: ";
    cin >> choice;
    cout << "Enter second number :: ";
    cin >> b;
    cout << "Result :: " << ptrf[choice - 1](a, b) << endl;*/

    /*cout << ptrf(2, 5) << endl;
    ptrf = sub;
    cout << ptrf(2, 5) << endl;
    ptrf = mult;
    cout << ptrf(2, 5) << endl;
    ptrf = divi;
    cout << ptrf(2, 5) << endl;*/



    //const int number = 10;
    //int a = 33;
    //int b = 22;

    ///*int* const ptr = &a;
    //cout << *ptr << endl;
    //*ptr = 111;
    //cout << *ptr << endl;*/
    ////ptr = &b;

    ////const int* ptr = &number;
    //const int* ptr = &a;

    //cout << *ptr << endl;
    //a = 444;
    ////*ptr = 444;
    //ptr = &b;

}

