/* �ǂݍ��񂾐����l�͊�ł��邩�����ł��邩(switch����p���ď�������) */

#include<stdio.h>

int main(void)
{
	int no;
	
	printf("��������͂��Ă������� :");
	scanf("%d", &no);
	
	switch(no % 2){
	case 1 : puts("���̐��͊�ł�");	break;
	case 0 : puts("���̐��͋����ł�");	break;
	}
	return 0;
}