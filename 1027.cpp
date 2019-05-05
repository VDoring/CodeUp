#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%04d.%02d.%02d", &a, &b, &c);
	printf("%02d-%02d-%04d", c, b, a); // 빈칸을 0으로 출력하기 위해선 %4d가 아닌 %04d로 입력해야한다.
	return 0;
}