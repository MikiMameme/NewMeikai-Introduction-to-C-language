/* 1‚©‚çn‚Ü‚Å‚Ì˜a‚ğ‹‚ß‚é */

#include<stdio.h>

int main(void)
{
	int i;
	int sum = 0;
	int n;
	
	printf("n‚Ì’l :");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++)
		sum += i;
		
	printf("1‚©‚ç%d‚Ü‚Å‚Ì˜a‚Í%d‚Å‚·B\n", n, sum);
	return 0;
}