#include <stdio.h>
#include <math.h>

int main() {
    double a, b;

    printf("Nhap a: ");
    if (scanf("%lf", &a) != 1) {
        printf("Gia tri nhap khong hop le.\n");
        return 1;
    }
    printf("Nhap b: ");
    if (scanf("%lf", &b) != 1) {
        printf("Gia tri nhap khong hop le.\n");
        return 1;
    }

    double part1 = sqrt(b + 1.0);
    double term1 = sqrt(a + part1);
    double part2 = sqrt(a * a + b * b);
    double term2 = sqrt(b + part2);
    double S = term1 + term2;

    printf("S = %.2f\n", S);

    return 0;
}

