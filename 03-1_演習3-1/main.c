/* ��̐�����ǂݍ���Ō�҂��S�Ђ̖񐔂ł��邩�\�� */

#include<stdio.h>

int main(void)
{
	int no1, no2;
	
	printf("��̐�������͂��Ă������� :\n");
	printf("����A :");	scanf("%d", &no1);
	printf("����B :");	scanf("%d", &no2);
	
	if (no1 % no2)
		puts("B��A�̖񐔂ł͂���܂���B");
	else
		puts("B��A�̖񐔂ł��B");
		
	return 0;
}