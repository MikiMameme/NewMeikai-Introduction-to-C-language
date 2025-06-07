/* “Ç‚İ‚ñ‚¾O‚Â‚Ì®”’l‚Ì˜a‚ğ•Ï”‚ÉŠi”[‚µ‚Ä•\¦ */

#include <stdio.h>

int main(void)
{
	int n1,n2,n3;									/* ®”’l‚ğŠi”[ */
	int wa;											/* ˜a */
	
	puts("‘«‚µZ‚ğ‚µ‚Ü‚·BO‚Â‚Ì®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B :");
	printf("®”‚P :");		scanf("%d", &n1);
	printf("®”‚Q :");		scanf("%d", &n2);
	printf("®”‚R :");		scanf("%d", &n3);		/* ®”’l‚ğ’Ç‰Á */
	wa = n1 + n2 + n3;									/* n1‚Æn2‚Æn3‚Ì˜a‚ğwa‚É‘ã“ü */
	
	printf("‚»‚ê‚ç‚Ì˜a‚Í%d‚Å‚·B\n", wa);			/* ˜a‚ğ•\¦ */
	return 0;
}