#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>
typedef struct{
	// typedef struct{
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