/* ���オ���p�̒��p�񓙕ӎO�p�`��\�� */

#include<stdio.h>

int main(void)
{
	int i, j, len;
	
	puts("���㒼�p�񓙕ӎO�p�`�����܂��B");
	printf("�Z�� :");
	scanf("%d", &len);
	
	for(i = len; i >= 1; i--){
		for(j = 1; j <= i; j++)
			putchar('*');
		putchar('\n');
	}
	return 0;
}