/* 4�l�̊w����3���Ȃ̃e�X�g2�񕪂̍��v���܂Ƃ߂ĕ\�� */

#include<stdio.h>

int main(void)
{
	int i, j, k;
	int tensu[2][4][3] = {
		{{91, 63, 78},{67, 72, 46},{89, 34, 53},{32, 54, 34} },
		{{97, 67, 82},{73, 43, 46},{97, 56, 21},{85, 46, 35} },
	};
	
	int sum[4][3];
	
	/* 2�񕪂̓_���̍��v�����߂� */
	for(i = 0; i < 4; i++) {
		for(j = 0; j < 3; j++)
			sum[i][j] = tensu[0][i][j] + tensu[1][i][j];
	}
	
	/* �e��̓_����\�� */
	for(i = 0; i < 2; i++) {
		printf("%d��ڂ̓_��\n", i + 1);
		for(j = 0; j < 4; j++) {
			for(k = 0; k < 3; k++) 
				printf("%4d", tensu[i][j][k]);
			putchar('\n');
		}
	}
	
	/* ���v�_��\�� */
	puts("���v�_");
	for(i = 0; i < 4; i++) {
		for(j = 0; j < 3; j++)
			printf("%4d", sum[i][j]);
		putchar('\n');
	}
	
	return 0;
}