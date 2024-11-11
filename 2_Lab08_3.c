#1267

#include <stdio.h>
int main() {
	int N, n, Y = 0, M = 0;

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &n);
		Y += 10 * (n / 30 + 1);
		M += 15 * (n / 60 + 1);
	}

	if (Y < M) printf("Y %d", Y);
	else if (Y == M) printf("Y M %d", Y);
	else printf("M %d", M);

	return 0;
}