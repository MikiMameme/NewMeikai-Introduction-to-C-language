/* 4�͂܂Ƃ� */

#include<stdio.h>

int main(void)
{
	int i, j;
	int x, y, z;
	
	/* do�� */
	do{
		printf("0�`100�̐����l");
		scanf("%d", &x);
	}while (x < 0 || x > 100);
	
	
	y = x;
	z = x;
	
	/* while�� */
	while(y >= 0)
		printf("%d %d\n", y--, ++z);
		
		printf("�c���������Ŗʐς�%d"
				"�̒����`�̕ӂ̒��� : \n", x);
				
	/* for�� */
	for(i = 1; i < x; i++){
		if(i * i > x) break;
		if(x % i != 0) continue;
		printf("%d X %d\n", i, x / i);
	}
	
	puts("5�s7��̃A�X�e���X�N");
	/* ��d���[�v */
	for(i = 1; i <= 5; i++){
		for(j = 1; j<= 7; j++)
			putchar('*');
		putchar('\n');
	}
	
	return 0;
}