/* 読み込んだ整数値以下の偶数を昇順に表示する */

#include<stdio.h>

int main(void)
{
	int i, no;
	
	printf("正の整数を入力してください :");
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