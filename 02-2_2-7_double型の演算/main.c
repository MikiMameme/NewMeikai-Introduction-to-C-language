/* 2�̎����l��ǂݍ���Řa�E���E�ρE���������ŕ\�� */

#include <stdio.h>

int main(void)
{
	double vx, vy;		/* ���������_�� */
	
	puts("2�̎�������͂��Ă��������B");
	printf("���� vx :");		scanf("%lf", &vx);
	printf("���� vy :");		scanf("%lf", &vy); /* �������́u�G���v */
	
	printf("vx + vy = %f\n", vx + vy);
	printf("vx - vy = %f\n", vx - vy);
	printf("vx * vy = %f\n", vx * vy);
	printf("vx / vy = %f\n", vx / vy);
	
	return 0;
}