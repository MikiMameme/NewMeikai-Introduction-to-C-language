/* 読み込んだ整数値以下の整数とその2乗値を表示 */

#include<stdio.h>

int main(void)
{
	int i, n;
	
	printf("整数値 :");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++)
		printf("%dの2乗は%dです。\n", i, i * i);
	
	return 0;
}