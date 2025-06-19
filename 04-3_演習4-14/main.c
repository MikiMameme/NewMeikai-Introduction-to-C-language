/* “Ç‚İ‚ñ‚¾®”‚ÌŒÂ”‚¾‚¯1234567890‚ğŒJ‚è•Ô‚µ•\¦ */

#include<stdio.h>

int main(void)
{
	int i, no;
	
	printf("³‚Ì®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B");
	scanf("%d", &no);
	
	for(i = 1; i <= no; i++)
		printf("%d", i % 10);
	putchar('\n');
	
	return 0;
}