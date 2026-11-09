#define _CRT_SECURE_NO_WARNINGS
#define N 10
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "RUS");
    float A[N];
    float originalA[N];
    float temp;
    float sum = 0.0;

    printf("Введите %d вещественных чисел:\n", N);
    for (int i = 0; i < N; i++) {
        printf("a[%d] = ", i + 1);
        scanf("%f", &temp);
        A[i] = temp;
        originalA[i] = temp;
    }

    for (int i = 0; i < N; i++) {
        A[i] = A[i] * -1;
    }

    printf("\n   индекс | исходное значение | новое значение\n");
    printf("   -------------------------------------------\n");
    for (int i = 0; i < N; i++) {
        printf("   %d      |      %.2f         |      %.2f\n", i, originalA[i], A[i]);
    }

    for (int i = 0; i < N; i++) {
        sum += A[i];
    }
    float average = sum / N;

    printf("\nСреднее арифметическое элементов массива: %.2f\n", average);

    return 0;
}
