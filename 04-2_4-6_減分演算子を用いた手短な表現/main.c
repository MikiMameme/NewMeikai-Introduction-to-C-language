/* �ǂݍ��񂾐����l��0�܂ŃJ�E���g�_�E���i����2�j */

#include<stdio.h>

int main(void)
{
	int no;
	
	printf("���̐�������͂��Ă��������B :");
	scanf("%d", &no);
	
	while(no >= 0)
		printf("%d", no --);
	printf("\n");
	
	return 0;
}