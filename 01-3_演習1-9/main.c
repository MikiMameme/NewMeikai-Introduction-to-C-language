/* 読み込んだ三つの整数値の和を変数に格納して表示 */

#include <stdio.h>

int main(void)
{
	int n1,n2,n3;									/* 整数値を格納 */
	int wa;											/* 和 */
	
	puts("足し算をします。三つの整数を入力してください。 :");
	printf("整数１ :");		scanf("%d", &n1);
	printf("整数２ :");		scanf("%d", &n2);
	printf("整数３ :");		scanf("%d", &n3);		/* 整数値を追加 */
	wa = n1 + n2 + n3;									/* n1とn2とn3の和をwaに代入 */
	
	printf("それらの和は%dです。\n", wa);			/* 和を表示 */
	return 0;
}