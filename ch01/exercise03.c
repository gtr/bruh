#include <stdio.h>

/* print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300 */
/* this one has a heading above the table and the #define keyword*/

int main(void) {
    float fahr, celsius;
    float lower, upper, step;

    lower = 1;
    upper = 300;
    step = 20;

    printf("%4s\t%7s", "fahr", "celsius\n");

    fahr = lower;
    while (fahr <= upper) {
        celsius = 5.0 * (fahr-32.0) / 9.0;
        printf("%4.0f\t%7.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
