#/*include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
void main() {
	FILE* fp;
	char c;
	fp = fopen("C:/Users/tjwld/OneDrive/���� ȭ��/�����/1�г�1�б�/C/sample1.txt", "w");

	if (fp == NULL) {
		printf("������ ������ �� �����ϴ�.!");
		exit(1);
	}
	printf("���ڿ��� �Է��Ͻÿ�. �Է��� �������� Ctrl + z�� �����ÿ�.");
	while ((c = getchar()) != EOF) {
		putc(c, fp);
	}
	fclose(fp);*/