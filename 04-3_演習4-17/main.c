/* �ǂݍ��񂾐����l�ȉ��̐����Ƃ���2��l��\�� */

#include<stdio.h>

int main(void)
{
	int i, n;
	
	printf("�����l :");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++)
		printf("%d��2���%d�ł��B\n", i, i * i);
	
	return 0;
}