/* �w���̓_����ǂݍ���ō��v�_�ƕ��ϓ_��\���i�l�����}�N���Œ�`�j */

#include<stdio.h>
#define NUMBER 5				/* �w���̐l�� */

int main(void)
{
	int i;
	int tensu[NUMBER];			/* NUMBER�l�̊w���̓_�� */
	int sum = 0;				/* ���v�_ */
	
	printf("%d�l�̓_������͂��Ă��������B\n", NUMBER);
	for(i = 0; i < NUMBER; i++){
		printf("%2d�� :", i + 1);
		scanf("%d", &tensu[i]);
		sum += tensu[i];
	}
	
	printf("���v�_ :%5d\n", sum);
	printf("���ϓ_ :%5.1f\n", (double)sum / NUMBER);
	
	return 0;
}