/* ��̐����l��ǂݍ���ŕ��ϒl�������ŕ\�� */

#include <stdio.h>

int main(void)
{
	int a, b;
	
	puts("��̐�������͂��Ă��������B");
	printf("����a :");	scanf("%d", &a);
	printf("����b :");	scanf("%d", &b);
	
	printf("�����̕��ς�%f�ł��B\n", (double)(a + b) / 2);
	
	return 0;
}