/* �����l�����X�Ɠǂݍ���ō��v�ƕ��ς�\�� */

#include<stdio.h>

int main(void)
{
	int sum = 0;
	int cnt = 0;
	int retry;
	
	do{
		int t;
		
		printf("�����l����͂��Ă��������B :");
		scanf("%d", &t);
		
		sum = sum + t;
		cnt = cnt + 1;
		
		printf("���͂𑱂��܂����H<Yes...0 / No...9> :");
		scanf("%d", &retry);
	}while(retry == 0 );
	
	printf("���v��%d�ŕ��ς�%.2f�ł��B\n", sum, (double)sum / cnt);
	
	return 0;
}