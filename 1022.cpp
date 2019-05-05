#include <stdio.h>
int main()
{
	char a[200];
	fgets(a, sizeof(a), stdin);
	printf("%s", a);
}


/*
또는 도움말처럼
	char data[2001];
	fgets(data, 2000, stdin);
	printf("%s", data);

		fgets(data, <여기>, stdin);
		<여기>에 그냥 숫자 넣어도 됨
*/