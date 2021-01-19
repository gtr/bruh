#include <stdio.h>

/* print Celsius-Fahrenheit table for celsius = 0, 20, ..., 300 */

int main(void) {
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("%7s\t%4s", "celsius", "fahr\n");

    celsius = lower;
    while (celsius <= upper) {
        fahr = 9.0 * (celsius+32.0) / 5.0;
        printf("%4.0f\t%4.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
