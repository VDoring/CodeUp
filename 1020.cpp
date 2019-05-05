#include <stdio.h>
int main()
{
	int fst, sec;
	scanf("%06d-%07d", &fst, &sec);
	printf("%06d%07d", fst, sec);
	return 0;
}