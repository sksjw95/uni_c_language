/*#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
void main() {
	FILE* fp;
	char no[10], name[10];
	int mid, term, rep, att, i;
	fp = fopen("sample3.txt", "r");
	if (fp == NULL) {
		printf("������ ������ �� �����ϴ�.!");
		exit(1);
	}
	printf("�й�    �̸�   �߰� �⸻ ����Ʈ �⼮ \n");
	while (!feof(fp)) {
		fscanf(fp, "%10s %8s %4d %4d %4d %4d \n", no, name, &mid, &term, &rep, &att);
		printf("%10s %8s %4d %4d %4d %4d \n", no, name, mid, term, rep, att);
	}
	fclose(fp);
}*/