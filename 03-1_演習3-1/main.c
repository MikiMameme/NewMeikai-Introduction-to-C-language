/* 二つの整数を読み込んで後者が全社の約数であるか表示 */

#include<stdio.h>

int main(void)
{
	int no1, no2;
	
	printf("二つの整数を入力してください :\n");
	printf("整数A :");	scanf("%d", &no1);
	printf("整数B :");	scanf("%d", &no2);
	
	if (no1 % no2)
		puts("BはAの約数ではありません。");
	else
		puts("BはAの約数です。");
		
	return 0;
}