/* ��̐����l��ǂݍ���ŏ��Ə�]��\�� */

#include <stdio.h>

int main(void)
{
	int a, b;
	
	puts("��̐�������͂��Ă��������B");
	printf("����a :");	scanf("%d", &a);
	printf("����b :");	scanf("%d", &b);
	
	printf("a��b�Ŋ����%d���܂�%d�ł�\n", a / b, a % b);	/* �ϊ��w�肪�Q�I */
	return 0;
}