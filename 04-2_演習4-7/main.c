/* �ǂݍ��񂾐����l�ȉ���2�ׂ̂���������ɕ\������ */

#include<stdio.h>


int main(void)
{
	int i, no;
	
	printf("���̐�������͂��Ă������� :");
	scanf("%d", &no);
	
	if(no >= 1){
		int i = 2;				/* 2����n�߂� */
		while(i <= no){
			printf("%d", i);	/* i�̒l��\��������� */
			i *= 2;				/* 2��������� */
	}
		printf("\n");			/* ���s */
	}
	return 0;
}