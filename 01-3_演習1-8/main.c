/* “Ç‚İ‚ñ‚¾“ñ‚Â‚Ì®”’l‚ÌÏ‚ğ•Ï”‚ÉŠi”[‚µ‚Ä•\¦ */

#include <stdio.h>

int main(void)
{
	int n1,n2;
	int wa;											/* ˜a */
	
	puts("Š|‚¯Z‚ğ‚µ‚Ü‚·B“ñ‚Â‚Ì®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B :");
	printf("®”‚P :");		scanf("%d", &n1);
	printf("®”‚Q :");		scanf("%d", &n2);
	
	wa = n1 * n2;									/* n1‚Æn2‚Ì˜a‚ğwa‚É‘ã“ü */
	
	printf("‚»‚ê‚ç‚ÌÏ‚Í%d‚Å‚·B\n", wa);			/* ˜a‚ğ•\¦ */
	return 0;
}