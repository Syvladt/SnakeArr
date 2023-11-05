// С костылём, но в данном случае работает

#include <iostream>

int main()
{
    setlocale(LC_ALL, "RU_ru");
    std::cout << "Заполнение матрицы змейкой!\n";
    int matrix[5][5], delta;
    for (int i = 0; i < 5; i++)
    {
        delta = 4;
        for (int j = 0; j < 5; j++)
        {
            matrix[i][j] = 5 * i + j + 1 + delta * (i % 2);
            delta -= 2;
        }
    }
    std::cout << "\nПолучилась вот такая матрица:\n";
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
            std::cout << matrix[i][j] << "\t";
        std::cout << "\n";
    }

}