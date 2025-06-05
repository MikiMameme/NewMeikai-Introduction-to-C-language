/* int型変数の宣言に実数地の初期化子を与えるとどうなるかプログラムを作成 */
#include<stdio.h>

int main(void)
{
	int vx = 3.14;						/* vxはint型の変数(3.14で初期化)*/
	int vy = vx + 10;					/* vyはint型の変数(vx + 10で初期化) */
	
	printf("vxの値は%dです。\n",vx);		/* vxの値を表示、小数点はどうなる？ */
	printf("vyの値は%dです。\n",vy);		/* vyの値を表示、小数点はどうなる？ */
	
	return 0;
}