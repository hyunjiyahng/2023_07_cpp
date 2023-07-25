#include <cstdio>
#define SWAP(X, Y, TYPE) TYPE temp = v1; v1 = v2; v2 = temp;

int main() {

	int v1 = 100;
	int v2 = 200;

	printf("SWAP Àü\n");
	printf("v1 : %d\n", v1); // 100
	printf("v2 : %d\n", v2); // 200


	SWAP(v1, v2, int);

	printf("SWAP ÈÄ\n");
	printf("v1 : %d\n", v1); // 200
	printf("v2 : %d\n", v2); // 100


	return 0;
}