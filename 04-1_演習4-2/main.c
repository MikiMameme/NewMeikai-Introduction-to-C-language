/* 二つの整数値を読み込んで小さい数から大きい数までの整数を加えた値を表示 */

#include<stdio.h>

int main(void)
{
	int a, b;
	int no, lower, upper;
	int sum = 0;
	
	printf("整数A :");	scanf("%d", &a);
	printf("整数B :");	scanf("%d", &b);
	
	if (a > b){								/* b～aの合計を求める準備 */
		lower = b;
		upper = a;
	}else{									/* a～bの合計を求める準備 */
		lower = a;
		upper = b;
	}
	
	no = lower;								/* lowerから始めて */
	do {
		sum = sum + no;
		no = no + 1;
	}while (no <= upper);					/* upperまでの合計を求める */
	
	printf("%d以上%d以下の全整数の和は%dです。\n", lower, upper, sum);
	
	return 0;
}