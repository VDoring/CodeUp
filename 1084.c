#include <stdio.h>

int main() {
	int R, G, B;
	int cnt = 0;
	
	scanf("%d %d %d", &R, &G, &B);
	
	for(int i = 0; i < R; i++) {
		for(int j = 0; j < G; j++) {
			for(int k = 0; k < B; k++) {
				printf("%d %d %d\n", i, j, k);
				cnt++;
			}
		}
	}
	printf("%d", cnt);
	
	return 0;
}
