/* �ǂݍ��񂾐����l�ɉ����Ă���񂯂�̎��\��(0,1,2�݂̂��󂯕t����) 
								���L�΂������̓_�������̂��߁u-�v�ő�p���Ă���B*/

#include<stdio.h>

int main(void)
{
	int hand;
	
	do{
		printf("���I��ł��������y0...�O- / 1...�`���L / 2...�p-�z :");
		scanf("%d", &hand);
	} while(hand < 0 || hand > 2);
	
	printf("���Ȃ���");
	switch(hand) {
		case 0 : printf("�O-");		break;
		case 1 : printf("�`���L");	break;
		case 2 : printf("�p-");		break;
	}
	printf("��I�т܂����B\n");
	
	return 0;
}