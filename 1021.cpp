/*%d: 10진수(정수형)
%f: 실수형
% e : 지수형
% o : 8진수
%x : 16진수
%u : 부호없는 10진수
%g : 실수형 자동출력
%p : 포인터의 주소
%c : 하나의 문자로 출력
%s : 문자열
*/

#include <stdio.h>
int main()
{
	char a[51]; //최대 문자 개수를 51개로 설정함
	scanf("%s", &a); //문자열 = %s
	printf("%s", a);
	return 0;
}