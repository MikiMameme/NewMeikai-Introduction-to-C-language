/* �ǂݍ��񂾓�̐����l�̍���10�ȉ����ǂ�����\�� */

#include<stdio.h>

int main(void)
{
	int a, b, diff;
	
	puts("��̐�������͂��Ă��������B");
	printf("�����` :");	scanf("%d", &a);
	printf("�����a :");	scanf("%d", &b);
	
	diff = a - b;
	
	if(diff > 10 || diff < -10)
		puts("�����̍���11�ȏ�ł��B");
	else
		puts("�����̍���10�ȉ��ł��B");
	
	return 0;
}