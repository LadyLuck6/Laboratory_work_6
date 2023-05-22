#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 5  // Розмір квадратної матриці

int main() {
    int matrix[SIZE][SIZE];//двохвимірний масив
    int i, j;
    int max_element = INT_MIN;  // Початкове значення максимального елемента
    // Ініціалізуємо генератор псевдовипадкових чисел
    srand(time(0));
    // Заповнюємо матрицю псевдовипадковими числами
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            matrix[i][j] = rand() % 201 - 100;  // Генеруємо число від -100 до 100
        }
    }
    // Виводимо матрицю на екран
    printf("Матриця:\n");
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    // Знаходимо максимальний елемент серед елементів, які знаходяться вище головної діагоналі
    for (i = 0; i < SIZE; i++) {
        for (j = i + 1; j < SIZE; j++) {
            if (matrix[i][j] > max_element) {
                max_element = matrix[i][j];
            }
        }
    }
    // Виводимо результат
    printf("Максимальний елемент серед елементів, які знаходяться вище головної діагоналі: %d\n", max_element);

    return 0;
}