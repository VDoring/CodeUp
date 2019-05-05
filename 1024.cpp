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
	int i;
	char d[30];
	scanf("%s", d);
	for (i = 0; d[i] != 0; i++)
	{
		printf("\'%c\'\n", d[i]);
	}
}

/*
#include <stdio.h>
int main()
{
	char a[50];
	scanf("%s", a);
	for (i = 0; a[i] != '\0'; i++;);
	printf("\'%c\'\n", a[i]);
}
return 0;
*/

/*

char d[30]; //최대 30문자를 저장할 수 있는 저장 공간 준비. 마지막에 널문자가 옴을 고려해야함.
scanf("%s", d); //그 공간에 키보드로 입력된 내용을 저장. 단, 공백이 있으면 거기까지만 입력됨.
for(i=0; d[i]!='\0'; i++) //저장된 내용을 하나하나씩 검사해서 널문자가 아닌 동안 아래 내용 실행
{
   printf("\'%c\'\n", d[i]);
}

*/