#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%04d.%02d.%02d", &a, &b, &c);
	printf("%02d-%02d-%04d", c, b, a); // ��ĭ�� 0���� ����ϱ� ���ؼ� %4d�� �ƴ� %04d�� �Է��ؾ��Ѵ�.
	return 0;
}