/* 4�s3��̍s���3�s4��̍s��̐ς����߂� */

#include<stdio.h>

int main(void)
{
	int i, j, k;
	int a[4][3];
	int b[3][4];
	int c[3][4];
	
	printf("4�s3���a��3�s4���b�̐ς�c�ɋ��߂܂��B\n");
	
	puts("a�̊e�v�f�̒l����͂��Ă��������B");
	for(i = 0; i < 4; i++) {
		for(j = 0; j < 3; j++) {
			printf("a[%d][%d] :", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	puts("b�̊e�v�f�̒l����͂��Ă��������B");
	for(i = 0; j < 4; j++) {
		for(j = 0; j < 4; j++) {
			printf("b[%d][%d] :", i, j);
			scanf("%d", &b[i][j]);
		}
	}
	for(i = 0; i < 4; i++) {
		for(j = 0; j < 4; j++) {
			c[i][j] = 0;
			for(k = 0; k < 3; k++)
				c[i][j] += a[i][k] * b[k][j];
		}
	}
	puts("c�̒l�͈ȉ��̒ʂ�ł��B");
	for(i = 0; i < 4; i++) {
		for(j = 0; j <4; j++)
			printf("c[%d][%d] = %d\n", i, j, c[i][j]);
	}
	return 0;
}