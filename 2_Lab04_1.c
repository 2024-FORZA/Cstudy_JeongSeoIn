#1703
#include<stdio.h>

int main() {
    int n, a, b, c;
    while (1) {
        c = 1;
        scanf("%d", &n);
        if (!n) return 0;
        for (int i = 0; i < n; i++) {
            scanf(" %d %d", &a, &b);
            c = c * a - b;
        }
        printf("%d\n", c);
    }
}