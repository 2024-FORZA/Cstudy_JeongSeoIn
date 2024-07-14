#5622
#include <stdio.h>

int main() {
    char alpha[15];
    int i, count = 0;

    scanf("%s", &alpha);

    for (i = 0; i < strlen(alpha); i++) {
        if (alpha[i] >= 65 && alpha[i] <= 67) {
            count += 3;
        }
        if (alpha[i] >= 68 && alpha[i] <= 70) {
            count += 4;
        }
        if (alpha[i] >= 71 && alpha[i] <= 73) {
            count += 5;
        }
        if (alpha[i] >= 74 && alpha[i] <= 76) {
            count += 6;
        }
        if (alpha[i] >= 77 && alpha[i] <= 79) {
            count += 7;
        }
        if (alpha[i] >= 80 && alpha[i] <= 83) {
            count += 8;
        }
        if (alpha[i] >= 84 && alpha[i] <= 86) {
            count += 9;
        }
        if (alpha[i] >= 87 && alpha[i] <= 90) {
            count += 10;
        }
    }

    printf("%d", count);

    return 0;
}