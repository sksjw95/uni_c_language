/*#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
void main() {
	char str[10];
	FILE* fp = fopen("sample6.txt", "wt");
	fputs("1234567890", fp);
	fclose(fp);
	fp = fopen("sample6.txt", "rt");
	fseek(fp, 7, SEEK_SET);
	fgets(str, 4, fp);
	printf("7��°���� 3���� ��� : %s \n", str);
	fseek(fp, -2, SEEK_CUR);
	fgets(str, 3, fp);
	printf("���� ��ġ���� ���� 2���ں��� 2���� ��� : %s \n", str);
	fseek(fp, -9, SEEK_END);
	fgets(str, 6, fp);
	printf("�� �ڿ��� 9��° �պ��� 5���� ��� : %s \n", str);
	fclose(fp);
}*/
