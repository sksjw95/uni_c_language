/*#include<stdio.h>
void score_average(int gr[][2][3], int size, int row, int column);
void main() {
	int score[4][2][3] = { { {10,20,30},{10,10,10}  }, { {0,40,50},
		{10,10,10} }, { {30,30,30},{50,50,50} },
	{ {20,20,20},{0,0,0} } };
	score_average(score, 4, 2, 3);
}

void score_average(int gr[][2][3], int size, int row, int column) {
	int student_sum = 0, subject_sum = 0;
	int subject_average = 0;
	int i, j, k;
	for (k = 0; k < size; k++) {
		student_sum = 0;
		for (i = 0; i < row; i++) {
			subject_sum = 0;
			for (j = 0; j < column; j++) {
				subject_sum += gr[k][i][j];
				
			}
			subject_average = subject_sum / column;
			printf("student%d average = %d \n", i + 1, subject_average);
			student_sum += subject_average;
			
		}
		printf("class%d average = %d \n\n", k + 1, student_sum / row);
	}
}*/