#5086
#include <stdio.h>

int main(void) {

    int n1, n2;

    while (1) {
        scanf("%d %d", &n1, &n2);
        if (n1 == 0 && n2 == 0)
            return 0;

        //����϶�
        if (n2 % n1 == 0)
            printf("factor\n");
        //����϶�
        else if (n1 % n2 == 0)
            printf("multiple\n");
        //���x, ���x �϶�
        else
            printf("neither\n");

    }

    return 0;
}
