/* 身長を整数値で読み込んで標準体重を表示する */

#include <stdio.h>

int main(void)
{
	double sum, height, weight;
	
	puts("身長を入力してください。");
	printf("身長 :");	scanf("%lf", &height);
	
	sum = height - 100;
	weight = sum * 0.9;
	
	printf("標準体重は%.1fです。\n", weight);
	
	return 0;
}