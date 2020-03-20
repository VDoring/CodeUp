#include <stdio.h>
int main() {
	int num[100] = { 0, };
	int total_count;
	int i;

	scanf("%d", &total_count);

	for (i = 0; i < total_count; i++) {
		scanf("%d", &num[i]);
	}

	for (i = 0; i < total_count; i++) {
		printf("%d\n", num[i]);
	}

	return 0;
}