/* ��̐����l��ǂݍ���ŏ�����������傫�����܂ł̐������������l��\�� */

#include<stdio.h>

int main(void)
{
	int a, b;
	int no, lower, upper;
	int sum = 0;
	
	printf("����A :");	scanf("%d", &a);
	printf("����B :");	scanf("%d", &b);
	
	if (a > b){								/* b�`a�̍��v�����߂鏀�� */
		lower = b;
		upper = a;
	}else{									/* a�`b�̍��v�����߂鏀�� */
		lower = a;
		upper = b;
	}
	
	no = lower;								/* lower����n�߂� */
	do {
		sum = sum + no;
		no = no + 1;
	}while (no <= upper);					/* upper�܂ł̍��v�����߂� */
	
	printf("%d�ȏ�%d�ȉ��̑S�����̘a��%d�ł��B\n", lower, upper, sum);
	
	return 0;
}