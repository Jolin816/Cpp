#include <iostream>
#include <math.h>

int main();

int main() {

    printf("%d\n", 1+2);        // %d means only print out the whole number
    printf("%.1f\n", 8.0/5.0);  // %.1f means round to the tenth decimal
    printf("%.2f\n", 8.0/5.0);  // %.1f means round to the hundredth decimal

    // int - float (firstly, integer turns into float, then float - float)
    printf("%.8f\n", 1+2*sqrt(3)/(5-0.1));

    return 0;
}