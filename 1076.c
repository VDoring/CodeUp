#include <stdio.h>
int main() {
	char usr_alphabet;

	scanf("%c", &usr_alphabet);

	for (int i = 97; i <= usr_alphabet; i++)
		printf("%c ", i);

	return 0;
}