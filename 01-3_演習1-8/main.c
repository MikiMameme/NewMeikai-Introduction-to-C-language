/* �ǂݍ��񂾓�̐����l�̐ς�ϐ��Ɋi�[���ĕ\�� */

#include <stdio.h>

int main(void)
{
	int n1,n2;
	int wa;											/* �a */
	
	puts("�|���Z�����܂��B��̐�������͂��Ă��������B :");
	printf("�����P :");		scanf("%d", &n1);
	printf("�����Q :");		scanf("%d", &n2);
	
	wa = n1 * n2;									/* n1��n2�̘a��wa�ɑ�� */
	
	printf("�����̐ς�%d�ł��B\n", wa);			/* �a��\�� */
	return 0;
}