#include <stdio.h>
#include <limits.h>


int main(void) {
    printf("Char min: %i\n", CHAR_MIN);
    printf("Char max: %i\n", CHAR_MAX);
	printf("Signed Char min: %d\n", SCHAR_MIN);
	printf("Signed Char max: %d\n", SCHAR_MAX);
	printf("Unsigned Char max: %d\n", UCHAR_MAX);
	printf("Int min: %d\n", INT_MIN);
	printf("Int max: %d\n", INT_MAX);
	printf("Unsigned Int max: %u\n", UINT_MAX);
	printf("Short Int min: %d\n", SHRT_MIN);
	printf("Short Int max: %d\n", SHRT_MAX);
	printf("Unsigned short Int max: %d\n", USHRT_MAX);
	printf("Long Int min: %ld\n", LONG_MIN);
	printf("Long Int max: %ld\n", LONG_MAX);
	printf("Unsigned Long Int max: %lu\n", ULONG_MAX);
	printf("Range of Float min: %E\n", FLT_MIN);
	printf("Range of Float max: %E\n", FLT_MAX);
	printf("Range of double min: %E\n", DBL_MIN);
}   


