/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#pragma warning (disable:4996)
void main() {
	char name[64];
	FILE* fp;
	if ((fp = fopen("C:/Users/tjwld/OneDrive/���� ȭ��/�����/1�г�1�б�/C/sample2.dat","W")) == NULL) {
		puts("������ ������ �� �����ϴ�.");
		exit(1);
	}
	printf("�̸��� �Է��Ͻÿ�. �Է��� �������� 'end'�� �Է��Ͻÿ�.\n");
	fgets(name,sizeof(name),stdin);
	while (strcmp(name, "end")) {
		strcat(name, "\n");

		fputs(name, fp);
		fgets(name, sizeof(name), stdin);
	}
	fclose(fp);
}*/
