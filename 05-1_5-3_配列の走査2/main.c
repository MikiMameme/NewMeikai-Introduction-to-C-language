/* �z��̊e�v�f�ɐ擪���珇�ɂP�A�Q�A�R�A�S�A�T�������ĕ\���ifor���j */

#include<stdio.h>

int main(void)
{
	int i;
	int v[5];				/* int[5]�^�̔z�� */
	
	for(i = 0; i < 5; i++)	/* �v�f�ɒl���� */
		v[i] = i + 1;
		
	for(i = 0; i < 5; i++)	/* �v�f�̒l��\�� */
		printf("v[%d] = %d\n", i, v[i]);
		
	return 0;
}