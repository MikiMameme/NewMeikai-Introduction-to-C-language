/* 読み込んだ整数値に応じてじゃんけんの手を表示(0,1,2のみを受け付ける) 
								※伸ばし文字はダメ文字のため「-」で代用している。*/

#include<stdio.h>

int main(void)
{
	int hand;
	
	do{
		printf("手を選んでください【0...グ- / 1...チョキ / 2...パ-】 :");
		scanf("%d", &hand);
	} while(hand < 0 || hand > 2);
	
	printf("あなたは");
	switch(hand) {
		case 0 : printf("グ-");		break;
		case 1 : printf("チョキ");	break;
		case 2 : printf("パ-");		break;
	}
	printf("を選びました。\n");
	
	return 0;
}