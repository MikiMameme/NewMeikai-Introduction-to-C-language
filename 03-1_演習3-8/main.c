/* “Ç‚İ‚ñ‚¾“ñ‚Â‚Ì®”’l‚Ì·‚ğ‹‚ß‚Ä•\¦ */

#include<stdio.h>

int main(void)
{
	int n1, n2, sa;
	
	puts("“ñ‚Â‚Ì®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
	printf("®”1 :");	scanf("%d", &n1);
	printf("®”2 :");	scanf("%d", &n2);
	
	if (n1 > n2)
		sa = n1 - n2;
	else
		sa = n2 - n1;
	printf("‚»‚ê‚ç‚Ì·‚Í%d‚Å‚·B\n", sa);
	
	return 0;
}