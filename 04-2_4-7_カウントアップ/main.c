/* �ǂݍ��񂾐��̐����l�܂ŃJ�E���g�A�b�v */

#include<stdio.h>

int main(void)
{
	int i, no;
	
	printf("���̐�������͂��Ă������� :");
	scanf("%d", &no);
	
	i = 0;
	while(i <= no)
		printf("%d", i++);
	printf("\n");
	
	return 0;
}