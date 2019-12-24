#include <stdio.h>

#include "tempConv.c"

int main() {

    /*
     * runs temperature converter program, enter temperature and C or F
     * to convert your temperature to the opposite system
     */
    int convTemp = tempConv();

    printf("\nConverted Temperature: %d\n", convTemp);
    
    printf("\nFinished!\n");
    return 0;
}
