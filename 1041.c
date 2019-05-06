#include <stdio.h>
int main()
{
	int a;
	scanf("%c", &a); //아스키코드. a를 입력받음. (65)
	printf("%c", a+1); // a=65지만 여기서 1을 더하면 a=66.  이건 곧 B가 된다.
	return 0;
}