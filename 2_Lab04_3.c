
#1934
#include <stdio.h>

int main(void)
{
    int T, A, B;
    int ans;

    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        scanf("%d %d", &A, &B);

        ans = A * B;

        while (A != B) {
            if (A > B) {
                A -= B;
            }
            else {
                B -= A;
            }
        }

        ans = ans / A;

        printf("%d\n", ans);
    }

    return 0;
}