#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%04d.%02d.%02d", &a, &b, &c); // ��¿� 2ĭ�� ����ϵ��� �ϰ� �ʹٸ� %02d �� ���.
	printf("%04d.%02d.%02d", a, b, c); // 4ĭ�� ����ϰ� �ʹٸ� %04d
	return 0;
}