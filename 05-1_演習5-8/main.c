/* �w���̓_����ǂݍ���ŕ��z��\�� */

#include<stdio.h>

#define NUMBER 80

int main(void)
{
	int i, j;
	int num;					/* ���ۂ̐l�� */
	int tensu[NUMBER];			/* �w���̓_�� */
	int bunpu[11] = {0};		/* �_���̕��z */
	
	
	printf("�l������͂��Ă������� :");
	do{
	scanf("%d", &num);
	if(num < 1 || num > NUMBER)
		printf("\a�`%d�œ��͂��Ă������� :", NUMBER);
	}while(num < 1 || num > NUMBER);
	
	printf("%d�l�̓_������͂��Ă��������B\n", num);
	for(i = 0; i < num; i++){
		printf("%2d�� :", i + 1);
		do{
			scanf("%d", &tensu[i]);
			if(tensu[i] < 0 || tensu[i] > 100)
				printf("\a�`100�œ��͂��Ă������� :");
		}while(tensu[i] < 0 || tensu[i] > 100);
		bunpu[tensu[i] / 10]++;
	}
	
	
	puts("\n---���z�O���t---");
	
	for(i = 0; i <= 9; i++){						/* 100�_���� */
		printf("%3d�`%3d :", i * 10, i * 10 + 9);
		for(j = 0; j < bunpu[i]; j++)
			putchar('*');
		putchar('\n');
	}
	printf("      100:");
	for(j = 0; j < bunpu[10]; j++)					/* 100�_ */
		putchar('*');
	putchar('\n');
	
	return 0;
}