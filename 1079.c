#include <stdio.h>
int main() {
	char c;
	while (1) {
		scanf("%c", &c);
		printf("%c", c);
		if (c == 'q')
			break;
	}
	return 0;
}