#1475

#include <stdio.h>
#include <string.h>

char ch[7];
int arr[10];
int main() {
	scanf("%s", &ch);

	for (int i = 0; i < strlen(ch); i++) {
		arr[ch[i] - '0']++;
	}
	while (1) {
		int cnt = 0;
		if (arr[6] + 1 < arr[9]) { arr[6]++; arr[9]--; cnt++; }
		else if (arr[9] + 1 < arr[6]) { arr[9]++; arr[6]--; cnt++; }
		if (cnt == 0) { break; }
	}
	int max = 0;
	for (int i = 0; i < 10; i++) {
		if (max < arr[i]) { max = arr[i]; }
	}
	printf("%d", max);
}