/* �ǂݍ��񂾓�̐����l�̑傫���ق��̒l�Ə������ق��̒l�����߂ĕ\�� */

#include<stdio.h>

int main(void)
{
	int n1, n2, max, min;
	
	puts("��̐�������͂��Ă��������B");
	printf("����1 :");	scanf("%d", &n1);
	printf("����2 :");	scanf("%d", &n2);
	
	if (n1 > n2) {
		max = n1;
		min = n2;
	} else {
		max = n2;
		min = n1;
	}
	
	printf("�傫���ق��̒l��%d�ł��B\n", max);
	printf("�������ق��̒l��%d�ł��B\n", min);
	
	return 0;
}