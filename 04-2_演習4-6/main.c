/* �ǂݍ��񂾐����l�ȉ��̋����������ɕ\������ */

#include<stdio.h>

int main(void)
{
	int i, no;
	
	printf("���̐�������͂��Ă������� :");
	scanf("%d", &no);
	
	if(no >= 1){
		int i = 2;
		while(i <= no){
			printf("%d", i);
			i += 2;
	}
		printf("\n");
	}
	return 0;
}