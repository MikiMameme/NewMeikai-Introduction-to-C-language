/* 読み込んだ整数値は奇数であるか偶数であるか(switch文を用いて書き換え) */

#include<stdio.h>

int main(void)
{
	int no;
	
	printf("整数を入力してください :");
	scanf("%d", &no);
	
	switch(no % 2){
	case 1 : puts("その数は奇数です");	break;
	case 0 : puts("その数は偶数です");	break;
	}
	return 0;
}