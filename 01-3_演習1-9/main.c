/* �ǂݍ��񂾎O�̐����l�̘a��ϐ��Ɋi�[���ĕ\�� */

#include <stdio.h>

int main(void)
{
	int n1,n2,n3;									/* �����l���i�[ */
	int wa;											/* �a */
	
	puts("�����Z�����܂��B�O�̐�������͂��Ă��������B :");
	printf("�����P :");		scanf("%d", &n1);
	printf("�����Q :");		scanf("%d", &n2);
	printf("�����R :");		scanf("%d", &n3);		/* �����l��ǉ� */
	wa = n1 + n2 + n3;									/* n1��n2��n3�̘a��wa�ɑ�� */
	
	printf("�����̘a��%d�ł��B\n", wa);			/* �a��\�� */
	return 0;
}