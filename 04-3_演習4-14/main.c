/* �ǂݍ��񂾐����̌�����1234567890���J��Ԃ��\�� */

#include<stdio.h>

int main(void)
{
	int i, no;
	
	printf("���̐�������͂��Ă��������B");
	scanf("%d", &no);
	
	for(i = 1; i <= no; i++)
		printf("%d", i % 10);
	putchar('\n');
	
	return 0;
}