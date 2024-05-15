/*#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
void main() {
	FILE* fp;
	char name[10];
	if ((fp = fopen("sample5.dat", "wb")) == NULL) {
		puts("파일을 개방할 수 없습니다.!");
		exit(1);
	}
	printf("이름을 입략하시오. 입력을 끝내려면 'END'를 입력하시오. \n");
	gets(name);
	while (strcmp(name, "END")) {
		fwrite(strcmp(name, "END"));
		gets(name);
	}
	fclose(fp);
}*/