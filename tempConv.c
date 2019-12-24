#include <stdio.h>

//the define keyword allows for us to declare magic numbers,
// or replace any instance of repeating values, without creating variables

#define LOWER 0   /* lower limit */
#define UPPER 300 /* upper limit */
#define STEP  20  /* step size   */

//Temperature Converter program, prints a list of fahrenheit to celsius conversions
int tempConv() {

    //declare  fahrenheit variable
    float fahr;

    //print header for our list
    printf("Celsius | Fahrenheit\n");

    //for loop, loops through temperatures in steps, carries out conversion from fahrenheit to celsius
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
        printf("%3.0f\t\t %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
    }

    //return 0, to int function tempConv
    return 0;
}
