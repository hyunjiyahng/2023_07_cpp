#include <cstdio>
// X, Y �� �ٲٱ�
#define SWAP(X, Y, T) T = X; X = Y; Y = T  // �� �ٿ� �Է�. �� �ٿ� �Է��Ϸ��� ���� \�� �־�� �ν� ����.

int main() {
	int v1 = 100;
	int v2 = 200;
	int temp;

	printf("==value SWAP ��==\n");
	printf("v1 : %d\n", v1);
	printf("v2 : %d\n", v2);

	SWAP(v1, v2, temp);

	printf("==value SWAP ��==\n");
	printf("v1 : %d\n", v1);
	printf("v2 : %d\n", v2);

	/* <MACRO�� �����>
	* ����: �Լ� ������ ��� ������.
	* ����: * ���������� ũ�Ⱑ Ŀ����.
	* �������� ������ �����ڰ� �б� �����.
	* �극��ũ ����Ʈ�� ������� �ʴ´�.(��� ������ ���ε� ��)

	* -> �� �ʿ��� ��쿡�� ����.
	*/

	return 0;
}