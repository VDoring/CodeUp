#include <stdio.h>
int main()
{
	double a;
	scanf("%lf", &a); //%lf���� 'i'�� �ƴ� 'l(��)' �̴�
	printf("%.11lf", a);
	return 0;
}