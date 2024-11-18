#include <stdio.h>

#define B3 0
#define B2 1
#define B1 0
#define B0 0

// SOLUTION: User an intermediate macro
#define CONCAT_HELPER(b3, b2, b1, b0) 0b##b3##b2##b1##b0
#define CONC(b3, b2, b1, b0) CONCAT_HELPER(b3, b2, b1, b0)

#define x z
#define z x

int x = 5;
int z = 6;

int main(void)
{
	printf("%d\n", CONC(B3,B2,B1,B0));
	int y;
	y = x;
	printf("%d\n", y);
	return 1;
}
