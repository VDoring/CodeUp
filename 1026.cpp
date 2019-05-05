
/* 첫번째 시도
#include <stdio.h>
int main()
{
	int h, m, s;
	scanf("%d:%d:%d", &h, &m, &s);
	printf("%2d", m);
	return 0;
}
*/

#include <stdio.h>
int main()
{
	int h, m, s;
	scanf("%d:%d:%d", &h, &m, &s);
	printf("%d", m);
	return 0;
}


/*
#include <stdio.h>
int main()
{
	char h[30]; // Char형 시도
	char m[30];
	char s[30];
	scanf("%s:%s:%s", h, m, s);
	printf("%d", m);
	return 0;
}
*/