/* 下向きピラミッドを描画 */

#include<stdio.h>

int main(void)
{
	int i, j;
	int h;
	
	puts("下向きピラミッドを作ります。");
	printf("何段ですか？ :");
	scanf("%d", &h);
	
	for(i = 1; i <= h; i++){						/* i行(i = 1, 2, ... ,h) */
		for(j = 1; j <= i - 1; j++)					/* i - 1個の' 'を表示 */
			putchar(' ');
		for(j = 1; j <= 2 * (h - i) + 1; j++)		/* 数字を表示 */
			printf("%d", i % 10);
		putchar('\n');								/* 改行 */
	}
	return 0;
}