#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    /*Створіть двовимірний масив.Заповніть його випадковими числами та покажіть на екран.Користувач обирає кількість зсувів і положення(ліворуч, праворуч, вгору, вниз).Виконати зсув масиву і показати на екран отриманий результат.Зсув циклічний.*/
    const int row = 4, col = 5;
    int arr[row][col]{};
    srand((unsigned)time(0));
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            arr[i][j] = rand() % 10;
        }
    }


    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    // right
    for (size_t q = 0; q < 12 % col; q++)
    {
        for (size_t i = 0; i < row; i++)
        {
            int tmp = arr[i][col - 1];
            for (int j = col - 1; j > 0; j--)
            {
                arr[i][j] = arr[i][j - 1];
            }
            arr[i][0] = tmp;

        }
    }
    

    cout << "\n\n==================================\n";

    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    //up
    for (size_t i = 0; i < col; i++)
    {
        int tmp = arr[0][i];
        for (size_t j = 0; j < row - 1; j++)
        {
            arr[j][i] = arr[j + 1][i];
        }
        arr[row-1][i] = tmp;
    }


    cout << "\n\n==================================\n";

    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}
