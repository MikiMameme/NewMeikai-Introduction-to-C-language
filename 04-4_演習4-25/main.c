/* �������s���~�b�h��`�� */

#include<stdio.h>

int main(void)
{
	int i, j;
	int h;
	
	puts("�������s���~�b�h�����܂��B");
	printf("���i�ł����H :");
	scanf("%d", &h);
	
	for(i = 1; i <= h; i++){						/* i�s(i = 1, 2, ... ,h) */
		for(j = 1; j <= i - 1; j++)					/* i - 1��' '��\�� */
			putchar(' ');
		for(j = 1; j <= 2 * (h - i) + 1; j++)		/* ������\�� */
			printf("%d", i % 10);
		putchar('\n');								/* ���s */
	}
	return 0;
}