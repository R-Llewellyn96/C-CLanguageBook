#include <stdio.h>

int tempConv() {

    float fahr;

    printf("Celsius | Fahrenheit\n");

    for (fahr = 0; fahr <= 300; fahr = fahr + 20) {
        printf("%3.0f\t\t %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
    }

    return 0;
}
