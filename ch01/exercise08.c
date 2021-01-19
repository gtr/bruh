#include <stdio.h>

int main(void) {
    int nls, tabs, blanks;
    int curr;

    nls = tabs = blanks = 0;
    curr = getchar();

    while(curr != EOF) {
        if (curr == '\n')
            ++nls;
        if (curr == '\t')
            ++tabs;
        if (curr == ' ')
            ++blanks;
        curr = getchar();
    }
    printf("new lines: %d\n", nls);
    printf("tabs: %d\n", tabs);
    printf("blanks: %d\n", blanks);
}
