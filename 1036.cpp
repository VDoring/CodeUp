/*
(시도 1)

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
	int a = 0; // 왜인진 모르겠으나 아스키코드 출력을 위한 문자열 입력(%c)를 위해선 초기화를 해줘야 한다.
	scanf("%c", &a); // 입력 A
	printf("%d", a); // 출력 65
	return 0;
}