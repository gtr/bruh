

/* Exercise 4-2. Extend atof to handle scientific notation of the form
 * 123.45e-6 where a floating-point number may be followed by e or E and
 * an optionally signed exponent.
*/

#include <stdio.h>
#include <ctype.h>

double aotf(char s[]);

/* atof: convert string s to double */
double aotf(char s[]) {
    double val, power;
    int i, sign;
    
    // skip whitespace
    for (i = 0; isspace(s[i]); i++)
        ;
    // determine sign
    sign = (s[i] == '-') ? -1: 1;
    if (s[i] == '-' || s[i] == '+') 
        i++;
    // parse number before '.'
    for (val = 0.0; isdigit(s[i]); i++) 
        val = 10.0 * val + (s[i] - '0');
    // skip '.' if it exists
    if (s[i] == '.')
        i++;
    // parse number after '.'
    for (power = 1.0; isdigit(s[i]); i++) {
        val = 10.0 * val + (s[i] - '0');
        power *= 10;
    }
    
    return (sign * val) / power;
}


int main() {
   double sum;

   char str[]  = "123.45";

   sum = aotf(str);
   printf("%g\n", sum);
   return 0;
}

