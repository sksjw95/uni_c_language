#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#pragma warning(disable:4996)
void main() {
	char* str;
	str = (char*)malloc(sizeof(char) * 10);
	strcpy(str, "123456789");
	printf("ũ�� ���� �� : str = %s \n", str);
	str = (char*)realloc(str, 50);
	strcat(str, "abcdefghijklmnopqrstuvwxyz");
	printf("ũ�� ���� �� : str = %s \n", str);
	free(str);
}