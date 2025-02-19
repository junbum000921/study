#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

// 최소값과 최대값을 구하는 매크로
#define min(x, y) ((x) < (y) ? (x) : (y))
#define max(x, y) ((x) > (y) ? (x) : (y))

// 문자열을 저장할 전역 변수
char str[1000000];

int main() {
    int N, M;
    int ans = 0;

    // 입력을 받아 N, M, str에 저장
    scanf("%d %d %s", &N, &M, str);

    // 문자열을 순회하며 패턴을 찾음
    for (int i = 0; i < M; i++) {
        int start, end;

        // 'I'가 아닌 경우 건너뜀
        if (str[i] != 'I')
            continue;

        start = i;
        // 연속된 'I'와 'O'를 찾음
        while (i < M - 1 && str[i] != str[i + 1])
            i++;

        end = i;
        // 마지막 문자가 'O'인 경우 제외
        if (str[i] == 'O')
            end--;

        // 패턴의 개수를 계산
        int cnt = max(0, end - start + 1 - (N * 2 + 1) + 1);
        cnt = (cnt + 1) / 2;
        ans += cnt;
    }

    // 결과 출력
    printf("%d", ans);
    return 0;
}