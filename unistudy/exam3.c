/*#include<stdio.h> //  �������� stdio.h ��� ������ ���� �����ų ���� ���� ó���⿡ �����մϴ�.
void main() { // main() �Լ� : ���α׷��� ������, ��ȯ�ϴ� �ᱣ���� �����Ƿ� �ڷ����� void
	printf("char �ڷ��� ũ�� : %d byte\n", sizeof(char)); // sizeof() �Լ��� ������ Ÿ���̳� ������ ũ�⸦ ����Ʈ ������ ��ȯ�ϴ� �Լ��Դϴ�. charŸ���� ũ�Ⱑ %d ���缭 ����� �˴ϴ�.
	printf("signed char �ڷ��� ũ�� : %d byte\n", sizeof(signed char)); // signed charŸ���� ũ�Ⱑ %d ���缭 ����� �˴ϴ�.
	printf("unsigned char �ڷ��� ũ�� : %d byte\n", sizeof(unsigned char)); // unsigned charŸ���� ũ�Ⱑ %d ���缭 ����� �˴ϴ�.
	printf("short �ڷ��� ũ�� : %d byte\n", sizeof(short)); // short Ÿ���� ũ�Ⱑ %d ���缭 ����� �˴ϴ�.
	printf("short int �ڷ��� ũ�� : %d byte\n", sizeof(short int)); // short int Ÿ���� ũ�Ⱑ %d ���缭 ����� �˴ϴ�.
	printf("signed short �ڷ��� ũ�� : %d byte\n", sizeof(signed short)); // signed short Ÿ���� ũ�Ⱑ %d ���缭 ����� �˴ϴ�.
	printf("signed short int �ڷ��� ũ�� : %d byte\n", sizeof(signed short int)); // signed short int Ÿ���� ũ�Ⱑ %d ���缭 ����� �˴ϴ�.
	printf("unsigned short �ڷ��� ũ�� : %d byte\n", sizeof(unsigned short)); // unsigned short Ÿ���� ũ�Ⱑ %d ���缭 ����� �˴ϴ�.
	printf("unsigned short int �ڷ��� ũ�� : %d byte\n", sizeof(unsigned short int)); // unsigned short int Ÿ���� ũ�Ⱑ %d ���缭 ����� �˴ϴ�.
	printf("int �ڷ��� ũ�� : %d byte\n", sizeof(int)); // int Ÿ���� ũ�Ⱑ %d ���缭 ����� �˴ϴ�.
	printf("signed int �ڷ��� ũ�� : %d byte\n", sizeof(signed int)); // signed int Ÿ���� ũ�Ⱑ %d ���缭 ����� �˴ϴ�.
	printf("unsigned �ڷ��� ũ�� : %d byte\n", sizeof(unsigned)); // unsigned Ÿ���� ũ�Ⱑ %d ���缭 ����� �˴ϴ�.
	printf("unsigned int �ڷ��� ũ�� : %d byte\n", sizeof(unsigned int)); // unsigned int Ÿ���� ũ�Ⱑ %d ���缭 ����� �˴ϴ�.
	printf("long �ڷ��� ũ�� : %d byte\n", sizeof(long)); // long Ÿ���� ũ�Ⱑ %d ���缭 ����� �˴ϴ�.
	printf("long int �ڷ��� ũ�� : %d byte\n", sizeof(long int)); // long int Ÿ���� ũ�Ⱑ %d ���缭 ����� �˴ϴ�.
	printf("signed long �ڷ��� ũ�� : %d byte\n", sizeof(signed long)); // signed long Ÿ���� ũ�Ⱑ %d ���缭 ����� �˴ϴ�.
	printf("signed long int �ڷ��� ũ�� : %d byte\n", sizeof(signed long int)); // signed long int Ÿ���� ũ�Ⱑ %d ���缭 ����� �˴ϴ�.
	printf("unsigned long �ڷ��� ũ�� : %d byte\n", sizeof(unsigned long)); // unsigned long Ÿ���� ũ�Ⱑ %d ���缭 ����� �˴ϴ�.
	printf("unsigned long int �ڷ��� ũ�� : %d byte\n", sizeof(unsigned long int)); // unsigned long int Ÿ���� ũ�Ⱑ %d ���缭 ����� �˴ϴ�.
	printf("long long �ڷ��� ũ�� : %d byte\n", sizeof(long long)); // long long Ÿ���� ũ�Ⱑ %d ���缭 ����� �˴ϴ�.
	printf("long long int �ڷ��� ũ�� : %d byte\n", sizeof(long long int)); // long long int Ÿ���� ũ�Ⱑ %d ���缭 ����� �˴ϴ�.
	printf("signed long long �ڷ��� ũ�� : %d byte\n", sizeof(signed long long)); // signed long long Ÿ���� ũ�Ⱑ %d ���缭 ����� �˴ϴ�.
	printf("signed long long int �ڷ��� ũ�� : %d byte\n", sizeof(signed long long int)); // signed long long int Ÿ���� ũ�Ⱑ %d ���缭 ����� �˴ϴ�.
	printf("unsigned long long �ڷ��� ũ�� : %d byte\n", sizeof(unsigned long long)); // unsigned long long Ÿ���� ũ�Ⱑ %d ���缭 ����� �˴ϴ�.
	printf("unsigned long long int �ڷ��� ũ�� : %d byte\n", sizeof(unsigned long long int)); // unsigned long long int Ÿ���� ũ�Ⱑ %d ���缭 ����� �˴ϴ�.
	printf("float �ڷ��� ũ�� : %d byte\n", sizeof(float)); // float Ÿ���� ũ�Ⱑ %d ���缭 ����� �˴ϴ�.
	printf("double �ڷ��� ũ�� : %d byte\n", sizeof(double)); // double Ÿ���� ũ�Ⱑ %d ���缭 ����� �˴ϴ�.
	printf("long double �ڷ��� ũ�� : %d byte\n", sizeof(long double)); // long double Ÿ���� ũ�Ⱑ %d ���缭 ����� �˴ϴ�.
}*/

