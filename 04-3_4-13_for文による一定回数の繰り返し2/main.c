/* �w�����ꂽ������������ǂݍ���ō��v�l�ƕ��ϒl��\�� */

#include<stdio.h>

int main(void)
{
	int i = 0;
	int sum = 0;
	int num, tmp;
	
	printf("�����͉��ł����H :");
	scanf("%d", &num);
	
	for(i = 0; i < num; i++){
		printf("No.%d:", i + 1);
		scanf("%d", &tmp);
		sum += tmp;
	}
	
	printf("���v�l :%d\n", sum);
	printf("���ϒl :%.2f\n", (double)sum / num);
	
	return 0;
}