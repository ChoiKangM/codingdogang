#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>
/*
struct Person{
	//struct 구조체이름{자료형 멤버이름};
	char name[20];
	int age;
	char address[100];
};
int main()
{	
	
	struct Person p1; //struct 구조체이름 변수이름
	//점으로 구조체 멤버에 접근하여 값 할당
	strcpy(p1.name,"홍길동");
	p1.age = 30;
	strcpy(p1.address,"서울시 용산구 한남동");
	printf("이름: %s\n",p1.name);
	printf("나이: %d\n",p1.age);
	printf("주소: %s\n",p1.address);
	return 0;
}
*/
struct Person{
	char name[20];
	int age;
	char address[100];
}person;
int main()
{
	strcpy(person.name,"홍길동");
	person.age = 30;
	strcpy(person.address,"서울시 용산구 한남동");
	
	printf("이름: %s\n",person.name);
	printf("나이: %d\n",person.age);
	printf("주소: %s\n",person.address);
	
	return 0;
}
