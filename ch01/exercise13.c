#include <stdio.h>
#include <stdlib.h>

/**
 * Write a program to print a histogram of the lengths of words in its input. 
 * It is easy to draw the histogram with the bars horizontal; a vertical 
 * orientation is more challenging.
 */

#define MAX_WORD 10

int main(void) {
    int curr, count, flag;
    int size_of_words[MAX_WORD];

    count = flag = 0;
    while (flag < MAX_WORD) {
        curr = getchar();
        if (curr == ' ' || curr == '\n' || curr == '\t' || (curr >= '0' && curr <= '9')) {
            if (count > 0) {
                size_of_words[flag] = count;
                flag++;

            }
        }
    }
}
 

