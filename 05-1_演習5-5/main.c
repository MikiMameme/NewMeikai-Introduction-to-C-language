/* �z��̑S�v�f�̕��т𔽓]���� */

#include<stdio.h>

#define NUMBER 7						/* �z��x�̗v�f�� */

int main(void)
{
	int i;
	int x[NUMBER];						/* int[NUMBER]�^�̔z�� */
	
	for(i = 0; i < NUMBER; i++){		/* �v�f�ɒl��ǂݍ��� */
		printf("x[%d] :", i);
		scanf("%d", &x[i]);
	}
	for(i = 0; i < NUMBER / 2; i++){	/* �v�f�ƕ��т𔽓] */
		int temp = x[i];
		x[i]	 = x[NUMBER - i - 1];
		x[NUMBER - i - 1] = temp;
	}
	puts("���]���܂����B");
	for(i = 0; i < NUMBER; i++)			/* �v�f�l��\�� */
		printf("x[%d] = %d\n", i, x[i]);
		
	return 0;
}