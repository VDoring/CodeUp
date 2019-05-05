#include <stdio.h>
int main()
{
	unsigned int u;
	scanf("%u", &u); //앞으로 CodeUp채점시 scanf_s는 사용하지 말것
	printf("%u", u);
	return 0;
}

/*
https://dojang.io/mod/page/view.php?id=30
https://swchoo6087.ti
https://m.blog.naver.com/PostView.nhn?blogId=winterwolfs&logNo=10161320440&proxyReferer=https%3A%2F%2Fwww.google.co.kr%2F

unsigned int를 사용하려면 %u, %ud(추천)를 사용해야함
*/