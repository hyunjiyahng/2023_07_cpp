#include <cstdio>
#include <cstdlib>

int main() {

	int arr[20];

	int* arr2 = (int*)malloc(sizeof(int) * 20);

	//free(arr2);

	int* arr3 = new int[20];

	//delete arr3;

	// ���� : ����� ����� ���̸� ������ �Է¹ް� �Է¹��� �� ��ŭ ���̸� �Է¹��� �� �������ּ���.
    /*
    int main(void) {
        int count_of_people;
        int* ages;

        while (1) {
            printf("����� ���ڸ� �Է����ּ���. :");
            scanf("%d", &count_of_people);

            if (count_of_people > 0) {
                break;
            }
            else {
                printf("1 �̻��� ���� �Է����ּ���.\n");
            }
        }

        ages = malloc(sizeof(int) * count_of_people);

        for (int i = 0; i < count_of_people; i++) {
            printf("%d��° ����� ���̸� �Է����ּ���. :", i + 1);
            scanf("%d", ages + i);
            // scanf("%d", &ages[i]); // �̷��� �ص� �Ȱ���.
        }

        for (int i = 0; i < count_of_people; i++) {
            //printf("%d��° ����� ���� : %d\n", i + 1, *(ages + i));
            printf("%d��° ����� ���� : %d\n", i + 1, ages[i]);
        }

        free(ages);

        return 0;
    }
    */

	return 0;
}