/* �ǂݍ��񂾐��̐����l�̌�����\�� */

#include<stdio.h>

int main(void)
{
	int no, temp;
	int digits;			/* ���� */
	
	do{
		printf("���̐�������͂��Ă��������B :");
		scanf("%d", &no);
		if(no <= 0)
			puts("\a���łȂ�������͂��Ȃ��ł��������B");
	}while(no <= 0);
	/* no��0���傫���Ȃ��Ă��� */
	temp = no;
	digits = 0;
	
	while(temp >0){
		temp /= 10;		/* �E�ɂP�����炷 */
		digits++;
	}
	printf("%d��%d���ł��B\n", no, digits);
	
	return 0;
}