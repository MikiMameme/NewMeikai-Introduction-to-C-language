/* 読み込んだ正の整数値の個数だけ+と-を交互に表示（解答例Aより） */

#include<stdio.h>

int main(void)
{
	int i, no;
	
	printf("正の整数を入力してください。 :");
	scanf("%d",&no);
	
	if(no >= 1) {
		int i = 1;
		while(i <= no){
			if(i % 2)
				putchar('+');
			else
				putchar('-');
			i++;
		}
		putchar('\n');
	}
	return 0;
}