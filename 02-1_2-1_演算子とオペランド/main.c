/* �ǂݍ��񂾓�̐����l�̘a�E���E�ρE���E��] */

#include <stdio.h>

int main(void)
{
	int vx, vy;
	
	puts("��̐�������͂��Ă��������B");
	printf("����vx :");		scanf("%d", &vx);
	printf("����vy :");		scanf("%d", &vy);
	
	printf("�i�����Z�j""vx + vy = %d\n", vx + vy);
	printf("�i�����Z�j""vx - vy = %d\n", vx - vy);
	printf("�i�|���Z�j""vx * vy = %d\n", vx * vy);
	printf("�i����Z�j""vx / vy = %d\n", vx / vy);
	printf("�i���܂�j""vx %% vy = %d\n", vx % vy);	/* ������������ɋL������%�����ׂ��
															%��������\�������*/
	
	return 0;
}