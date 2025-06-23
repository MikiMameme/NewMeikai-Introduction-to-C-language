/* 配列の各要素に先頭から順に０、１、２、３、４を代入して表示（for文） */

#include<stdio.h>

int main(void)
{
	int i;
	int v[5];				/* int[5]型の配列 */
	
	for(i = 0; i < 5; i++)	/* 要素に値を代入 */
		v[i] = i;
		
	for(i = 0; i < 5; i++)	/* 要素の値を表示 */
		printf("v[%d] = %d\n", i, v[i]);
		
	return 0;
}