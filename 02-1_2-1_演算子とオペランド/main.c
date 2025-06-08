/* 読み込んだ二つの整数値の和・差・積・商・剰余 */

#include <stdio.h>

int main(void)
{
	int vx, vy;
	
	puts("二つの整数を入力してください。");
	printf("整数vx :");		scanf("%d", &vx);
	printf("整数vy :");		scanf("%d", &vy);
	
	printf("（足し算）""vx + vy = %d\n", vx + vy);
	printf("（引き算）""vx - vy = %d\n", vx - vy);
	printf("（掛け算）""vx * vy = %d\n", vx * vy);
	printf("（割り算）""vx / vy = %d\n", vx / vy);
	printf("（あまり）""vx %% vy = %d\n", vx % vy);	/* 書式文字列内に記号文字%を二個並べると
															%が一個だけ表示される*/
	
	return 0;
}