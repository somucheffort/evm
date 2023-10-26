#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(0, "");
    float m, z1, z2, sqM;

    printf("Введите m: ");
    scanf("%f", &m);

    if (m < 0) {
        printf("Введенное число меньше нуля.\n");
        return -1;
    }

    // сохранение корня из m
    sqM = sqrt(m);
    // z2
    z2 = -1 * sqM;

    if (sqM == 0) {
        printf("Значение корня равно нулю, делить нельзя.\n");
        printf("z2: %f\n", z2);
        return -1;
    }

    // знаменатель z1
    float z1Denom = (3 * sqM) - (2 / sqM);

    if (z1Denom == 0) {
        printf("Знаменатель равен нулю, делить нельзя.\n");
        printf("z2: %f\n", z2);
        return -1;
    }

    // числитель z1 до корня
    float z1NumPreSqrt = ((3 * m + 2) * (3 * m + 2)) - (24 * m);

    if (z1NumPreSqrt < 0) {
        printf("z2: %f\n", z2);
        printf("Выражение числителя под корнем меньше нуля.\n");
        return -1;
    }

    z1 = sqrt(z1NumPreSqrt) / z1Denom;

    printf("z1: %f\nz2: %f\n", z1, z2);
    return 0;
}