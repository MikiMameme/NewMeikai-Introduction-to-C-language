/* �z��̗v�f�ɒl��ǂݍ���ŕ\��*/

#include<stdio.h>
#define NUMBER 96

int main(void)
{
	int i, num;
	int a[NUMBER];
	
	printf("�f-�^�� :");
	
	do{
		scanf("%d", &num);
		if(num < 1 || num > NUMBER)
			printf("\a�`%d�œ��͂��Ă������� :", NUMBER);
	}while(num < 1 || num > NUMBER);
	
	for( i = 0; i < num; i++){
		printf("%2d�� :", i + 1);
		scanf("%d", &a[i]);
	}
	
	printf("{");
	
	for(i = 0; i < num -1 ; i++)
		printf("%d,", a[i]);
		
	printf("%d}\n", a[i]);
	
	return 0;
}