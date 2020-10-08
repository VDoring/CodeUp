#include <stdio.h>
int main() {
	int usrnum, cpunum = 0;
	int i;

	scanf("%d", &usrnum);

	for (i = 0; i <= usrnum; i++) {
		cpunum += i;
		if (cpunum >= usrnum) break;
	}
	printf("%d", i);

	return 0;
}