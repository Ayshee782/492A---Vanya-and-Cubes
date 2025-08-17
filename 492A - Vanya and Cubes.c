#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int height = 0;
    int cubes_used = 0;
    int i = 1;

    while (1) {
        int needed = i * (i + 1) / 2;  // cubes needed for level i
        if (cubes_used + needed <= n) {
            cubes_used += needed;
            height++;
            i++;
        } else {
            break;
        }
    }

    printf("%d\n", height);
    return 0;
}

