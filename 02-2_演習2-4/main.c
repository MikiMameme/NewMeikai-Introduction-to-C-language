/* �^�Ɖ��Z�ɂ��Ċm�F�����邽�߂̃v���O���� */

#include <stdio.h>

int main(void)
{
	int		n1, n2;
	double 	d1, d2;
	
	puts("�����Ǝ����������͂��Ă��������B");
	printf("����n1:");	scanf("%d", &n1);
	printf("����n2:");	scanf("%d", &n2);
	printf("����d1:");	scanf("%lf", &d1);
	printf("����d2:");	scanf("%lf", &d2);
	
	printf("5 * 2.5 = %d\n", 5 * 2);
	printf("5 / 2 = %d\n", 5 / 2);
	printf("5 * n1 = %d\n", 5 * n1);
	printf("5 / n1 = %d\n", 5 / n1);
	printf("n1 * n2 = %d\n", n1 * n2);
	printf("n1 / n2 = %d\n", n1 / n2);
	
	printf("5 * 2.5 = %f\n", 5 * 2.5);
	printf("5 / 2.5 = %f\n", 5 / 2.5);
	printf("5 * d1 = %f\n", 5 * d1);
	printf("5 / d1 = %f\n", 5 / d1);
	printf("n1 * d2 = %f\n", n1 * d2);
	printf("n1 / d2 = %f\n", n1 / d2);
	
	printf("5.3 * 2.5 = %f\n", 5.3 * 2.5);
	printf("5.3 / 2.5 = %f\n", 5.3 / 2.5);
	printf("5.3 * d1 = %f\n", 5.3 * d1);
	printf("5.3 / d1 = %f\n", 5.3 / d1);
	printf("d1 * d2 = %f\n", d1 * d2);
	printf("d1 / d2 = %f\n", d1 / d2);
	
	return 0;
}