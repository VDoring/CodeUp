#include <stdio.h>
int main() {
	int dice_first, dice_second;

	scanf("%d", &dice_first);
	scanf("%d", &dice_second);

	for (int i = 1; i <= dice_first; i++) {
		for (int j = 1; j <= dice_second; j++) {
			printf("%d %d\n", i, j);
		}
	}

	return 0;
}