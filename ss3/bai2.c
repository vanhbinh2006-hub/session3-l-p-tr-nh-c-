#include <stdio.h>

int main() {
    float celsius, fahrenheit;

   
    printf("Nhap nhiet do (do C): ");
    scanf("%f", &celsius);

  
    fahrenheit = celsius * 9 / 5 + 32;


    printf("Nhiet do tuong ung theo do Fahrenheit la: %.2f\n", fahrenheit);

    return 0;
}

