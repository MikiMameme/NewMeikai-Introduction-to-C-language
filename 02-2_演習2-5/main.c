/* ��̐����l��ǂݍ���őO�҂̒l����҂̉����������ŕ\�� */

#include <stdio.h>

int main(void)
{
	int a, b;
	
	puts("��̐�������͂��Ă��������B");
	printf("����a :");	scanf("%d", &a);
	printf("����b :");	scanf("%d", &b);
	
	printf("a�̒l��b��%f%%�ł��B\n", (double)a / b * 100);
	
	return 0;
}