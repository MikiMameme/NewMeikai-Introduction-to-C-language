/* �ǂݍ��񂾐����l�̐�Βl��\�� */

#include<stdio.h>

int main(void)
{
	int num;
	
	printf("��������͂��Ă��������B");
	scanf("%d", &num);
	
	if(num < 0)
		num = -num;
		
		printf("��Βl��%d�ł��B\n", num);
		
	return 0;
}