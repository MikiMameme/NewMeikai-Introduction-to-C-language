/* “Ç‚İ‚ñ‚¾®”’lˆÈ‰º‚Ì‹ô”‚ğ•\¦ */

#include<stdio.h>

int main(void)
{
	int i, n;
	
	printf("®”’l :");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i += 2)
		printf("%d", i);
	putchar('\n');
	
	return 0;
}