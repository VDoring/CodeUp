/*
(�õ� 1)

#include <stdio.h>
int main()
{
	char a[30];
	scanf("%c", &a);
	printf("%d", a);
	return 0;
}

*/


#include <stdio.h>
int main()
{
	int a = 0; // ������ �𸣰����� �ƽ�Ű�ڵ� ����� ���� ���ڿ� �Է�(%c)�� ���ؼ� �ʱ�ȭ�� ����� �Ѵ�.
	scanf("%c", &a); // �Է� A
	printf("%d", a); // ��� 65
	return 0;
}