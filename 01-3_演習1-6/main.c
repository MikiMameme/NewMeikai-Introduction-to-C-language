/* 読み込んだ整数値に6を減じた値を表示 */
#include <stdio.h>

int main(void)
{
	int no;
	
	printf("整数を入力してください :");
	scanf("%d", &no);
	printf("%dに6を減じると%dです。\n", no, no - 6);  /* 変数は何度も使える！ */
	return 0;
}