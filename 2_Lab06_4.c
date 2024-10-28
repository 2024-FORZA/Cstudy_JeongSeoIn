#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100], a_rev[100], b_rev[100], ans[101];
    int carry = 0, i, length_a, length_b;

    scanf("%s %s", a, b);

    length_a = strlen(a);
    length_b = strlen(b);
    for (i = 0; i < length_a; i++) a_rev[i] = a[length_a - 1 - i];
    a_rev[length_a] = '\0';
    for (i = 0; i < length_b; i++) b_rev[i] = b[length_b - 1 - i];
    b_rev[length_b] = '\0';

    int max_length = length_a > length_b ? length_a : length_b;
    for (i = length_a; i < max_length; i++) a_rev[i] = '0';
    for (i = length_b; i < max_length; i++) b_rev[i] = '0';
    a_rev[max_length] = '\0';
    b_rev[max_length] = '\0';

    for (i = 0; i < max_length; i++) {
        int sum = (a_rev[i] - '0') + (b_rev[i] - '0') + carry;
        ans[i] = (sum % 2) + '0';
        carry = sum / 2;
    }
    if (carry) ans[i++] = '1';  
    ans[i] = '\0';

    for (int j = 0; j < i / 2; j++) {
        char temp = ans[j];
        ans[j] = ans[i - 1 - j];
        ans[i - 1 - j] = temp;
    }

    char* result = ans;
    while (*result == '0' && *(result + 1) != '\0') result++;
    printf("%s\n", result);

    return 0;
}
