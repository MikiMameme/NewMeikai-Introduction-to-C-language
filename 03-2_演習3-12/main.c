/* “Ç‚İ‚ñ‚¾®”’l‚ÍŠï”‚Å‚ ‚é‚©‹ô”‚Å‚ ‚é‚©(switch•¶‚ğ—p‚¢‚Ä‘‚«Š·‚¦) */

#include<stdio.h>

int main(void)
{
	int no;
	
	printf("®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ :");
	scanf("%d", &no);
	
	switch(no % 2){
	case 1 : puts("‚»‚Ì”‚ÍŠï”‚Å‚·");	break;
	case 0 : puts("‚»‚Ì”‚Í‹ô”‚Å‚·");	break;
	}
	return 0;
}