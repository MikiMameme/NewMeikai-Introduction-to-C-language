/* “Ç‚İ‚ñ‚¾®”’lˆÈ‰º‚Ì‹ô”‚ğ¸‡‚É•\¦‚·‚é */

#include<stdio.h>

int main(void)
{
	int i, no;
	
	printf("³‚Ì®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ :");
	scanf("%d", &no);
	
	if(no >= 1){
		int i = 2;
		while(i <= no){
			printf("%d", i);
			i += 2;
	}
		printf("\n");
	}
	return 0;
}