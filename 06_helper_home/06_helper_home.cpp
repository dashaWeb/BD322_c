#include <iostream>
using namespace std;


bool isPerfectNumber(int number) {
    int sum = 0;
    for (size_t i = 1; i < number; i++)
    {
        if (number % i == 0) {
            sum += i;
        }
    }
    /*if (sum == number) {
        return true;
    }
    else {
        return false;
    }*/
    //return sum == number ? true : false;
    return sum == number;
}

void searchPerfectNumber(int start, int end) {
    if (start > end) {
        int tmp = start;
        start = end;
        end = tmp;
    }
    for (size_t i = start; i <= end; i++)
    {
        if (isPerfectNumber(i)){
            cout << i << endl;
        }
    }
}

int main()
{
    /*Завдання 3
     Число називається досконалим, якщо сума всіх його дільників дорівнює йому самому.Напишіть функцію пошуку таких чисел у введеному інтервалі.*/
    searchPerfectNumber(1, 9000);
}

