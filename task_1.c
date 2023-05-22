#include <stdio.h>

void replaceLargestElementsWithZeros(int A[3][2], int n, int m) {
    // Знайти два найбільші елементи
    int max1 = A[0][0];
    int max2 = A[0][1];//початкові змінні

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)//перебір всіх елеиегтів у матриці
         {
            if (A[i][j] > max1) {
                max2 = max1;
                max1 = A[i][j];
            } else if (A[i][j] > max2 && A[i][j] < max1) {
                max2 = A[i][j];
            }
        }
    }

    // Замінити два найбільші елементи нулями
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)// перебір елементів
         {
            if (A[i][j] == max1 || A[i][j] == max2)//перевіряє,чи поточний елемент  дорівнює одному з двох найбільших елементів
             {
                A[i][j] = 0;
            }
        }
    }
}
int main() {
    int n = 3;
    int m = 2;
    int A[3][2];

    // Введення значення елементів масиву з клавіатури
    printf("Введіть елементи матриці A:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    //функція для заміни двох найбільших елементів нулями
    replaceLargestElementsWithZeros(A, n, m);
    // Виведення матрицю A після заміни
    printf("Матриця A після заміни двох найбільших елементів нулями:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}
