#include <stdio.h>
int main()
{
	long long int a; // long long int����
	scanf("%lld", &a); // %lld�� ����Ѵ�. (�̶� l�� L�̴�)
	printf("%lld", a);
	return 0;
}

/*
long long int�� ?9,223,372,036,854,775,808 ~ 9,223,372,036,854,775,807
���尡��.

int�� -2147483648 ~ +2147483647
���尡��.
*/