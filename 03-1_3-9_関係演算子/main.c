/* �ǂݍ��񂾐����l�̕����𔻒� */

#include<stdio.h>

int main(void)
{
	int no;
	
	printf("��������͂��Ă��������B");
	scanf("%d", &no);
	
	if(no == 0)
		puts("���̐���0�ł��B");
	else if(no > 0)
		puts("���̐��͐��ł��B");
	else
		puts("���̐��͕��ł��B");
		
	return 0;
}