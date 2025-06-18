/* 読み込んだ整数値以下の2のべき乗を昇順に表示する */

#include<stdio.h>


int main(void)
{
	int i, no;
	
	printf("正の整数を入力してください :");
	scanf("%d", &no);
	
	if(no >= 1){
		int i = 2;				/* 2から始める */
		while(i <= no){
			printf("%d", i);	/* iの値を表示した後に */
			i *= 2;				/* 2をかけると */
	}
		printf("\n");			/* 改行 */
	}
	return 0;
}