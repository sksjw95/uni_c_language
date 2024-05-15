/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main() {
	FILE* fp;
	char name[10];
	if ((fp = fopen("sample5.dat", "wb")) == NULL) {
		puts("파일을 개방할 수 없습니다.");
		exit(1);
	}
	get(name);
	while (strcmp(name, "END")) {
		fwrite(name, 10, 1, fp);
		gets(name);
	}
	fclose(fp);
}*/