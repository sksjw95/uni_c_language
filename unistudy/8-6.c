/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#pragma warning(disable:4996)
void main() {
	char name[64];
	FILE* fp;
	if ((fp = fopen("sample2.txt", "r")) == NULL) {
		puts("������ ������ �� �����ϴ�.");
		exit(1);
	}
	while ((fgets(name, 20, fp) != NULL)) {
		printf("%s", name);
	}
	fclose(fp);
}*/