/* �ǂݍ��񂾐����̌�����*��5���Ƃɉ��s���Ȃ���*���o�� */

#include<stdio.h>

int main(void)
{
	int i, no;
	
	printf("���� * ���o�͂��܂����H :");
	scanf("%d", &no);
	
	if(no > 0){
		int i;
		for(i = 0; i < no; i++){
		putchar('*');
		if(i % 5 == 4)
			putchar('\n');
	}
	if(i % 5 !=0)
		putchar('\n');
	}
	return 0;
}