#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define min(x, y) (x) < (y) ? (x) : (y)
#define max(x, y) (x) > (y) ? (x) : (y)
char str[1'000'000];

int main() {
    int N, M;
    int ans = 0;
    scanf("%d %d %s", &N, &M, str);

    for (int i = 0; i < M; i++) {
        int start, end;

        if (str[i] != 'I')
            continue;

        start = i;
        while (i < M - 1 && str[i] != str[i + 1])
            i++;

        end = i;
        if (str[i] == 'O')
            end--;

        int cnt = max(0, end - start + 1 - (N * 2 + 1) + 1);
        cnt = (cnt + 1) / 2;
        ans += cnt;
    }

    printf("%d", ans);
    return 0;
}