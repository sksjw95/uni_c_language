/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#pragma warning (disable:4996)
void main() {
	char name[64];
	FILE* fp;
	if ((fp = fopen("C:/Users/tjwld/OneDrive/바탕 화면/방통대/1학년1학기/C/sample2.dat","W")) == NULL) {
		puts("파일을 개방할 수 없습니다.");
		exit(1);
	}
	printf("이름을 입력하시오. 입력을 끝내려면 'end'를 입력하시오.\n");
	fgets(name,sizeof(name),stdin);
	while (strcmp(name, "end")) {
		strcat(name, "\n");

		fputs(name, fp);
		fgets(name, sizeof(name), stdin);
	}
	fclose(fp);
}*/
