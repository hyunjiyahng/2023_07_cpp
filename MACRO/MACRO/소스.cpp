#include <cstdio>
// X, Y 값 바꾸기
#define SWAP(X, Y, T) T = X; X = Y; Y = T  // 한 줄에 입력. 두 줄에 입력하려면 끝에 \를 넣어야 인식 가능.

int main() {
	int v1 = 100;
	int v2 = 200;
	int temp;

	printf("==value SWAP 전==\n");
	printf("v1 : %d\n", v1);
	printf("v2 : %d\n", v2);

	SWAP(v1, v2, temp);

	printf("==value SWAP 후==\n");
	printf("v1 : %d\n", v1);
	printf("v2 : %d\n", v2);

	/* <MACRO의 장단점>
	* 장점: 함수 절차가 없어서 빠르다.
	* 단점: * 실행파일의 크기가 커진다.
	* 가독성이 떨어져 개발자가 읽기 힘들다.
	* 브레이크 포인트가 적용되지 않는다.(어디서 멈출지 본인도 모름)

	* -> 꼭 필요한 경우에만 쓰자.
	*/

	return 0;
}