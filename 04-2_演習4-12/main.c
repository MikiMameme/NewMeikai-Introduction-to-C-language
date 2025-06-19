/* 読み込んだ正の整数値の桁数を表示 */

#include<stdio.h>

int main(void)
{
	int no, temp;
	int digits;			/* 桁数 */
	
	do{
		printf("正の整数を入力してください。 :");
		scanf("%d", &no);
		if(no <= 0)
			puts("\a正でない数を入力しないでください。");
	}while(no <= 0);
	/* noは0より大きくなっている */
	temp = no;
	digits = 0;
	
	while(temp >0){
		temp /= 10;		/* 右に１桁ずらす */
		digits++;
	}
	printf("%dは%d桁です。\n", no, digits);
	
	return 0;
}