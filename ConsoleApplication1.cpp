
#include <iostream>
#include<Windows.h>

using namespace std;

int main()
{
        SetConsoleCP(1251);
        setlocale(0, "Russian");
         const int rows = 3, columns = 5;
         double numbers[rows][columns];


        for (int i = 0; i < rows; i++) {
            cout << "Введите числа для " << i + 1 << "строчки:" << endl;
            for (int j = 0; j < columns; j++) {
                std::cin >> numbers[i][j];
            }
        }
        for (int i = 0; i < rows; i++) {
            double sum = 0;
            for (int j = 0; j < columns; j++) {
                sum += numbers[i][j];
            }
            double sredsum = sum / columns;
            cout << "Среднее арифметическое  " << i + 1 << "-й строки: " << sredsum << std::endl;
        }

        return 0;
}
