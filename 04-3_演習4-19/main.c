/* �ǂݍ��񂾐����l�̑S�񐔂Ƃ��̌���\�� */

#include<stdio.h>

int main(void)
{
	int i, n, count;
	
	printf("�����l :");
	scanf("%d", &n);
	
	count = 0;
	for(i = 1; i <= n; i++)
		if(n % i == 0){
			printf("%d\n", i);
			count++;
		}
	printf("�񐔂�%d�ł��B\n", count);
	
	return 0;
}