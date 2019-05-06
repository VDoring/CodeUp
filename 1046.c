#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d\n", a + b + c);
	printf("%.1f", ((float)(a + b + c) / 3)); //(float)을 사용할시 뒤의 계산식들을 괄호로 포함해주기
	return 0;
}