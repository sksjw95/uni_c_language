/*#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
void clear_keyboard(void);
void main() {
	FILE* fp;
	float data[5];
	int count;
	char filename[20];
	puts("\n 5개의 실수를 입력하세요: ");
	for (count = 0; count < 5; count++) {
		scanf("%f", &data[count]);
	}
	clear_keyboard();
	puts("\n파일 이름을 입력하세요: ");
	gets(filename);
	if ((fp = fopen(filename, "w")) == NULL) {
		fprintf(stderr, "Error opening file %s.", filename);
		exit(1);
	}
	for (count = 0; count < 5; count++) {
		fprintf(fp, "\n data[%d] = %8.3f, count, data[count]");
		fprintf(stdout, "\n data[%d] = %8.3f, count, data[count]");
	}
	fclose(fp);
}

void clear_keyboard(void) {
	char junk[80];
	gets(junk);


}*/