/* �ǂݍ��񂾐����l�̍ŉ��ʌ���5�ł��邩 */

#include<stdio.h>

int main(void)
{
	int num;
	
	printf("��������͂��Ă������� :");
	scanf("%d", &num);
	
	if((num % 10) == 5)
		puts("�ĊJ�̌���5�ł��B");
	else
		puts("�ŉ��ʂ̌���5�ł͂���܂���B");
		
	return 0;
}