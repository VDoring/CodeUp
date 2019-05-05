#include <stdio.h>
int main()
{
	double a;
	scanf("%lf", &a); //%lf에서 'i'가 아닌 'l(엘)' 이다
	printf("%.11lf", a);
	return 0;
}