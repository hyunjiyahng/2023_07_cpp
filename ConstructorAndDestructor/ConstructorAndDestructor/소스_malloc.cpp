#include <cstdio>
#include <cstdlib>

int main() {

	int arr[20];

	int* arr2 = (int*)malloc(sizeof(int) * 20);

	//free(arr2);

	int* arr3 = new int[20];

	//delete arr3;

	// 문제 : 몇명의 사람의 나이를 받을지 입력받고 입력받은 수 만큼 나이를 입력받은 후 저장해주세요.
    /*
    int main(void) {
        int count_of_people;
        int* ages;

        while (1) {
            printf("사람의 숫자를 입력해주세요. :");
            scanf("%d", &count_of_people);

            if (count_of_people > 0) {
                break;
            }
            else {
                printf("1 이상의 값을 입력해주세요.\n");
            }
        }

        ages = malloc(sizeof(int) * count_of_people);

        for (int i = 0; i < count_of_people; i++) {
            printf("%d번째 사람의 나이를 입력해주세요. :", i + 1);
            scanf("%d", ages + i);
            // scanf("%d", &ages[i]); // 이렇게 해도 똑같다.
        }

        for (int i = 0; i < count_of_people; i++) {
            //printf("%d번째 사람의 나이 : %d\n", i + 1, *(ages + i));
            printf("%d번째 사람의 나이 : %d\n", i + 1, ages[i]);
        }

        free(ages);

        return 0;
    }
    */

	return 0;
}