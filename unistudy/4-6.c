/*#include<stdio.h>
#pragma warning(disable:4996)
void main() {
	int year, month, day;
	printf("���� �˻��ϰ� ���� ������ ���� �Է�: ");
	scanf("%d %d", &year, &month);

	if (month >= 1 && month <= 12) {
		if (month == 2) {
			if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
				day = 29;
				printf("%d�� %d���� %d�ϱ����̰� �����Դϴ�.\n", year, month, day);
			}
			else {
				day = 28;
				printf("%d�� %d���� %d�ϱ��� �Դϴ�.\n", year, month, day);
			}
		}
		else {
			if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
				day = 31;
				printf("%d�� %d���� %d�ϱ��� �Դϴ�.\n", year, month, day);
			}
			else {
				day = 30;
				printf("%d�� %d���� %d�ϱ��� �Դϴ�.\n", year, month, day);
			}
		}
	}
	else {
		printf("�߸��� ���� �Է� \n");

	}
}*/
