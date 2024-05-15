/*#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable :4996)
void main() {
	FILE* fp;
	char c;
	fp = fopen("C:/Users/tjwld/OneDrive/바탕 화면/방통대/1학년1학기/C/sample1.txt", "r");
	if (fp = NULL) {
		printf("파일을 개방할 수 없습니다.!");
		exit(1);
	}
	while ((c = getc(fp)) != EOF) {
		putchar(c);
	}
	fclose(fp);
}*/