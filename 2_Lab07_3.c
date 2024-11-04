#1924

#include <stdio.h>

int mon[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
const char* date[7] = { "SUN","MON","TUE","WED","THU","FRI","SAT" };
int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    for (int i = 0; i < x - 1; i++) {
        y += mon[i];
    }
    printf("%s", date[y % 7]);
    return 0;
}