/* 読み込んだ整数の個数だけ*を5個ごとに改行しながら*を出力 */

#include<stdio.h>

int main(void)
{
	int i, no;
	
	printf("何個 * を出力しますか？ :");
	scanf("%d", &no);
	
	if(no > 0){
		int i;
		for(i = 0; i < no; i++){
		putchar('*');
		if(i % 5 == 4)
			putchar('\n');
	}
	if(i % 5 !=0)
		putchar('\n');
	}
	return 0;
}