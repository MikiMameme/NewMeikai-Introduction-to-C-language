/* 6�l�̊w����2�Ȗڂ̃e�X�g�̓_����ǂݍ���ŏW�v */

#include<stdio.h>

#define NINZU 6

int main(void)
{
	int i, j;
	int tensu[NINZU][2];
	int student[NINZU] = {0};
	int subject[2] = {0};
	
	printf("%d�l�̓_������͂���B\n", NINZU);
	
	for(i = 0; i < NINZU; i++) {
		printf("%2d�ԥ������ :", i + 1);
		scanf("%d", &tensu[i][0]);
		printf("     ���w :", i + 1);
		scanf("%d", &tensu[i][1]);
		
		student[i] = tensu[i][0] + tensu[i][1];
		subject[0] += tensu[i][0];
		subject[1] += tensu[i][1];
	}
	
	printf("----------------------------\n");
	printf("�ԍ�  ����  ���w  ���v  ���� \n");
	printf("----------------------------\n");
	for(i = 0; i < NINZU; i++)
		printf("%3d%6d%6d%6d%7.1f\n", i + 1, tensu[i][0], tensu[i][1],
									student[i], (double)student[i] / 2);
	printf("----------------------------\n");
	printf("���v%5d%6d%6d\n", subject[0], subject[1], subject[0] + subject[1]);
	printf("���� %6.1f%6.1f%6.1f\n",(double)subject[0] / NINZU,
									(double)subject[1] / NINZU,
									(double)(subject[0] + subject[1]) / NINZU);
	printf("----------------------------\n");
	
	return 0;
}