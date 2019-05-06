#include <stdio.h>
int main()
{
	long long int a, b;

	scanf("%lld %lld", &a, &b);
	printf("%lld\n", a + b); //더하기
	printf("%lld\n", a - b); //빼기
	printf("%lld\n", a*b); //곱하기
	printf("%lld\n", a / b); //나누기
	printf("%lld\n", a%b); //나눈 나머지
	printf("%.2lf\n", (float)a/b); // a를 b로 나눈 값. 실수?
	return 0;
}