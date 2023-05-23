#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// Complete the following function.
int find_nth_term(int n, int a, int b, int c) {
    if (n <= 0) {
        return 0;
    } else if (n <= 3) {
        if (n == 1)
            return a;
        else if (n == 2)
            return b;
        else
            return c;
    } else {
        int sum = a + b + c;
        for (int i = 4; i <= n; i++) {
            int next_term = a + b + c;
            sum += next_term;
            a = b;
            b = c;
            c = next_term;
        }
        return sum;
    }
}

int main() {
    int n, a, b, c;

    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);

    printf("%d", ans);
    return 0;
}
