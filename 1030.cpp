#include <stdio.h>
int main()
{
	long long int a; // long long int에는
	scanf("%lld", &a); // %lld를 써야한다. (이때 l은 L이다)
	printf("%lld", a);
	return 0;
}

/*
long long int는 ?9,223,372,036,854,775,808 ~ 9,223,372,036,854,775,807
저장가능.

int는 -2147483648 ~ +2147483647
저장가능.
*/