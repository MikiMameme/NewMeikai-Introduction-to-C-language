/* �ǂݍ��񂾓�̐����l�̑傫���ق��̒l��\�� */

#include<stdio.h>

int main(void)
{
	int n1, n2;
	
	puts("��̐����l����͂��Ă��������B");
	printf("����1 :");	scanf("%d", &n1);
	printf("����2 :");	scanf("%d", &n2);
	
	if(n1 > n2)
		printf("�傫���ق��̒l��%d�ł��B", n1);
	else
		printf("�傫���ق��̒l��%d�ł��B", n2);
	
	return 0;
}