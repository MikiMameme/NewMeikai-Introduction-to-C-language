/* �g���𐮐��l�œǂݍ���ŕW���̏d��\������ */

#include <stdio.h>

int main(void)
{
	double sum, height, weight;
	
	puts("�g������͂��Ă��������B");
	printf("�g�� :");	scanf("%lf", &height);
	
	sum = height - 100;
	weight = sum * 0.9;
	
	printf("�W���̏d��%.1f�ł��B\n", weight);
	
	return 0;
}