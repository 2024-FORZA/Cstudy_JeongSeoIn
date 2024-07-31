#1598

#include <stdio.h>
#include <stdlib.h>

int main() {
	int n1, n2;
	int x1, y1, x2, y2;
	int manhattan_distance;

	scanf("%d %d", &n1, &n2);

	x1 = (n1 - 1) / 4;
	y1 = (n1 - 1) % 4;
	x2 = (n2 - 1) / 4;
	y2 = (n2 - 1) % 4;

	manhattan_distance = abs(x1 - x2) + abs(y1 - y2);

	printf("%d\n", manhattan_distance);

	return 0;
}