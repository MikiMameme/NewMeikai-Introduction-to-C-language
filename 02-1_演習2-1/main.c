/* ��̐����l��ǂݍ���őO�҂̐�����҂̐��̉��p�[�Z���g�ł��邩��\������B */
#include <stdio.h>
int main(void)
{
	int x, y;
	
	puts("��̐�������͂��Ă��������B");
	printf("����x :");	scanf("%d", &x);
	printf("����y :");	scanf("%d", &y);
	
	printf("x�̒l��y��%.0f%%�ł�\n", (double)x / (double)y * 100); 
												/* �ǂ����A�����܂ł��Ȃ��Ă��ǂ������݂����B */
	return 0;
}