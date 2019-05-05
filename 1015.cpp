#include <stdio.h>
int main()
{
	float a;
	scanf("%f", &a);
	printf("%.2f", a); // 2의 자리까지 출력하고 싶다면 %.2f
	return 0;			// 3의 자리까지 출력하고 싶다면 %.3f
}