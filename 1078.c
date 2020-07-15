#include <stdio.h>
int main() {
	int usrnum, evensum = 0;

	scanf("%d", &usrnum);

	for (int i = 1; i <= usrnum; i++) {
		if (i % 2 == 0)
			evensum = evensum + i;
	}
	printf("%d", evensum);

	return 0;
}