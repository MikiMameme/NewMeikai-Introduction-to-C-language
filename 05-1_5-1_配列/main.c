/* 5�l�̊w���̓_����ǂݍ���ō��v�_�ƕ��ϓ_��\�� */

#include<stdio.h>

int main(void)
{
	int uchida;
	int satoh;
	int sanaka;
	int hiraki;
	int masaki;
	int sum = 0;
	
	printf("5�l�̓_������͂��Ă��������B :\n");
	printf(" 1�� :");	scanf("%d", &uchida);	sum += uchida;
	printf(" 2�� :");	scanf("%d", &satoh);	sum += satoh;
	printf(" 3�� :");	scanf("%d", &sanaka);	sum += sanaka;
	printf(" 4�� :");	scanf("%d", &hiraki);	sum += hiraki;
	printf(" 5�� :");	scanf("%d", &masaki);	sum += masaki;
	
	printf("���v�_ :%5d\n", sum);
	printf("���v�_ :%5.1f\n", (double)sum / 5);
	
	return 0;
}