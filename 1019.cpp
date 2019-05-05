#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%04d.%02d.%02d", &a, &b, &c); // 출력에 2칸을 출력하도록 하고 싶다면 %02d 를 사용.
	printf("%04d.%02d.%02d", a, b, c); // 4칸을 사용하고 싶다면 %04d
	return 0;
}