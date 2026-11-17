#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "RUS");
    int n, i;
    int arr[100];

    printf("Введите n: ");
    scanf("%d", &n);

    printf("Введите %d чисел:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int first = -1, second = -1;

    for (i = 0; i < n; i++) {
        if (arr[i] < 0) {
            if (first == -1) {
                first = i;
            } else {
                second = i;
                break;
            }
        }
    }

    if (first != -1 && second != -1 && second - first > 1) {
        int sum = 0, count = 0;
        for (i = first + 1; i < second; i++) {
            sum += arr[i];
            count++;
        }
        printf("Среднее: %.2f\n", (float)sum / count);
    } else {
        printf("Нельзя вычислить\n");
    }

    return 0;
}
