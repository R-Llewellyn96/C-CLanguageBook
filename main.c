#include <stdio.h>

//includes all other functions, to be called in main
#include "tempConv.c"

//main function, in this instance used as a master to call other functions
int main() {

    //runs temperature converter program, fahrenheit to celsius table to 300
    tempConv();

    //Tell user program has finished run
    printf("\nFinished!\n");

    //return value to int function main
    return 0;
}
