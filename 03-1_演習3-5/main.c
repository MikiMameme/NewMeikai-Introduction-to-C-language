/* �������Z�q�Ɗ������Z�q����������l��\�� */

#include<stdio.h>

int main(void)
{
	int a, b;
	
	puts("��̐�������͂��Ă��������B");
	printf("�ϐ�a :");	scanf("%d", &a);
	printf("�ϐ�b :");	scanf("%d", &b);
	
	puts("�������̒l");
	printf("a == b �̒l : %d\n", a == b);
	printf("a != b �̒l : %d\n", a != b);
	
	puts("�֌W���̒l");
	printf("a <  b �̒l : %d\n", a <  b);
	printf("a <= b �̒l : %d\n", a <= b);
	printf("a >  b �̒l : %d\n", a >  b);
	printf("a >= b �̒l : %d\n", a >= b);
	
	return 0;
}