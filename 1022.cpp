#include <stdio.h>
int main()
{
	char a[200];
	fgets(a, sizeof(a), stdin);
	printf("%s", a);
}


/*
�Ǵ� ����ó��
	char data[2001];
	fgets(data, 2000, stdin);
	printf("%s", data);

		fgets(data, <����>, stdin);
		<����>�� �׳� ���� �־ ��
*/