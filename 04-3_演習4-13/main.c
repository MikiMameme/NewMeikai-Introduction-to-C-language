/* 1����n�܂ł̘a�����߂� */

#include<stdio.h>

int main(void)
{
	int i;
	int sum = 0;
	int n;
	
	printf("n�̒l :");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++)
		sum += i;
		
	printf("1����%d�܂ł̘a��%d�ł��B\n", n, sum);
	return 0;
}