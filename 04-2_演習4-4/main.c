/* 読み込んだ整数値を0までカウントダウン（その2） */

#include<stdio.h>

int main(void)
{
	int no;
	
	printf("正の整数を入力してください。 :");
	scanf("%d", &no);
	
	if(no >= 1){
		while(no >= 1) 
			printf("%d", no --);
	
	printf("\n");
	}
	return 0;
}