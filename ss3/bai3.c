#include <stdio.h>
#include <math.h>

int main() {
    float r;       
    float chuVi, dienTich;


    printf("Nhap ban kinh hinh tron: ");
    scanf("%f", &r);


    chuVi = 2 * M_PI * r;
    dienTich = M_PI * r * r;

 
    printf("Chu vi = %.2f\n", chuVi);
    printf("Dien tich = %.2f\n", dienTich);

    return 0;
}

