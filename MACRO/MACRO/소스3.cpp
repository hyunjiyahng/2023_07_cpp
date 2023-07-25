#include <cstdio>
#define SWAP(A, B, C, D, E, F) {F = (A+B+C+D+E)/5;}

int main() {
	int result = 0;
	int a[5] = { 1,2,3,4,5 };

	SWAP(a[0], a[1], a[2], a[3], a[4], result);

	printf("result : %d\n", result);

	return 0;
}