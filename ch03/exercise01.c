#include <stdio.h>

/* binsearch: find x in v[0] <= v[1] <= .. v[n-1] */
int binsearch(int x, int v[], int n) {

    int lo, mi, hi;

    lo = 0;
    hi = n - 1;
    while (lo <= hi) {
        mi = lo + hi / 2;
        if (x < v[mi])
            hi = mi + 1;
        else if (x > v[mi])
            lo = mi + 1;
        else
            return mi;
    }
    return -1;
}
