/* �ǂݍ��񂾓�̐����l�̍������߂ĕ\�� */

#include<stdio.h>

int main(void)
{
	int n1, n2, sa;
	
	puts("��̐�������͂��Ă�������");
	printf("����1 :");	scanf("%d", &n1);
	printf("����2 :");	scanf("%d", &n2);
	
	if (n1 > n2)
		sa = n1 - n2;
	else
		sa = n2 - n1;
	printf("�����̍���%d�ł��B\n", sa);
	
	return 0;
}