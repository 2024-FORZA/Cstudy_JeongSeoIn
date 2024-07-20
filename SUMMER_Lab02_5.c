#1735

#include <stdio.h>
int GCD(int a, int b) {
    return b ? GCD(b, a % b) : a;
}
int main() {
    int A, B, a, b;
    scanf("%d %d %d %d", &A, &B, &a, &b);
    int AA = A * b + a * B, BB = B * b;
    int gcd = GCD(AA, BB);
    printf("%d %d\n", AA / gcd, BB / gcd);
}
출처: https://kyr-db.tistory.com/152 [0과 1의 쉼터:티스토리]