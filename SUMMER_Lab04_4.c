#1453
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int x;
    int arr[101] = { 0, };
    int count = 0;
    while (n--)
    {
        scanf("%d", &x);
        if (arr[x] == 0)
        {
            arr[x] = 1;
        }
        else
        {
            count++;
        }
    }
    printf("%d", count);
}