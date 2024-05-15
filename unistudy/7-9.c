/*#include<stdio.h>
#pragma warning(disable:4996)
union money {
	int kor;
	float us;
};

void main() {
	float er;
	union money m;
	printf("교환하고 싶은 원화의 금액을 입력하시오 : ");
	scanf("%d", &m.kor);
	printf("환율입력 : ");
	scanf("%f", & er);
	m.us = m.kor / er;
	printf("교환한 달러는 %8.3f달러입니다. \n", m.us);
}*/