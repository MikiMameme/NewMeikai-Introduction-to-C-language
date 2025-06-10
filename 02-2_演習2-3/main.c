/* 読み込んだ実数値をそのまま表示するプログラム */

#include <stdio.h>

int main(void)
{
	double vx;
	
	puts("実数を入力してください。");
	printf("実数 :");	scanf("%lf", &vx);
	
	printf("あなたは%fと入力しましたね。", vx);
	
	return 0;
}