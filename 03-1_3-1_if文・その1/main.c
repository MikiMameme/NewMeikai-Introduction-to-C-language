/* �ǂݍ��񂾐����l�͂T�Ŋ���؂�Ȃ��� */

#include<stdio.h>

int main(void)
{
	int no;
	
	printf("��������͂��Ă������� :");
	scanf("%d", &no);
	
	if(no % 5)
	puts("���̐��͂T�Ŋ���؂�܂���B");	/* no��5�Ŋ���؂�Ȃ��Ƃ��Ɏ��s����� */
	
	return 0;
}