/* æñÍÌÜÆß */

#include <stdio.h>

int main(void)
{
	int a;
	int b;
	
	double r;
	
	printf("®aÆbÌl :");
	scanf("%d%d", &a, &b);
	
	printf("a + b = %d\n", a + b); /* ÁZF2 + Zq */
	printf("a - b = %d\n", a - b); /* ÁžZF2 - Zq */
	printf("a * b = %d\n", a * b); /* ÏF2 * Zq */
	printf("a / b = %d\n", a / b); /* €F/Zq */
	printf("a %% b = %d\n", a % b); /* è]F%Zq */
	
	printf("(a+b)/2 = %d\n",	(a + b) / 2);
	
	printf("œÏl = %f\n\n", (double)(a+b) / 2);
	
	printf("Œa :");
	scanf("%lf", &r);
	
	printf("Œa%.3fÌ~ÌÊÏÍ%.3fÅ·B\n", r, 3.14 * r * r);
	
	return 0;
}