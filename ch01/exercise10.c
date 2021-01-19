#include <stdio.h>

int main(void) {
    int curr;

    curr = getchar();
    while (curr != EOF) {
        if (curr == '\t')
            printf("\\t\n");
        else if (curr == '\b')
            printf("\\b\n");
        else if (curr == '\\')
            printf("\\\\\n");
        else
            putchar(curr);
    }
}