#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(0, "");
    float m, z1, z2, sqM;

    printf("������� m: ");
    scanf("%f", &m);

    if (m < 0) {
        printf("��������� ����� ������ ����.\n");
        return -1;
    }

    // ���������� ����� �� m
    sqM = sqrt(m);
    // z2
    z2 = -1 * sqM;

    if (sqM == 0) {
        printf("�������� ����� ����� ����, ������ ������.\n");
        printf("z2: %f\n", z2);
        return -1;
    }

    // ����������� z1
    float z1Denom = (3 * sqM) - (2 / sqM);

    if (z1Denom == 0) {
        printf("����������� ����� ����, ������ ������.\n");
        printf("z2: %f\n", z2);
        return -1;
    }

    // ��������� z1 �� �����
    float z1NumPreSqrt = ((3 * m + 2) * (3 * m + 2)) - (24 * m);

    if (z1NumPreSqrt < 0) {
        printf("z2: %f\n", z2);
        printf("��������� ��������� ��� ������ ������ ����.\n");
        return -1;
    }

    z1 = sqrt(z1NumPreSqrt) / z1Denom;

    printf("z1: %f\nz2: %f\n", z1, z2);
    return 0;
}