#4539
#include <stdio.h>

int roundNumber(int x) {
	int place = 1;
	while (x >= 10 * place) {
		int place2 = place * 10;
		int extra = x % place2;

		if (extra >= place2 / 2) {
			x += place2 - extra;
		}
		else {
			x -= extra;
		}
		place *= 10;
	}
	return x;
}

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		int x;
		scanf("%d", &x);
		printf("%d\n", roundNumber(x));
	}

	return 0;
}