#include <stdio.h>

int main() {
    int n, a, b, c, d, tong;


    printf("Nhap mot so nguyen co 4 chu so: ");
    scanf("%d", &n);


    a = n / 1000;
    b = (n / 100) % 10;
    c = (n / 10) % 10;
    d = n % 10;
    
    tong = a + b + c + d;

    printf("Tong cac chu so la: %d\n", tong);

    return 0;
}

