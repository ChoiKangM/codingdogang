#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>
typedef struct _Person{
	// typedef struct _구조체이름{
	// 	자료형 멤버이름;
	// }구조체별칭;
	char name[20];
	int age;
	char address[100];
}Person;
int main()
{
	Person person;
	strcpy(person.name,"홍길동");
	person.age = 30;
	strcpy(person.address,"서울시 용산구 한남동");
	
	printf("이름: %s\n",person.name);
	printf("나이: %d\n",person.age);
	printf("주소: %s\n",person.address);
	return 0;
}

// typedef는 자료형의 별칭을 만드는 기능입니다.
// 따라서 구조체뿐만 아니라 모든 자료형의 별칭을 만들 수 있습니다.

// 	typedef 자료형  별칭
// 	typedef 자료형* 별칭
	
// 	typedef int  MYINT;		//int를 별칭 MYINT로 정의
// 	typedef int* PMYINT;	//int 포인터를 별칭 PMYINT로 정의

// 	MYINT  num;				//MYINT로 변수 선언
// 	PMYINT numPtr;			//PMYINT로 포인터 변수 선언

// 	numPtr = &num;			//포인터에 변수와 주소 저장
// 							//사용 방법은 일반 변수, 포인터와 같음
// 	PMYINT * numPtr2;		//이중포인터 선언
// 	int* *numPtr2;			//PMYINT * 와 같은 의미, 이중 포인터


// struct 태그{
// 	자료형 멤버이름;
// };
// typedef struct 태그{
// 	자료형 멤버이름;
// }타입이름;
// C언어의 여러가지 관습중 구조체 태그와 타입이름을 구분하기 위해 관례상 태그 앞에 _,tag_,tag를 붙이고 있습니다.
// 코드에 따라 태그 뒤에 _t를 붙이기도 합니다.
// ex) _Person,tag_Person,tagPerson,Person_t
// 구조체 태그와 타입 이름은 사실상 같은 구조체를 지칭하므로 이름을 완전히 다르게 지을 필요가 없습니다.
// 요즘엔 구조체 태그와 타입 이름을 똑같이 만들기도 합니다.
// typedef struct Person{
// 	char name[20];
// 	int age;
// 	char address[100];
// }Person;
