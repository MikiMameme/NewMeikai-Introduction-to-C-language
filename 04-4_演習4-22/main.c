/* �����`��`�� */

#include<stdio.h>

int main(void)
{
	int i, j;
	int side1, side2, height, width;
	
	puts("�����̒����`�����܂��B");
	printf("��Ӂi����1�j :");	scanf("%d", &side1);
	printf("��Ӂi����2�j :");	scanf("%d", &side2);
	
	if(side1 < side2){
		height = side1;
		width = side2;
	}else{
		height = side2;
		width = side1;
	}
	for(i = 1; i <= height; i++){
		for(j = 1; j <= width; j++)
			putchar('*');
		putchar('\n');
	}
	return 0;
}