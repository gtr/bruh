
/* Write a function escape(s,t) that converts characters like newline and tab 
 * into visible escape sequences like \n and \t as it copies the string t to s.
 * Use a switch. Write a function for the other direction as well, converting 
 * escape sequences into the real characters.
 */


#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int escape(char s[], char *t) {
    int i, j;

    for (i = 0, j = 0; t[i] != '\0'; i++, j++) {
        switch (t[i]) {
            case '\t':
                s[j] = '\\';
                s[++j] = 't';
                break;
            case '\n':
                s[j] = '\\';
                s[++j] = 'n';
                break;
            default:
                s[j] = t[i];
        }
        s[j] = '\0';
        printf("%s\n", s);
        return 0;
    }
}

int main(void) {
    char s[MAX], t[MAX];
    int c, i;

    c = getchar();
    for (i = 0; c != EOF; i < MAX; i++) {
        t[i] = c;
    }
    t[i] = '\0';
    escape(s, t);
}

