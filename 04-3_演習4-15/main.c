/* �g���ƕW���̏d�̑Ή��\��\�� */

#include<stdio.h>

int main(void)
{
	int height;
	int lower, upper, step;
	
	printf("��cm���� :");		scanf("%d", &lower);
	printf("��cm�܂� :");		scanf("%d", &upper);
	printf("��cm���� :");		scanf("%d", &step);
	
	for(height = lower; height <= upper; height += step)
		printf("%dcm %.2fkg\n", height, (height - 100) * 0.9);
		
		return 0;
}