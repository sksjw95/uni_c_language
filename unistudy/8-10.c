/*#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
void main() {
	FILE* fp;
	char name[10];
	if ((fp = fopen("sample5.dat", "wb")) == NULL) {
		puts("������ ������ �� �����ϴ�.!");
		exit(1);
	}
	printf("�̸��� �Է��Ͻÿ�. �Է��� �������� 'END'�� �Է��Ͻÿ�. \n");
	gets(name);
	while (strcmp(name, "END")) {
		fwrite(strcmp(name, "END"));
		gets(name);
	}
	fclose(fp);
}*/