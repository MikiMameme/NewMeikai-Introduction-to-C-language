/* �ǂݍ��񂾐����l�̓[�����ǂ��� */

#include<stdio.h>

int main(void)
{
	int num;
	
	printf("�����l����͂��Ă�������");
	scanf("%d", &num);
	
	if(num)
		puts("���̐��̓[���ł͂���܂���B");
	else
		puts("���̐��̓[���ł��B");
		
	return 0;
}