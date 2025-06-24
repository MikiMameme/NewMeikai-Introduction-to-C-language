/* 配列の全要素の並びを反転する */

#include<stdio.h>

#define NUMBER 7						/* 配列xの要素数 */

int main(void)
{
	int i;
	int x[NUMBER];						/* int[NUMBER]型の配列 */
	
	for(i = 0; i < NUMBER; i++){		/* 要素に値を読み込む */
		printf("x[%d] :", i);
		scanf("%d", &x[i]);
	}
	for(i = 0; i < NUMBER / 2; i++){	/* 要素と並びを反転 */
		int temp = x[i];
		x[i]	 = x[NUMBER - i - 1];
		x[NUMBER - i - 1] = temp;
	}
	puts("反転しました。");
	for(i = 0; i < NUMBER; i++)			/* 要素値を表示 */
		printf("x[%d] = %d\n", i, x[i]);
		
	return 0;
}