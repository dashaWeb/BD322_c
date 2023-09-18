#include <iostream>
using namespace std;
void showMessage();
int sum(int one, int two = 0);
int sub(int a, int b);
double sub(double a, double b) {
    return a - b;
}
char sub(char a, char b) {
    return a - b;
}
auto sub(int a, double b, char c) {
    return a - b - c;
}
int main()
{
    cout << "Print 1 " << endl;
    showMessage();

    //int res = sum();
    cout << "Sum :: " << sum(5) << endl;
    cout << "Sub :: " << sub(5.9, 3.1) << endl; // 2
    cout << "Sub :: " << sub(5.3, 3,'c') << endl; // 2
    cout << "Sub :: " << sub(5, 3) << endl; // 2
}

void showMessage() {
    cout << "Hello World" << endl;
}

int sum(int one, int two) {
    return one + two;
}

int sub(int a, int b)
{
    return a - b;
}
