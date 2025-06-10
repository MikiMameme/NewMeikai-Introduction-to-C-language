/* 二つの整数値を読み込んで前者の数が後者の数の何パーセントであるかを表示する。 */
#include <stdio.h>
int main(void)
{
	int x, y;
	
	puts("二つの整数を入力してください。");
	printf("整数x :");	scanf("%d", &x);
	printf("整数y :");	scanf("%d", &y);
	
	printf("xの値はyの%.0f%%です\n", (double)x / (double)y * 100); 
												/* どうやら、ここまでしなくても良かったみたい。 */
	return 0;
}