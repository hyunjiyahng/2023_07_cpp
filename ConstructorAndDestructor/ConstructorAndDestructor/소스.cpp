#pragma warning (disable : 4996)

#include <cstdio>
#include <cstring>

class Student {
public:
	int student_no;
	//char name[100];
	char* name;
	int gender; // 0-남, 1-여

	Student(int StdNo, const char* n, int g) {  // 생성자 : 생성되자마자 파라미터를 이용해서 값을 초기화해 넣어준다.
		// const 키워드는 값을 상수로 선언할 수 있도록 도와주는 키워드. 즉, 값을 변경할 수 없도록 한다.
		// 한번 설정된 a는 read-only memeory에 올라가게 되고 변경할 수 없게 된다.
		// 다만 const char* n <-의 경우, 포인터는 수정 가능하다.
		printf("생성자 실행됨\n");
		this->student_no = StdNo;
		name = new char[strlen(n) + 1]; // strlen() : <cstring>이거를 써서 쓸 수 있는 것. 문자열 길이 구하는 함수.
		strcpy(name, n);
		// ▼ strcpy 함수란?
		// 헤더파일: <string.h>, C++에서는 <cstring>
		// 함수원형 : char* strcpy(char* dest, const char* origin);
		// 함수의 이름은 str(= string), cpy(= copy) 문자열을 복사하는 함수
		//		: origin에 있는 문자열 전체를 dest로 복사를 하는 함수
		gender = g;
	}

	~Student() { // 소멸자 : 클래스 인스턴스가 파괴될 때 -> 메모리에서 해제될 때
				 // 소멸자(Destructor)는 객체의 수명이 끝났을 때 객체를 제거하기 위한 목적으로 사용된다.
		printf("%s의 소멸자 호출됨\n", name);
		delete[] name;
	}

	void printStudentInfo() {
		printf("학번 : %d\n", student_no);
		printf("이름 : %s\n", name);
		printf("성별 : %s\n", gender == 0 ? "남자" : "여자");
	}
};

int main() {

	Student* ps = new Student(5678, "김민수", 0);

	/*ps->student_no = 5678;
	strcpy(ps->name, "김민수");
	ps->gender = 0;*/

	ps->printStudentInfo();

	delete ps;

	Student* ps2 = new Student(1234, "김민희", 1);

	ps2->printStudentInfo();

	delete ps2;

	Student ps3 = Student(78911, "김철수", 0);

	ps3.printStudentInfo();



	return 0;
}